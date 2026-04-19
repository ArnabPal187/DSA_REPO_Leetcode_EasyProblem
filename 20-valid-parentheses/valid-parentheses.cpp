class Solution {
public:
    bool isValid(string s) {
        if (s.length()%2!=0){
            return false;
        }
        if(s[0]==')' || s[0]=='}'||s[0]==']'){
            return false;
        }
        stack<char> st;
        bool ans=true;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('|| s[i]=='{'|| s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                if(s[i]==')'){
                    if(st.top()=='('){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else if(s[i]=='}'){
                    if(st.top()=='{'){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else if(s[i]==']'){
                    if(st.top()=='['){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    continue;
                }
            }
        }
        if(st.empty() and ans==true){
            return true;
        }
        return false;
    }
};