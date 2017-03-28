class Solution {
public:
    string longestPalindrome(string s) {
        int ans=0,pos1=0,pos2=0,a,b;
        int len =s.length();
        for(int i=0;i<len;++i)
        {
            int tmp=i;
            a=i;b=i;
            while(s[a]==s[b]&&a>=0&&b<len)
            {
                a--;
                b++;
            }
            if(b-a-1>ans)
            {
                ans=b-a-1;
                pos1=++a;
                pos2=--b;
            }
            a=i;b=i+1;
            while(s[a]==s[b]&&a>=0&&b<len)
            {
                a--;
                b++;
            }
            if(b-a-1>ans)
            {
                ans=b-a-1;
                pos1=++a;
                pos2=--b;
            }
        }
        string res;
        res.assign(s,pos1,ans);
        return res;
        
    }
};
