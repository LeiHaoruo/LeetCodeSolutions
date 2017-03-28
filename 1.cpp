class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) {
            map<int,int> index;
            vector<int> ans;
            map<int,int>::iterator  itr;
            for(int i=0;i<nums.size();++i)
            {
                if((itr=index.find(target-nums[i]))!=index.end())
                {
                    ans.push_back(index[target-nums[i]]);
                    ans.push_back(i);
                    return ans;
                }
                else index[nums[i]]=i;
            }
        }
    
};
