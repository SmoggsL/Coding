#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int n,k;
int a[64];

void writeAr(int a[],int n)
{
    for (int i = 1; i <= k; i++)
    {
        cout << a[i];
    }
    cout << "\n";
}

void sol(int x)
{
    for (int j = 1; j <= n; j++)
    {
        a[x] = j; 
        if (x >= k) 
        {
            writeAr(a,k);
        }
        else sol(x+1);
    }

}

int main() {
    freopen("CHINHHOP.INP","r",stdin);
    freopen("CHINHHOP.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    sol(1);
    return 0;
}