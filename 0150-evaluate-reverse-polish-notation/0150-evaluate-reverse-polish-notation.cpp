class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0; i<tokens.size(); i++) {
            string s = tokens[i];
            // Agar number hai
            if(isdigit(s[0]) || s.size() > 1) {
                st.push(stoi(s));
            } else {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                if(s == "+") st.push(a+b);
                else if(s == "-") st.push(a-b);
                else if(s == "*") st.push(a*b);
                else if(s == "/") st.push(a/b);
            }
        }
        return st.top();
    }
};
