#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;


int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n+10] = {0};
        for (int i = 0; i < n-2; i++) cin >> a[i];
        int d = 0;
        bool flag = false;
        for (int i = 2; i < n-2; i++){
            if (a[i] == a[i-2] && a[i-1] == 0 && a[i] == 1){
                flag = true;
                break;
            }
        }
        if (!flag) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
    return 0;
}