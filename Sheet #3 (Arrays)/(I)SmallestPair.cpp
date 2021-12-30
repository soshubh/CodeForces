#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;     
  int a[n];
  long long int b,min;
  for(int i=0; i<n; i++)
   cin>>a[i];
  min=2147483647; 
  for(int i=0; i<n; i++)
  {
    for(int j=(i+1);j<n;j++)
     { b=a[i]+a[j]+(j+1)-(i+1);
        if(min>b)
          min=b;
     }
  }
 
cout<<min<<endl;
}
}
