// soshubh
#include <bits/stdc++.h>
using namespace std;
typedef long long int l;
typedef long double lb;
l eq(int n,int x)
{ l sum=0;
  for(int i=2;i<=n;i=i+2)
  {
   sum+=pow(x,i);
  }
  return sum;
}
int main()
{ int x,n;
  cin>>x>>n;
  cout<<eq(n,x);
}
