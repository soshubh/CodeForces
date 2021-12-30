#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
  int n,c=0;
  cin>>n;     
  int arr[n];
  for(int i=0;i<n;i++)
   cin>>arr[i];
  int m=(n-1);
  for(int i=0;i<n;i++)
    if(arr[i]==arr[m--])
      c++;
 
  if(c==n)
  cout<<"YES";
  else
  cout<<"NO";   
}
