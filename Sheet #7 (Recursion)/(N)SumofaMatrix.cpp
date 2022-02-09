#include <bits/stdc++.h>
using namespace std;
#define N 100
int add(int m1[N][N], int m2[N][N], int rm[N][N], int r, int c, int i, int j)
{
    rm[i][j] = m1[i][j] + m2[i][j];
    if (i == r - 1 && j == c - 1)
        return 0;
    else if (j == c - 1)
        ++i;
    j = (j + 1) % c;
    add(m1, m2, rm, r, c, i, j);
}
int main()
{
    int m1[N][N], m2[N][N], mr[N][N], r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m1[i][j];
 
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m2[i][j];
 
    add(m1, m2, mr, r, c, 0, 0);
 
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << mr[i][j] << " ";
        cout << "\n";
    }
}
