#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e9;
int a[10001],temp;
int main() {
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t,n;

    //memset(a,0,sizeof(a));
    cin >> t;
    while(t-- > 0)
    {
        cin >> n;
        bool flag = false;
        int big = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i+1])
            {
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }
        if (flag) continue;
        cout << "YES" << endl;
    }
    return 0;
}