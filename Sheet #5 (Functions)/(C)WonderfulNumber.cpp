// soshubh
#include <bits/stdc++.h>
using namespace std;
typedef long long int l;
typedef long double lb;
l reverseBits(l n)
{
    l rev = 0;
    while (n>0) {
        rev<<=1;
        if (n&1==1)
            rev^=1;
        n>>=1;
    }
    return rev;
}

bool isPalindrome(l n)
{

    l rev = reverseBits(n);

    return (n==rev);
}

int main()
{
    l n;
    cin>>n;
    if (isPalindrome(n)&&(n%2!=0))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
