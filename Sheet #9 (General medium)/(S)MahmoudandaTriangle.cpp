#include <bits/stdc++.h>
using namespace std;
typedef long long int l;
typedef long double lb;
int main()
{
    int n,f=0;
    cin>>n;
   l arr[n];
   for(int i=0;i<n;i++)
    cin>>arr[i];
        sort(arr,arr+n);
      for (int j=0;j<(n-2);j++){
     if (arr[j]+arr[j+1]>arr[j+2])
     {
       f=1;
     }
    } 
   if(f)
    cout<<"YES";
   else
    cout<<"NO"; 
}
