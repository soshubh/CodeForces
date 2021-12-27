#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,a,b,msum=0;
  cin>>n>>a>>b;
  for(int i=1;i<=n;i++)
  {int sum=0,m;
    int temp=i;
    while(temp>0)    
      {    
       m=temp%10;    
      sum+=m;    
      temp=temp/10;    
      }
    if((sum<=a&&sum>=b)||(sum>=a&&sum<=b))
    msum+=i;
  }
  cout<<msum;
}
