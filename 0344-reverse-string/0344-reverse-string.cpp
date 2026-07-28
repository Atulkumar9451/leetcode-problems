class Solution {
public:
    void reverseString(vector<char>& s) {
        int a=0;
        int end=(s.size()-1);
        while(a<end)
        {
            swap(s[a++],s[end--]);
        }
        
    }
};