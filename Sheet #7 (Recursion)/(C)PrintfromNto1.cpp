#include<bits/stdc++.h>
using namespace std;
void f(int n)
{  
    if(n<=0)
     return;
   
    else{
       cout<<n;
       if(n>1){
       cout<<" ";
       }
       f(n-1);
    }
 
}
int main()
{
  int n;
  cin>>n;
   f(n);
}
