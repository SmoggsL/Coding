#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e5+5;
int a[maxn][10];
int cnt[10];

int main() {
    freopen("CHONCAM.INP","r",stdin);
    freopen("CHONCAM.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1];
    }
    
    for(int i = 1; i <= 5; i++)
    {
        int temp = 0;
        for (int j = 0; j < n; j++){
            if (a[j][0] == i || a[j][1] == i) temp++;
            else temp = 0;
            // cout << i << sp << j << sp << temp<< "\n";
            cnt[i] = max(cnt[i],temp);
        }
    }
    int res = 0, pos = 0;
    for (int i = 1; i <= 5; i++){
        // cout << i << sp << cnt[i] << "\n";
        if (res < cnt[i])
        {
            res = max(res,cnt[i]);
            pos = i;
        }
    }
    cout << res << sp << pos;
    return 0;
}