// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
// ░░░░░░░░░░░░╔═╗░╔═╦╗░░╔╗╔╗░░░░░░░░░░░░
// ░░░░░░░░░░░░║═╬═╣═╣╚╦╦╣╚╣╚╗░░░░░░░░░░░
// ░░░░░░░░░░░░╠═║╬╠═║║║║║╬║║║░░░░░░░░░░░
// ░░░░░░░░░░░░╚═╩═╩═╩╩╩═╩═╩╩╝░░░░░░░░░░░
// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
// ░░░░░░░░╔═══╗╔═══╗╔═══╗╔═══╗░░░░░░░░░░
// ░░░░░░░░║╔═╗║║╔═╗║╚╗╔╗║║╔══╝░░░░░░░░░░
// ░░░░░░░░║║░╚╝║║░║║░║║║║║╚══╗░░░░░░░░░░
// ░░░░░░░░║║░╔╗║║░║║░║║║║║╔══╝░░░░░░░░░░
// ░░░░░░░░║╚═╝║║╚═╝║╔╝╚╝║║╚══╗░░░░░░░░░░
// ░░░░░░░░╚═══╝╚═══╝╚═══╝╚═══╝░░░░░░░░░░
// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
#include<bits/stdc++.h>
using namespace std;
typedef  unsigned long long int ul;
typedef long double lb;
long long findSum(long long A[], int N)
{
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}
int main()
{ int n;
  cin>>n;
  long long a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
 
  cout<<findSum(a,n);
    return 0;
}
