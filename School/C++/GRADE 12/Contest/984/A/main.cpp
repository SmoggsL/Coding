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
    while(t--)
    {
        int a; cin >> a;
        int note[a+3];
        for (int i = 0; i < a; i++){
            cin >> note[i];
        }
        bool flag = false;
        for (int i = 1; i < a;i++)
        {
            if (abs(note[i] - note[i-1]) != 5 && abs(note[i] - note[i-1]) != 7) flag = true;
        }
        if (flag == true) cout << "NO";
        else cout << "YES";
        cout << "\n";
    }
    return 0;
}