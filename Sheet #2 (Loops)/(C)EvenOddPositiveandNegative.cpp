#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,odd=0,even=0,postive=0,nigative=0;
    cin>>n;
    int a[n];
 
    for(int i=0;i<n;i++)
    {scanf("%d",&a[i]);
    if(a[i]>0)
      postive++;
    if(a[i]<0)
      nigative++;
    if(a[i]%2==0)
      even++;
    if(a[i]%2!=0)
      odd++;
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<postive<<endl;
    cout<<"Negative: "<<nigative<<endl;
    return 0;
}
