#include <bits/stdc++.h>
using namespace std;
long long int choose(int a,int b)
{
    if (b > a)
        return (-1);
    if(b==0 || a==1 || b==a)
        return(1);
    else
    {
        long long int r = ((choose(a-1,b))+(choose(a-1,b-  1)));
        return r;
    }
}
int main()
{
    long double n, r;
    cin >> n >> r;
    cout <<(choose(n, r)!=-1?choose(n, r):0);
  return 0;
}
