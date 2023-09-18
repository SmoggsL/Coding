#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"
const ll maxn = 1e14;
unsigned ll n;

int main()
{
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    vector<ll> a;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i == 0)
        {
            ll temp = n/i;
            if (temp == i) cout << i << endl;
            else
            {
                cout << i << endl;
                a.push_back(temp);
            }
        }
    }
    for (int i = a.size() - 1; i >= 0; i--) cout << a[i] << endl;

    return 0;
}
