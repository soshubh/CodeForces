#include <bits/stdc++.h>
using namespace std;
int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = min(res, arr[i]);
    return res;
}
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   int min=getMin(a,n);
   int c=0; 
   for(int i=0;i<n;i++)
   {
    if(min==a[i])
      c++;
   } 
 
   if (c%2==0)
   {
    cout<<"Unlucky";
   }
   else
   {
     cout<<"Lucky";
   }
   
}
