class Solution {
public:
    double myPow(double x, int n) {
       double ans = 1;
        if( n == 0) return 1.0;
        if (n == 1) return x;
        long long temp = n;
        if(temp < 0){
            x = 1/x;
            temp = -1*1LL*n;
        }
        while(temp>0){
        if(temp%2 == 0){
            x *= x;
            // ans = ans * x;
            //temp = temp-1;
            temp = temp/2;
        }else{
            ans = ans * x;
            temp = temp-1;
        }
    }
    return ans;
    }
};