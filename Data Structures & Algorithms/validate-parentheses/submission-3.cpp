class Solution {
public:
    bool isValid(string s) {
        if (s.size() < 2) return false;
        std::stack<char> st;
        for (char c: s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            if (c == ')') {
                if (st.empty() || st.top() != '(') return false;
                st.pop();
            }
            if (c == ']') {
                if (st.empty() || st.top() != '[') return false;
                st.pop();
            }
            if (c == '}') {
                if (st.empty() || st.top() != '{') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
