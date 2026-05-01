class Solution {
public:
    int evalRPN(vector<string>& t) {
        int n = t.size();
        stack<int>st;
        int x =0;
        for(int i = 0 ; i < n ; i++){
            if(t[i]!="+" && t[i]!="-" && t[i]!="*" && t[i]!="/"){
                st.push(stoi(t[i]));
            }
            if((t[i]=="+"||t[i]=="-"||t[i]=="*"||t[i]=="/")&&!st.empty()){
                int b =  st.top();
                st.pop();
                int a = st.top();
                st.pop();
                if(t[i] == "+"){
                x = a  +  b;
                st.push(x);
                }else if(t[i] == "-"){
                x = a - b;
                 st.push(x);
                }else if(t[i] == "*"){
                x = a * b;
                st.push(x);
                }else{
                x = a / b;
                st.push(x);
                }
                
            }
        }
        return st.top();
    }
};