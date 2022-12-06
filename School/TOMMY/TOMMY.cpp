#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 10e7;
int n,a,m,l,r,cnt[maxn];
vector<bool> Prime(maxn,1);
vector<long long> ans(maxn);
vector<int> b(maxn,0);
int main() {
    freopen("TOMMY.INP","r",stdin);
    freopen("TOMMY.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //cout<< 2 << "\n";
    cin >> n;
    
    int Max = INT_MIN;
    for (int i = 0; i < n ; i++) {
        cin >> a;
        cnt[a]++;
        Max = max(Max,a);
    }
    Prime[0] = Prime[1] = 0;
    for (long long i = 2; i <= Max; i++) {
        if (Prime [i]) {
            //cout << i << endl;
            ans[i] += cnt[i];
            
            for (long long j = 2; j*i <= Max; j++)
            {
                Prime[j*i] = false;
                ans[i] += cnt[i*j];
            }
            //cout << ans[i] << endl;
        }
    }
    b[0] = ans[0];
    for (int i = 1; i <= Max; i++) b[i] = b[i-1] + ans[i]; 

    cin >> m;
    while(m--)
    {
        cin >> l >> r;
        if (l > maxn)
        {
            cout << 0 << "\n";
            continue;
        }
        r = min(r,maxn);
        cout << b[r] - b[l-1] << " \n";
    }
    return 0;
}
