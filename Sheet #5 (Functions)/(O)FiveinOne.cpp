// soshubh
#include <bits/stdc++.h>
using namespace std;
typedef long long int l;
typedef long double lb;
int fmin(int arr[], int n)
{
 int min;
 min = arr[1];
 for(int i = 0; i < n; i++)
   if(min > arr[i])
     min = arr[i];
 
 return min;    
}
int fmax(int arr[], int n)
{
 int max;
 max = arr[1];
 for(int i = 0; i < n; i++)
   if(max < arr[i])
     max = arr[i];
 
 return max;    
}
int checkPrime(int arr[],int n){
    int max_val = *max_element(arr, arr+n);
 
    vector<bool> prime(max_val + 1, true);
    prime[0] = false;
    prime[1] = false;
    for (int p = 2; p * p <= max_val; p++) {
        if (prime[p] == true) {
            for (int i = p * 2; i <= max_val; i += p)
                prime[i] = false;
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
        if (prime[arr[i]])
            count++;   
    return count;
}
int chekpalindrome(int a[],int n)
{
  int countPallindrome = 0;
    for (int i = 0; i < n; i++)
        if ((a[i] >= 1 && a[i] <= 9) || (a[i] % 11 == 0))
            countPallindrome++;
    return countPallindrome;        
}
int countDivisors(int n)
{ 
  int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            if (n / i == i) 
                cnt++; 
            else 
                cnt = cnt + 2; 
        } 
    } 
  return cnt; 
}
int main()
{   int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
     cin>>arr[i];
    
    
    int min = fmax( arr, n);
    cout<<"The maximum number : "<<min<<endl;
    int max = fmin( arr, n);
    cout<<"The minimum number : "<<max<<endl;
        
    cout<<"The number of prime numbers : "<<checkPrime(arr , n)<<endl;
    int c = chekpalindrome(arr, n);
    cout<<"The number of palindrome numbers : "<<c<<endl;
    sort(arr, arr + n);
    int b[n];
    for (int i = 0; i < n; i++)
      b[i]=countDivisors(arr[i]);
 
    max=b[0];
    for (int i = 0; i < n; i++)
        if(max<b[i])
        max=b[i];
    int t;
    for (int i = 0; i < n; i++)
     {  if(max==b[i])
         t=i;
     }
    cout<<"The number that has the maximum number of divisors : "<<arr[t];
    return 0;
}
