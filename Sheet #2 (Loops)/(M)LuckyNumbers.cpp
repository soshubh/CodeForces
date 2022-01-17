// soshubh
#include<bits/stdc++.h>
using namespace std;
typedef long long int l;
typedef long double lb;    
int main()
{
    int a,b,f=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {int c=0,n=i,cd=0;
       while (n != 0)
       {   if(n%10==4||n%10==7)
            ++c;
           n = n / 10;
           ++cd;
       }
       if(cd==c)
        cout<<i<<" ";
       else
         f++;
     }
    //  cout<<f<<" "<<b-a+1;
     if(f==(b-a+1))
      cout<<"-1";
}     
