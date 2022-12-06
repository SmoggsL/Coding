#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int n;
int a[20];
bool check[20];

void print(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

void sol(int x)
{
    for (int i = 1; i <= n; i++)
    {
        if (check[i] == false)
        {
            a[x] = i;
            check[i] = true;
            
        
        if (x == n) print(a,n);
            else sol(x+1);
        check[i] = false;
    }
    }
}

int main() {
    freopen("HOANVI.INP","r",stdin);
    freopen("HOANVI.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    sol(1);
    return 0;
}