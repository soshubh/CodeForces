#include <bits/stdc++.h>
using namespace std;
typedef long long int l;
typedef long double lb;
int main()
{
  int n,c=0,p=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
   cin>>arr[i];
  sort(arr,arr+n);
  for(int j=0;j<n;j++)
  { c=0;
  for(int i=j+1;i<n;i++)
   {
      if(arr[i]==arr[j])
         c++;
   }
    if(c!=0)
     p++;
  }
  if (p!=0)
  cout<<p;
  else if(p==0)
  cout<<"-1";
}
