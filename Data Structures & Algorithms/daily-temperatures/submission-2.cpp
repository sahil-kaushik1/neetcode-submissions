class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> v(t.size(),0);
        stack<int> stk;
        stk.push(0);
        for(int i=1;i<t.size();i++){
          while(!stk.empty() && t[stk.top()] < t[i]){
            v[stk.top()]=(i-stk.top());
            stk.pop();
          }
          stk.push(i);
        }
        return v;
    }
};
