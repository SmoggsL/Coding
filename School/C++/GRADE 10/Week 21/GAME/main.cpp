#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int n,p,q;
bool check[1000];

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        check[x] = 1;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        check[x] = 1;
    }
    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        if (check[i] == 0)
        {
            cout << "NO";
            flag = false;
            break;
        }
    }
    if (flag == true) cout << "YES";
    return 0;
}