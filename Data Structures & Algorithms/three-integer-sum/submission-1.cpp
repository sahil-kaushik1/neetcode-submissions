class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int k=0;k<nums.size();k++){
            if(k > 0 && nums[k] == nums[k-1])
    continue;
            int i=k+1;
            int j=nums.size()-1;
            while(i<j){
                if(nums[i]+nums[j]>(-1*nums[k]) )j--;
                else if(nums[i]+nums[j]<(-1*nums[k]))i++;
                else {
    v.push_back({nums[k], nums[i], nums[j]});

    i++;
    j--;

    while(i < j && nums[i] == nums[i-1]) i++;
    while(i < j && nums[j] == nums[j+1]) j--;
}
            }
        }
       
        return v;
    }
};
