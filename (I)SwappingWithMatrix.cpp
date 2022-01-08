#include <bits/stdc++.h>
using namespace std;
int f(int n,int x,int y)
{ 
  int a[n][n];
  for(int i=0;i<n;i++)
  for(int j=0;j<n;j++)
  cin>>a[i][j];
  int t;
  for(int j=0;j<n;j++)
  {
    t=a[x][j];
    a[x][j]=a[y][j];
    a[y][j]=t;
  }
  for(int i=0;i<n;i++)
  {
     t=a[i][x];
    a[i][x]=a[i][y];
    a[i][y]=t;
  }
 
  for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
  cout<<a[i][j]<<" ";}cout<<endl;}
}
int main()
{
  int n,x,y;
  cin>>n>>x>>y;
  f(n,x-1,y-1);  
}
