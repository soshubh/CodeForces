#include <bits/stdc++.h>
using namespace std;
int main(){
  int x[4],y[4],t;
  cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3];
  sort(x,x+4);
  sort(y,y+4);
  cin>>t;
  while(t--)
  {
    int a,b;
    cin>>a>>b; 
    if(a>=x[0]&&a<=x[3]&&b>=y[0]&&b<=y[3])
     cout<<"YES"<<endl;
    else
     cout<<"NO"<<endl; 
  }   
return 0;
} 
