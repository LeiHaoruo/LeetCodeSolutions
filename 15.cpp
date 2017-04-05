class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int range=nums.size()-2;
        for(int i=0;i<range;++i)
        {
            int target=0-nums[i];
            int left=i+1,right=nums.size()-1;
            while(left<right)
            {
                if(nums[left]+nums[right]==target)
                {
                    vector<int> tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[left]);
                    tmp.push_back(nums[right]);
                    res.push_back(tmp);
                    while(left<right&&nums[left+1]==nums[left])left++;
                    left++;
                    while(left<right&&nums[right-1]==nums[right])right--;
                    right--;
                }
                else if(nums[left]+nums[right]<target)
                {
                    while(left<right&&nums[left+1]==nums[left])left++;
                    left++;
                }
                else{
                    while(left<right&&nums[right-1]==nums[right])right--;
                    right--;
                }
            }
            while(i<range&&nums[i+1]==nums[i])i++;
        }
        return res;
    }
};
