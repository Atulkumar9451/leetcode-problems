class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n==0) return false;
        float x=n;
        while(x!=1.00 && n!=1)
        {
            if(x!=n) return false;
            if(n%2!=0) return false;

            x=n/2;

            n=n/2;
            

        }
        if(n==1) return true;
        else return false;
    }
};