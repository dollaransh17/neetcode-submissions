class Solution{  
    public:
    int findContentChildren(vector<int>& greed_Student, vector<int>& Cookie){
        int n = greed_Student.size();
        int m = Cookie.size();
        int l = 0 ;
        int r = 0 ;
        sort(greed_Student.begin(), greed_Student.end());
        sort(Cookie.begin(), Cookie.end());
        while(l < n && r < m){
            if(greed_Student[l] <= Cookie[r]){
                l++;
            }
            r++;
        }
        return l;


    }
};