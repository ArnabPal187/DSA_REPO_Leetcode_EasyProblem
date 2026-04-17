class Solution {
public:
    int romanToInt(string s) {
        long long res=0;
        int i;
        unordered_map<char,int> p={
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };
        for(i=0;i<s.size();i++){
            if(i+1<s.size() && p[s[i]]<p[s[i+1]]){
                res=res-p[s[i]];
            }
            else{
                res=res+p[s[i]];
            }
        }
        return res;
    }
};