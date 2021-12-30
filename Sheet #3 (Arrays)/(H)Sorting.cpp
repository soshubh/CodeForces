#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
  int n,c=0;
  cin>>n;     
  int a[n];
  for(int i=0;i<n;i++)
   cin>>a[i];
  for(int i=0;i<n;i++)
  {int temp;
    for(int j=i;j<n;j++)
     if(a[i]>a[j])
     {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
  }
for(int i=0;i<n;i++)
   cout<<a[i]<<" ";
}
 
