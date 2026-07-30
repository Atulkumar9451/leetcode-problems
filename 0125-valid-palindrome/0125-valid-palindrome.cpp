class Solution {
public:
    bool isPalindrome(string s)
    {
       
        
        string result="";
        for (char c:s)
        {
            
            if (isalpha(c)||isdigit(c)) result+=tolower(c);
        }
        
        string arr=result;
        int start=0;
        int end=arr.size()-1;
        while(start<=end)
        {
            swap(arr[start++],result[end--]);
        }
        if(arr==result) return true;
         
        return false;

        
    }
};