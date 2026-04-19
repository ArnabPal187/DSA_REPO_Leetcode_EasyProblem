class Solution {
public:
    int min1(string s1,string s2){
        if (s1.length()>s2.length()){
            return s2.length();
        }
        return s1.length();
    }
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        if (strs.size() == 1) return strs[0];
        string ans="",ans1="";
        for(int i=0;i<min1(strs[0],strs[1]);i++){
            if(strs[0][i]!=strs[1][i]){
                break;
            }
            ans.push_back(strs[0][i]);
        }
        for(int i=2;i<strs.size();i++){
            ans1.clear();
            for(int j=0;j<min1(ans,strs[i]);j++){
                if(ans[j]!=strs[i][j]){
                    break;
                }
                ans1.push_back(strs[i][j]);
            }
            ans=ans1;
            //for(int k=0;k<min1(ans,ans1);k++){
            //    ans[k]=ans1[k];
            //}
        }
        return ans;
    }
};