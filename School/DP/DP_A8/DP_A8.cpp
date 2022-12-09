#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
ll n,a[100002],S;

bool BinSearch(ll l, ll r, ll Key,ll a[])
{
    while(l <= r)
    {
        int mid = (l + r)/2;
        if ( a[mid] == Key) return true;
        else if (a[mid] < Key) l = mid+1;
        else r = mid-1;
    }
    return false;
}

int main() {
    freopen("DP_A8.INP","r",stdin);
    freopen("DP_A8.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> S;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    ll count = 0;
    for (int i = 0; i < n-1; i++)
    {
        ll key = S - a[i];
        if(BinSearch(i+1, n-1, key,a)) count++;
    }
    cout << count;
    return 0;
}