#include <bits/stdc++.h>
using namespace std;
long long int findMin(long long int a, long long int b, long long int c){
    long long int m1=min(a,b);
    return min(m1,c);    
}
 
 
int main()
{
 
    long long int n, m, k,c=0;
    cin >> n>> m >> k;
 
    if(m!=0){
      long long int min=findMin(n,m,k);
       c=c+min;
       n=n-min;
       m=m-min;
       k=k-min;
     }
     if(n>=(k*2)&&m==0)
      c=c+k;
     if(n<(k*2)&&m==0)
      c=c+n/2;
 
 
   cout << c;
 
    return 0;
}
