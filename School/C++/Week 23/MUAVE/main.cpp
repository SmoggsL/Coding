#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e3+5;
ll n,k,m;
vector<ll> a;
int cnt[maxn];
bool check[maxn];

int main() {
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    while(m > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (m <= 0) break;
            if (a[i] <= k)
            {
                if(check[i] == 0)
                {
                    cnt[i]++;
                    m--;
                }
                
                check[i] = 1;
                
            }
            else
            {
                cnt[i]++;
                m--;
            }
        }
    }
    for (int i = 0; i < n; i++) cout << cnt[i] << " ";
    return 0;
}