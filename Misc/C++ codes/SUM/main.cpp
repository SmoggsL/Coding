#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main() {
    //freopen("main.INP","r",stdin);
    //freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t-- > 0)
    {
        cin >> a >> b >> c;
        if (a + b == c)
        {
            cout << "YES" << endl;
            continue;
        }
        if (a + c == b)
        {
            cout << "YES" << endl;
            continue;
        }
        if (b + c == a)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}