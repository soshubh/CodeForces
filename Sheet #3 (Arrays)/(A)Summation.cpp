#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int n;
   cin>>n;
   int arr[n];
   long long s=0;
   for(int i=0;i<n;i++)
    {cin>>arr[i];
     s+=arr[i];}
     if(s<0)
       cout<<(-s);
     else
        cout<<s;  
         return 0;
}
