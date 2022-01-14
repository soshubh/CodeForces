#include <bits/stdc++.h>
using namespace std;
typedef long long int l;
typedef long double lb;
bool checkValidity(int a, int b, int c)
{
    if (a + b <= c || a + c <= b || b + c <= a)
        return false;
    else
        return true;
}
int main()
{
    double a,b,c;
    cin>>a>>b>>c;      
    lb s=(a+b+c)/2;
    if (checkValidity(a, b, c))
       { cout << "Valid"<<endl;
          cout<<fixed<<setprecision(6)<<sqrt(s*(s-a)*(s-b)*(s-c));
       }
    else
        cout << "Invalid";    
}
