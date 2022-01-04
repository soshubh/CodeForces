#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--)
  {
    long long int a,d,sum;
    cin>>a>>d;
    if(a<d)
      sum=(d-a+1)*(2*a+(d-a))/2;
    else if(a>d)
     sum=(a-d+1)*(2*d+(a-d))/2;
    cout<<sum<<endl; 
  }
}  
