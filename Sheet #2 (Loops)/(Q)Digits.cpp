#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while (t--)
{
  int n;
  cin>>n;
  if(n==0)
  cout<<"0"; 
  else
  while (n!=0)
  {
    cout<<n%10<<" ";
    n=n/10;
    }
 
  cout<<endl;  
  
}

  return 0;
}
