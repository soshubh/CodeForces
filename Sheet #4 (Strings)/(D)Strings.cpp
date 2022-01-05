#include <bits/stdc++.h>
using namespace std;
int main(){
  char x[20],y[20];
  cin>>x>>y;
  int l1=strlen(x);
  int l2=strlen(y);
  cout<<l1<<" "<<l2<<endl;
  cout<<x<<y<<endl;
  char temp=x[0];
  x[0]=y[0];
  y[0]=temp;
  cout<<x<<" "<<y;
}  
