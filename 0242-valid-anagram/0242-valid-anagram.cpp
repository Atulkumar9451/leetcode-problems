class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26,0);
        for(char c:s)
        {
            freq[c-'a']++;      
        }
        vector<int> v(26,0);
        for(char b:t)
        {
            v[b-'a']++;
        }
        int n;
        if(s.length()!=t.length()) return false;
        int i=0;
        while(i<26)
        {
            if(freq[i]!=v[i]) return false;
            i++;
        }
        return true;

    }
};