class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        if(n==0||n<4) return false;
        float x=n;
       
        while(x!=1.00)
        {
            if(n%2!=0 || n%4!=0) return false;
           
            if(n>=INT_MAX) return false;
            if(n<=INT_MIN) return false;
            x=n/4;
            n=n/4;
        }
         if(x!=n) return false;
        if(x==1.00) return true;
        else
     return false;
    }
};