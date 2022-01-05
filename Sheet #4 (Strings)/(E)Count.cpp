#include <iostream>
using namespace std;
long long findSum(string str)
{
    long long sum = 0;
 
    for (char ch : str)
    {
        if (isdigit(ch))
        {
            sum += ch - '0';
        }
    }
    return sum;
}
 
int main()
{
    string str;
    getline(cin,str);
    cout<< findSum(str) << endl;
}
