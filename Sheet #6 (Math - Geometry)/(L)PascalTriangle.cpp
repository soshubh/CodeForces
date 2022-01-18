// soshubh
#include<bits/stdc++.h>
using namespace std;
typedef  unsigned long long int ul;
typedef long double lb;  
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void printPascal(int n)
{
    int arr[n][n]; 
    for (int line = 0; line < n; line++)
    {
        for (int i = 0; i <= line; i++)
        {
        if (line == i || i == 0)
            arr[line][i] = 1;
        else
            arr[line][i] = arr[line - 1][i - 1] + 
                            arr[line - 1][i];
        cout << arr[line][i] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cin>>n;
    printPascal(n);
    return 0;
}
