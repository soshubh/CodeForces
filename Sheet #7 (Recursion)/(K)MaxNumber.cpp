// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
// ░░░░░░░░░░░░╔═╗░╔═╦╗░░╔╗╔╗░░░░░░░░░░░░
// ░░░░░░░░░░░░║═╬═╣═╣╚╦╦╣╚╣╚╗░░░░░░░░░░░
// ░░░░░░░░░░░░╠═║╬╠═║║║║║╬║║║░░░░░░░░░░░
// ░░░░░░░░░░░░╚═╩═╩═╩╩╩═╩═╩╩╝░░░░░░░░░░░
// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
// ░░░░░░░░░░░░░╔╗░╔╦╦═╗╔╗╔╗░░░░╔╗░░░░░░░
// ░╔═╦═╦═╦╦╗╔══╣╚╗║╔╣╬║║╚╣╚╦═╗╔╝╠═╦═╦═╗░
// ░║═╣╬║╬║║║║║║║╔╣║╚╣╗╣║╬║║║╬╚╣╬╠╗║╔╣╩╣░
// ░╚═╩═╣╔╬╗║╚╩╩╩═╝╚╩╩╩╝╚═╩╩╩══╩═╝╚═╝╚═╝░
// ░░░░░╚╝╚═╝░░░░░░░░░░░░░░░░░░░░░░░░░░░░
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
int findmax(const int a[], int n)
{
    assert(n>0);
    if(n == 1)
        return a[0];
    else
    {
        return max(a[0], findmax(a + 1, n - 1));
    }
}
int main()
{ int n;
  cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
     cin>>a[i];

   cout<<findmax(a,n);  
    return 0;
}
