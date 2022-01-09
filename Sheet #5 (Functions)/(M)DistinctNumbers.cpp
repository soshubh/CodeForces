#include <bits/stdc++.h>
using namespace std;
int count(int arr[], int n)
{
    int res = 1;
     for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break; 
        if (i == j)
            res++;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n; i++)
    cin>>arr[i];
    int r= count(arr, n);
 
    if(r==1)
    cout<<"0";
    else
    cout<<r;
    return 0;
}
