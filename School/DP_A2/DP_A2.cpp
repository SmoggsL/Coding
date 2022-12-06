#include <bits/stdc++.h>
using namespace std;
long n;
vector<long long> a;

int main() {
    freopen("DP_A2.INP","r",stdin);
    freopen("DP_A2.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        a.push_back(z);
    }
    long long Min = a[0],ans = LLONG_MIN;
    for (int j = 1; j < n; j++)
    {
        //Min = min(a[j],Min);
        ans = max(ans,a[j] - Min);
        Min = min(a[j],Min);
    }
    cout << ans;

    return 0;
}