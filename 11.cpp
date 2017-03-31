class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0,tmp;
        int start=0,end=height.size()-1;
        while(start<end)
        {
            if(height[start]>height[end])
               tmp=height[end--];
            else
               tmp=height[start++];
            ans=max(ans,tmp*(end+1-start));
        }
        return ans;
    }
};
//O(n) Solution
//From 2 sides to the center
