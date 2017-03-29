class Solution {
public:
bool isMatch(string s, string p) {
  int **dp;
  dp = new int* [s.length()+1];
  for(int i=0;i<=s.length();++i)
    dp[i] = new int[p.length()+1];
  s=' '+s;
  p=' '+p;
  dp[0][0]=1;
  for(int i=1;i<s.length();++i)
    dp[i][0]=0;
  for(int i=1;i<p.length();++i)
    if(p[i]=='*'&&dp[0][i-2])
      dp[0][i]=1;
    else dp[0][i]=0;

  for(int i=1;i<s.length();++i)
    for(int j=1;j<p.length();++j)
    {
      dp[i][j]=0;
      if(s[i]==p[j]||p[j]=='.')
        dp[i][j]=dp[i-1][j-1];
      if(p[j]=='*')
      {
        dp[i][j]=dp[i][j-2]||dp[i][j-1];
        if(p[j-1]=='.'||(p[j-1]==s[i]&&s[i]==s[i-1]))
          dp[i][j]=dp[i][j]||dp[i-1][j];
      }
    }
  return(dp[s.length()-1][p.length()-1]==1)?true:false;
}
};
