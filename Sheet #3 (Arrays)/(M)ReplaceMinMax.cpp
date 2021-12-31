#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
 
    int min=arr[0],max=arr[0],inmax,inmin;
    for(int i=0;i<n;i++)
    { if(min>=arr[i]){
      min=arr[i];
      inmin=i;}
      if(max<=arr[i]){
      max=arr[i];
      inmax=i;
      }
    }
     arr[inmax]=min;
     arr[inmin]=max;
    for(int i=0;i<n;i++)
     cout<<arr[i]<<" "; 
    return 0;
}
