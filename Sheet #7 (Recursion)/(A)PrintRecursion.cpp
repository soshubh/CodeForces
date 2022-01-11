#include<bits/stdc++.h>
using namespace std;
int f(int n)
{  
    if(n==0)
     return 1;
    cout<<"I love Recursion"<<endl;
   n=n-1;
   f(n);
}
int main()
{
  int n;
  cin>>n;
   f(n);
}
