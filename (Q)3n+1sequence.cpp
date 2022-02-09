#include <bits/stdc++.h>
using namespace std;
long long c=0;
void count(int n)
{
  if(n<=1)
   return;
  else if(n%2!=0)
    count(3*n+1);
  else if(n%2==0)
    count(n=n/2);
   ++c;    
}
 
int main()
{
 int n;
  cin>>n;
 count(n);
  cout<<c+1;
}
