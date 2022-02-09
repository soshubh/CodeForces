#include <bits/stdc++.h>
using namespace std;
int palindrome(int a[], int i, int n)
{
    if (i >= n)
        return 1;
    if (a[i] == a[n])
        return palindrome(a, i + 1, n - 1);
    else
        return 0;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    if (palindrome(a, 0, n - 1) == 1)
        cout << "YES";
    else
        cout << "NO";
}
