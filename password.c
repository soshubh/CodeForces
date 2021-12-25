#include <bits/stdc++.h>
using namespace std;
int main()
{
   char c[10]="Correct";
   char w[10]="Wrong";
   char m=w[0];
   while(m!=c[0]){
     int n;
     cin>>n;
     if(n==1999)
     {
       cout<<c;
       m=c[0];
     }
     else
       cout<<w<<endl;
   }
    return 0;
}
