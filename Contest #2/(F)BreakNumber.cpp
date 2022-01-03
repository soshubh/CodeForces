#include <bits/stdc++.h>
using namespace std; 
#define ll long long int
int main(){
  int n;
  cin>>n;
  ll a[n];
  for(int i=0;i<n;i++)
   cin>>a[i];
  int b[n]; 
  for(int i=0;i<n;i++)
  {int c=0;
   while(a[i]%2==0)
   {
     a[i]=a[i]/2;
     c++;
   }
   b[i]=c;
  }
  sort(b,b+n);
  cout<<b[n-1];   
}
