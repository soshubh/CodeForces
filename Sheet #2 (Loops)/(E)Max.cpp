#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n[t];
    for(int i=0;i<t;i++)
    cin>>n[i];
    int max=n[1],temp;
    for(int i=0;i<t;i++)
    {
      if(max<n[i])
      {
        max=n[i];
      }
    }
  cout<<max;
 
    return 0;
}
