#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
set<ll> a;
set<ll, greater<int> > ::iterator itr;
ll n, q;

int main() {
    freopen("SEQ.INP","r",stdin);
    freopen("SEQ.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0 ; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    cin >> q;
    while(q--)
    {
        int x;
        cin >> x;
        ll y;
        switch (x)
        {
        case 1/* constant-expression */:
            /* code */
            cin >> y;
            a.insert(y);
            break;
        case 2/* constant-expression */:
            /* code */
            cin >> y;
            a.erase(y);
            break;
        case 3/* constant-expression */:
            /* code */
            cin >> y;
            itr = a.upper_bound(y);
            if (itr == a.end()) cout << "No";
            else cout << *itr;
            cout << endl;
            break;
        case 4/* constant-expression */:
            /* code */
            cin >> y;
            itr = a.lower_bound(y);
            if (itr == a.begin()) cout << "No";
            else cout << *prev(itr);
            cout << endl;
            break;
        case 5/* constant-expression */:
            /* code */
            cout << *a.begin() << " " << *a.rbegin();
            cout << endl;
            break;
        }
        
    }
    return 0;
}