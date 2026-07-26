class Solution {
public:
   bool isPalindrome(int x) 
    {
        int y=x;
        int revnum=0;
        while(y!=0)
        {
            int ld=y%10;
            if (revnum > INT_MAX/10 || (revnum == INT_MAX/10 && ld > 7)) {
    return 0;  // ya koi error value return karein
}
if (revnum < INT_MIN/10 || (revnum == INT_MIN/10 && ld < -8)) {
    return 0;
}
            revnum=revnum*10+ld;
            y=y/10;
        }
        if(revnum<0) return false;
        if(revnum==x) return true;
        else return false;

    }
     };     