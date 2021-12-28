#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int f=n/10;
  int l=n%10;
  // cout<<f<<l;
 
     if((l!=0&&f%l==0)||(f!=0&&l%f==0))
      cout<<"YES";
     else
      cout<<"NO"; 
return 0;
}
