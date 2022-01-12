#include<bits/stdc++.h>
using namespace std;
void f(int n)
{  
    if(n<=0)
     return;
    
   f(n-1);
   cout<<n<<endl;
}
int main()
{
  int n;
  cin>>n;
   f(n);
}
