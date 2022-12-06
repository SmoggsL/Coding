#include <bits/stdc++.h>
using namespace std;
const int  maxn = 1e6;
int T,a,b;
int sdb[maxn];
int ans[maxn];
bool Prime(int n)
{
    if (n == 0 || n == 1) return 0;
    if (n == 2 || n == 3) return 1;
    for (int i = 2; i*i <= n; i++)
    {
        if (n%i == 0) return 0;
    }
    return 1;
}

void Sdb()
{
    sdb[36] = sdb [6561] = 1;
    for (int i = 5; i*i < maxn/9; i+= 2)
    {
        if (Prime(i)) sdb[i*i*9] = 1;
    }
}

void Sol()
{
    for (int i = 2; i <= maxn; i++)
    {
        ans[i] = ans[i-1] + sdb[i];
    }
}

int main() {
    freopen("SDB.INP","r",stdin);
    freopen("SDB.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> T;
    Sdb();
    Sol();
    while (T > 0)
    {
        cin >> a >> b;
        cout << ans[b] - ans[a-1] << endl;
        T--;
    }
    return 0;
}