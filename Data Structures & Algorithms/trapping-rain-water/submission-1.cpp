class Solution {
public:
    int trap(vector<int>& h) {
        int area=0;
        int n = h.size();

vector<int> leftMax(n);
vector<int> rightMax(n);

leftMax[0] = h[0];
rightMax[n-1] = h[n-1];

for(int i = 1; i < n; i++) {
    leftMax[i] = max(leftMax[i-1], h[i]);
}

for(int i = n-2; i >= 0; i--) {
    rightMax[i] = max(rightMax[i+1], h[i]);
}
        for(int i=0;i<h.size();i++){
            area+=(min(leftMax[i],rightMax[i])-h[i]);

        }
        return area;
    }
};
