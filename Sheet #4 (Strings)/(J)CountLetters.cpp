#include <bits/stdc++.h>
using namespace std;
int p[123];
int main()
{
    string S;
    cin>>S;
    
    for(long long i=0;i<S.length();i++)
     for(int j=97;j<=122;j++)
        if(S[i]==char(j))
           p[j]++;  
    
    for(int j=97;j<=122;j++)
     if(p[j]!=0)
      cout<<char(j)<<" : "<<p[j]<<endl;
    return 0;
}
