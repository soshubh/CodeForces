// ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
// ░░░░░░░░░░░╔═╗░╔═╦╗░░╔╗╔╗░░░░░░░░░░░░░
// ░░░░░░░░░░░║═╬═╣═╣╚╦╦╣╚╣╚╗░░░░░░░░░░░░
// ░░░░░░░░░░░╠═║╬╠═║║║║║╬║║║░░░░░░░░░░░░
// ░░░░░░░░░░░╚═╩═╩═╩╩╩═╩═╩╩╝░░░░░░░░░░░░
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
typedef long long int l; 
int main()
{
    l n;
    long double p;
    cin>>n;
    p=log2(n);
    cout<<(ceil(p)-p!=0.00?"NO":"YES");
    
    return 0;
}
