#include <bits/stdc++.h>
using namespace std;
 
int main(){
  double x[4],y[4],m1,m2;
  cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3];
  if(x[0]-x[1]!=0||x[2]-x[3]!=0){
   m1=(y[1]-y[0])/(x[1]-x[0]);
   m2=(y[3]-y[2])/(x[3]-x[2]);}
  if(x[0]-x[1]==0||x[2]-x[3]==0){
   m1=(x[1]-x[0])/(y[1]-y[0]);
   m2=(x[3]-x[2])/(y[3]-y[2]);}
  // cout<<m1<<" "<<m2;
  if(m1==m2)
   cout<<"YES";
  else cout<<"NO"; 
return 0;
} 
