// soshubh
#include<bits/stdc++.h>
using namespace std;
typedef  unsigned long long int ul;
typedef long double lb;
   
int main(){
 int n;
 cin>>n;
 int a[n],b[n];
 for(int i=0;i<n;i++)
  {
      cin>>a[i];
      b[i]=a[i];
  }
  sort(b,b+n);
  int min = b[0],index;
  for(int i=0;i<n;i++)
  {
      if(min==a[i]){
       index=i; break;}
  }
  cout<<min<<" "<<index+1;
}     
