class Solution {
public:
    int myAtoi(string str) {
        if(str.length()==0)
            return 0;
        long long ans=0;
        int sign=1,pos=0;
        while(str[pos]==' ')pos++;
        if(str[pos]=='-'||str[pos]=='+')
        {
            sign=(str[pos]=='-')?-1:1;
            pos++;
        }

        for(int i=pos;i<str.length();++i)
            if(str[pos]>='0'&&str[pos]<='9')
            {
                ans=ans*10+(str[pos++]-'0');
                if(ans>INT_MAX||ans<INT_MIN)
                    break;
            }
            else break;
        if(sign<0)ans=0-ans;
        if(ans>INT_MAX)ans=INT_MAX;
        if(ans<INT_MIN)ans=INT_MIN;
        return ans;
    }
};
