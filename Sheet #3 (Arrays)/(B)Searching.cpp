#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
    cin>>arr[i];
   int p,c=-1;
   cin>>p;
   for(int i=0;i<n;i++)
    if(p==arr[i])
        { c=i;break;}
 
   if(c!=-1)
     cout<<c;
   else
     cout<<"-1";         
         return 0;
}
