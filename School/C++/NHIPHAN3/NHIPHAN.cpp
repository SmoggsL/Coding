#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int n;
int a[33];
void writeAr(int a[],int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << "\n";
}
void sol(int x)
{
    for (int i = 0; i <= 1; i++)
    {
        a[x] = i;
        if (x == n) 
        {
            writeAr(a,n);
        }
        else sol(x+1);
    }
}

int main() {
    freopen("NHIPHAN.INP","r",stdin);
    freopen("NHIPHAN.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    sol(1);
    return 0;
}