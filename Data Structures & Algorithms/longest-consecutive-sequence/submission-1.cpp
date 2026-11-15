class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1) return nums.size();
        sort(nums.begin(),nums.end());
        int l=0;
        int x=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i])continue;
            if(nums[i+1]-nums[i]==1){
                x++;
                if(x>l)l=x;
            }
            else{
                x=0;
            }
        }
        return l+1;
        
    }
};
