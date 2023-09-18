#include <bits/stdc++.h>
using namespace std;
#define ll long long
string a,b;
ll c[3001][3001];

int main() {
    freopen("DP_A7.INP","r",stdin);
    freopen("DP_A7.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    getline(cin,a);
    getline(cin,b);
    int n = a.length();
    int m = b.length();
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(a[i-1] == b[j-1])
            {
                c[i][j] = c[i-1][j-1]+1;
            }
            else
            {
                c[i][j] = max(c[i-1][j],c[i][j-1]);
            }
        }
    }
    cout << c[n][m];
    return 0;
}