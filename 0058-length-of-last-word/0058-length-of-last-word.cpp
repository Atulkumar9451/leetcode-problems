class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.length()-1;
        int count=0;
        for(int i = length; i>=0;)
        {
            if(s[i]==' ') i--;
            else{
                while(s[i]!=' ')
                {
                    count++;
                    if(i==0&&s[i]!=' ') return count;
                    else
                    i--;
                }
                break;
            }

        }
        return count;
    }
};