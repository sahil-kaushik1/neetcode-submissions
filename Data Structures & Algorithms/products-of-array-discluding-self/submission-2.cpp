class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v;
        int prod=1;
        bool flag=true;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==0 && flag){
                flag=false;
                continue;
            }
            prod*=nums[i];
            if(prod==0)break;
        }
        for(int i =0;i<nums.size();i++){
            if(nums[i]==0)v.push_back(prod);
            else if(!flag)v.push_back(0);
            else v.push_back(prod/nums[i]);
        }
    
    return v;
    }

};
