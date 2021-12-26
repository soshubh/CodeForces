#include <bits/stdc++.h>
using namespace std;

int main() {
    char op;
    cin>>op;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    for(int i=0;i<n;i++)
    {for(int j=0;j<arr[i];j++)
    cout<<op;
    cout<<"\n";
    }
  return 0;
}
