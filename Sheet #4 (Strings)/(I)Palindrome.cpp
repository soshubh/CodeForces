#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin>>S;
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) {
        cout<< "YES";
    }
    else {
        cout<< "NO";
    }
 
    return 0;
}
