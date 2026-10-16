class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        for(char c:s)
        {
            if(c=='I') mp[c]=1;
            if(c=='V') mp[c]=5;
            if(c=='X') mp[c]=10;
            if(c=='L') mp[c]=50;
            if(c=='C') mp[c]=100;
            if(c=='D') mp[c]=500;
            if(c=='M') mp[c]=1000;

        }

        int num = 0;
      



        for(int i = 0;i<s.length()-1;i++)
        {
            int curr = mp[s[i]];
            int next = mp[s[i+1]];
            if(curr<next) num=num-curr;
            else num=num+curr;
        }
        return num+mp[s[s.length()-1]];

    }
};