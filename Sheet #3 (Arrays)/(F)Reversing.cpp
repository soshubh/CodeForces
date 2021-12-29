#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n,m;
  cin>>n;
  m=n;
  int a[n],b[n],min;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    b[--m]=a[i];
  }
  for(int i=0;i<n;i++)
   cout<<b[i]<<" ";
   
         return 0;
 
}
