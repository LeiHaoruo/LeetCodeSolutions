#include <iostream>
#include <cstdio>
#include <string>
#include <map>
using namespace std;

//lhr 
 bool canPartition(int A[],int N) {
        int sum = 0; 
        for(int i=0;i<N;++i)
            sum+=A[i];
        if(sum%2==1) 
            return false;
        sum=sum/2; 
        bool reachable[sum+1]; 
        for(int i=0;i<=sum;++i)
            reachable[i]=false;
        reachable[0]=true;
        for(int i=0;i<N;++i) 
        {
          int tmp=A[i]; 
          for(int j=sum-tmp;j>=0;--j) 
              if(reachable[j])
              {
                  reachable[j+tmp]=true; 
                  if(j+tmp==sum) 
                    return true;
              }
        }
        
        return false;
}

int main(){
    int n;
    cin>>n;
    
    int *a = new int[n];
    int sum=0;
    for(int i=0;i<n;++i)
    {
    	cin>>a[i];
    	sum+=a[i];
	}
    if(canPartition(a,n))
    	cout<<sum/2<<endl;
    else cout<<-1<<endl;
	return 0;
}
