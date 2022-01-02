#include <bits/stdc++.h>
using namespace std;
 
bool arePermutations(int arr1[], int arr2[], int n, int m)
{
    
    if(n != m)
    {
        return false;
    }
   
    map<int, int> hm;
       for (int i = 0; i < n; i++)
    {
        int x = arr1[i];
        hm[x]++;
    }
     
    for (int i = 0; i < m; i++)
    {
        int x = arr2[i];
       
    
        if(hm[x] == 0)
        {
            return false;
        }
        hm[x]--;
    }
    return true;
}
 
int main() {
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
     cin>>arr1[i];
    for(int i=0;i<n;i++)
     cin>>arr2[i];    
    if (arePermutations(arr1, arr2, n, n))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
     
    return 0;
}
