class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int area=0;
        stack<int> stk;
        stk.push(0);
        for(int i=1;i<h.size();i++){

            while (!stk.empty() && h[stk.top()] > h[i]) {
                int a = stk.top();
                stk.pop();

                int left = stk.empty() ? -1 : stk.top();
                int width = i - left - 1;

                area = max(area, h[a] * width);
            }

            stk.push(i);
        }

        // Process remaining bars
        while (!stk.empty()) {
            int a = stk.top();
            stk.pop();

            int left = stk.empty() ? -1 : stk.top();
            int width = h.size() - left - 1;

            area = max(area, h[a] * width);
        }
        return area;
        
    }
};
