class Solution {
public:
    bool isPalindrome(int x) {
        long long y=0,p,m;
        if(x<0){
            return false;
        }
        else{
            p=x;
            while(x!=0){
                m=x%10;
                y=y*10+m;
                x=x/10;
            }
            if(y==p){
                return true;
            }
            else{
                return false;
            }
        }
    }
};