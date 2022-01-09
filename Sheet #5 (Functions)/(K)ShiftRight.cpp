#include <bits/stdc++.h>
using namespace std;
int f(int arr[],int n,int x)
{ while (x--)
{
int last = arr[n - 1];		
	for (int i = n - 1; i > 0; i--)	
		arr[i] = arr[i - 1];		
	arr[0] = last;
}
 for(int i = 0; i < n ;i++)
  cout<< arr[i]<<" ";
}
int main()
{
  int n,x;
  cin>>n>>x;
  int a[n];
  for(int i=0;i<n;i++)
   cin>>a[i];
  f(a,n,x);
}
