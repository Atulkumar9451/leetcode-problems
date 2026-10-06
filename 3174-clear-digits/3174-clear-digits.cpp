class Solution {
public:
    string clearDigits(string s) {
        stack <char>  st;
        for(int i = 0 ; i < s.length() ; i++ )
        {
            if(!isdigit(s[i])) 
            st.push(s[i]);
            else st.pop();
        }
        string t="";

        while(!st.empty())
        {
            t.push_back(st.top());
            st.pop();
        }
        reverse(t.begin(),t.end());
        return t;
    }
};