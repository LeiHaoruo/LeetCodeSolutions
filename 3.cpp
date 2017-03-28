class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> map(256,-1);
        int start=-1;
        int len=0;
        for(int i=0;i<s.length();++i)
        {
            start = max(map[s[i]]+1,start);
            len = max(len,i-start+1);
            map[s[i]]=i;
        }
        return len;
    }
};
