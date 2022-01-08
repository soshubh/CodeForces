#include <bits/stdc++.h>
using namespace std;
int print(char a,int n)
{ while(n--)
  cout<<a<<" ";
  
}
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n;char b;
    cin>>n>>b;
    print(b,n);
    cout<<endl;
  }
  
}
