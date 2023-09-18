#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e5;
ll o = 0;

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    vector<ll> a(n),b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll y = 0;
	while (y < b.size()) {
		ll x = a.size() - 1, found = 0;
		while (x >= 0) {
			if (a[x] < b[y]) {
				o += 2, found = 1;
				a.erase(a.begin() + x);
				b.erase(b.begin() + y);
				break;
			} x--;
		}
		if (!found) y++;
	}

	y = 0;
	while (y < b.size()) {
		ll x = a.size() - 1, found = 0;
		while (x >= 0) {
			if (a[x] == b[y]) {
				o++, found = 1;
				a.erase(a.begin() + x);
				b.erase(b.begin() + y);
				break;
			} x--;
		}
		if (!found) y++;
	}

    cout << o << endl;
    return 0;
}