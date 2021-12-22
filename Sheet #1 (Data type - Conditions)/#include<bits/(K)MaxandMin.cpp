#include<bits/stdc++.h>
using namespace std;
int main()
{ long int a,b,c,min,max;
   cin>>a>>b>>c;
    if(a>=b&&a>=c)
    max=a; 
    if(b>=a&&b>=c)
    max=b;
    if(c>=a&&c>=b)
    max=c;
     if(a<=b&&a<=c)
    min=a; 
     if(b<=a&&b<=c)
    min=b;
     if(c<=a&&c<=b)
    min=c;
   cout<<min<<" "<<max;  
return 0;
}
