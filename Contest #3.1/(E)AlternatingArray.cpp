#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,c=0,b=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<n;i++)
  {
    if(i%2!=0&&a[i]>0)
      c++;
    if(i%2==0&&a[i]<0)
      c++;  
  }
  for(int i=0;i<n;i++)
  {
    if(i%2!=0&&a[i]<0)
      b++;
    if(i%2==0&&a[i]>0)
      b++;  
  }
  if(c>=b)
   cout<<b;
  if(c<b)
    cout<<c; 
}  
