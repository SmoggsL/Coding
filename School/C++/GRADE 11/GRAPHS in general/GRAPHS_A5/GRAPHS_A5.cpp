#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
int a[101][101] = {};


int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vector<int> b[n+2];
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        string bruh;
        getline(cin,bruh);
        stringstream bruv(bruh);
        int x;
        while (bruv >> x) b[i].push_back(x);
        
    }

    for (ll i = 1; i <= n; i++) 
    {
        for (auto j : b[i]) 
        {
            a[i][j] = 1;
            a[j][i] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}