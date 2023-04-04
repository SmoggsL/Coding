#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
ll a[50];
int n,k;




int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    cin >> n >> k;
    vector<ll> a(n, 5);
	ll s = 5 * n;
	while (s > k) {
		for (ll i = 0; i < n; i++) {
			if (s > k) {
				a[i] -= 1;
				s -= 1;
			}
		}
	}
	cout << count(a.begin(), a.end(), 2) << endl;
    return 0;
}