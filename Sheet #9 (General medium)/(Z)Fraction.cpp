#include <bits/stdc++.h>
using namespace std;
typedef long long int l;
typedef long double lb;
int gcd(int a, int b)
{
  return b == 0 ? a : gcd(b, a % b);   
}
int main()
{
   int n1,d1,n2,d2;
   char l;
   cin>>n1>>l>>d1>>n2>>l>>d2;
   int max;
    max = (n1 > n2) ? n1 : n2;
    do
    {if (max % n1 == 0 && max % n2 == 0)
      { cout<<max;
            break;}
       else
       ++max;
    } while (true);
   int min=gcd(d1,d2);
   cout<<l<<min;
}
