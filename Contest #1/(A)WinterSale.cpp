#include<bits/stdc++.h>
using namespace std;
int main()
{
  int p,x;
  cin>>p>>x;
  p=100-p;
  double r= (float)x*(float)(100/(float)p);
  cout <<fixed<<setprecision(2)<<r;
return 0;
}
