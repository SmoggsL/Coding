#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e7+1;

ll filt[maxn];
int a[maxn];
void ufilter()
{
    filt[1] = 1;
    for (int i = 2; i < maxn; i++){
        filt[i] = filt[i-1] +i;
    }
    return;
}

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    
    for (int i = 0; i < n; i++) cin >> a[i];
    ufilter();
    ll ans = 0;
    for(int i = 0; i < n-1; i++)
    {
        if (!binary_search(filt,filt+maxn,a[i])) continue;
        ll temp = 1;
        for (int j = i+1; j < n; j++)
        {
            if (!binary_search(filt,filt+maxn,a[j]))
            {
                ans = max(ans,temp);
                i = j;
                break;
            }
            if (a[j] >= a[j-1]) temp++;
            else
            {
                ans = max(ans,temp);
                i = j;
                break;
            }
        }
    }
    cout << ans;

    return 0;
}