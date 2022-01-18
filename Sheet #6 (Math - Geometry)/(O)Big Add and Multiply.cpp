// soshubh
#include<bits/stdc++.h>
using namespace std;
typedef  unsigned long long int ul;
typedef long double lb;  
string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
    return "0";
    vector<int> result(len1 + len2, 0);
    int i_n1 = 0; 
    int i_n2 = 0; 
    for (int i=len1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0;         
        for (int j=len2-1; j>=0; j--)
        {
            int n2 = num2[j] - '0';
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;
            carry = sum/10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0)
            result[i_n1 + i_n2] += carry;
         i_n1++;
    }
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;
    if (i == -1)
    return "0";
    string s = "";    
    while (i >= 0)
        s += std::to_string(result[i--]);
    return s;
}
string findSum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    if (carry)
        str.push_back(carry+'0');
    reverse(str.begin(), str.end());
    return str;
}
 
int main()
{
    string str1;
    string str2 = "9999";
    cin>>str1;
    if((str1.at(0) == '-' || str2.at(0) == '-') && 
        (str1.at(0) != '-' || str2.at(0) != '-' ))
        cout<<"-";
 
 
    if(str1.at(0) == '-')
        str1 = str1.substr(1);
  
    if(str2.at(0) == '-')
        str2 = str2.substr(1);
    cout << findSum(str1, str2)<<endl;
    cout << multiply(str1, str2);
    return 0;
}
