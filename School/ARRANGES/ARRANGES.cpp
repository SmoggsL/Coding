#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int n,k;
int a[64],check[22];

void print(int a[],int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << "\n";
}

void sol(int x)
{
    for (int i = 1; i <= n; i++)
    {
        if(check[i] == 0)
        {
            a[x] = i;
            check[i] = 1;
            if(x >= k) print(a,k);
            else sol(x+1);
            check[i] = 0;
        }
    }
}

int main() {
    freopen("ARRANGES.INP","r",stdin);
    freopen("ARRANGES.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    sol(1);
    return 0;
}