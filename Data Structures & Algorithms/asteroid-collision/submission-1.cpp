class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n = a.size();
        vector<int>res;
        stack<int>st;
        for(int i = 0 ; i < n ;i++){
            if(a[i]>0){
                st.push(a[i]);
            }else{
                while(!st.empty()&& st.top()>0 and st.top() < abs(a[i])){
                    st.pop();
                }if(st.empty() || st.top()<0){
                    st.push(a[i]);
                }else{
                    if(!st.empty() && st.top() == abs(a[i])){
                        st.pop();
                    }
                }
            }
        }
        for(int i = 0 ; i < n ;i++){
            while(!st.empty()){
            res.push_back(st.top());
              st.pop();
        }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};