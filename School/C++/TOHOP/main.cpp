#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;

int a[35];
int n,k; 

void print(int a[35], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

void sol(ll x,int j)
{
    for (int i = j; i <= n; i++)
    {
        if (i <= a[x-1]) continue;
        a[x] = i;
        if (x >= k)
        {
            print(a,k);
        }
        else sol(x+1,j+1);
    }
}


int main() {
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    sol(1,1);

    return 0;
}