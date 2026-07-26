class Solution {
public:
    int mySqrt(int x)
     { double y;
        if(x!=0) y=x;
        else y=1;
        int i=0;
        while(i<25)
        { 

           y=(y+x/y)/2;
           i++;
        }
        
        return x=(int) y;
        
        
    }
};