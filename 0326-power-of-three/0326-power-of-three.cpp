class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0) return false;
        float x=n;
        while(x!=1.0 && n!=1)
        {
            if(n%3!=0) return false;

            if(x!=n) return false;

            x=n/3;
            n=n/3;
        }
        if(n==1) return true;
        return false;
    }
};