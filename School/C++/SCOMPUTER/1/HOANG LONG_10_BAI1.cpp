//10CTin - Hoàng Long - STT : 10

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e6+5;
int n;
struct tk
{
    ll x;
    ll y;
    ll pos;
};
tk a[maxn];

bool sortbysec(tk a, tk b)
{
    return(a.y < b.y);
}

int main() {
    freopen("SComputer1.INP","r",stdin);
    freopen("SComputer1.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].x >> a[i].y;
        a[i].pos = i;
    }
    sort(a+1, a+n+1, sortbysec);
    queue<ll> ans;
    ans.push(a[1].pos);
    int i = 1;
    for (int j = 2; j <= n; j++)
    {
        if (a[j].x >= a[i].y)
        {
            ans.push(a[j].pos);
            i = j;
        }
    }
    int temp = ans.size();
    cout << temp << "\n";
    while (temp--)
    {
        cout << ans.front() << " ";
        ans.pop();
    }
    return 0;
}