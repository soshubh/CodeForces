#include <bits/stdc++.h>
using namespace std;
int main() {
   int m=1,n=1;
   while(m>0||n>0)
   {int sum=0;
       cin>>m>>n;
        if(m>n&&m>0&&n>0)
        {
          for(int i=n;i<=m;i++)
          { cout<<i<<" ";
          sum+=i;}
        }
        if(m<n&&m>0&&n>0)
        {
          for(int i=m;i<=n;i++)
          {cout<<i<<" ";
          sum+=i;}
        }
        if(m==n&&m>0&&n>0)
          {  cout<<m<<" ";
              sum+=m;}
        if(m>0&n>0)
         cout<<"sum ="<<sum<<endl;
        else
         return 0;
   }
 
}
