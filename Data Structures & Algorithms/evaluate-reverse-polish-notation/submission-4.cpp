class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        if(tokens.size()==1)return stoi(tokens[0]);
        stack<int>stk;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")stk.push(stoi(tokens[i]));
            else{
                int a =stk.top();stk.pop();
                int b =stk.top();
                stk.pop();
                int temp = arith(b,a,tokens[i]);
                stk.push(temp);
            }
        }     
return stk.top();
    }

    int arith(int a, int b, string c){
        if(c=="+") return a+b;
        else if(c=="-")return a-b;
        else if (c=="*") return a*b;
        else if (c=="/")return a/b;
        return 0;
    }
};
