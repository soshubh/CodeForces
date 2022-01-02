#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,i,j;
  cin>>n>>m;
  int a[n][m];
  for(i=0;i<n;i++)
   for(j=0;j<m;j++)
    cin>>a[i][j];
  for(i=0;i<n;i++){
   for(j=m-1;j>=0;j--){
   cout<<a[i][j]<<" ";}
   cout<<endl;}  
  return 0;
}
