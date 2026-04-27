class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>st;
        vector<char>vec;

        for(int i = 0 ; i< s.size() ;i++){
            st.push(s[i]);
        }
        while(!st.empty()){
            char ch = st.top();
            st.pop();
            vec.push_back(ch);
        }
        s =vec;
    }
};