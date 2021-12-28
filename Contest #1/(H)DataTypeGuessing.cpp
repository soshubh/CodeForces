#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    int a, k, n;
 
    cin >> n >> k >> a;
 
    long long int multiply = (long long int)n * (long long int)k;
 
    if (multiply % a != 0)
        cout << "double" << endl;
    else if (multiply / a > 2147483647)
        cout << "long long" << endl;
    else
        cout << "int" << endl;
 
    return 0;
}
