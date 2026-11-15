class MinStack {
public:

stack<int>stk;
stack<int>temp;
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        if(temp.empty()){
            temp.push(val);
        }
        else{
            if(temp.top()>=val){
                temp.push(val);
            }
        }
    }
    
    void pop() {
        if(stk.top()==temp.top())temp.pop();
        return stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
       return temp.top();
    }
};
