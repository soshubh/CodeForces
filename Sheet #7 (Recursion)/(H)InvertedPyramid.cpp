#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
int i=1;
void print_space(int space)
{
    if (space == 0)
        return;
    cout << " ";
    print_space(space - 1);
    
}
void print_asterisk(int asterisk)
{
    if (asterisk == 0)
        return;
    cout << "*";
    print_asterisk(asterisk - 1);
}
void pattern(int n, int num)
{
    if (n ==0)
        return;
    print_space(i-1);
    print_asterisk(n*2-1);
    cout<<nl;
    i++;
    pattern(n - 1, num);
   
}
int main()
{
    int n;
    cin>>n;
    pattern(n, n);
    return 0;
}
