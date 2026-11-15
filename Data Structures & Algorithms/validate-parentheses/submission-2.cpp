class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(char c:s){
            if (!stk.empty() ){
            if(stk.top() == '(' && c==')'){
                stk.pop();
                continue;
            }
            else if(stk.top() == '{' && c=='}'){
                stk.pop();
                                continue;

            }
            else if(stk.top() == '[' && c==']'){
                stk.pop();
                                continue;

            }}
            stk.push(c);

        }
        return stk.empty();
    }
};
