#include <bits/stdc++.h>
using namespace std;
int main(){
  long long n,k,i,t,min;
  cin>>n>>k;
  long long a[n];
  for(i=0;i<n;i++)
   cin>>a[i];
  if(k>n)
   k=n;
  long long l=0,r=k;
  while(l<n)
  {min=a[l];
    for(i=l;i<r;i++)
     {
       if(min>a[i])
         min=a[i];
     }
    cout<<min<<" ";
    l=l+k,r=r+k;
    if(r>n)
     r=n;
  } 
}  
