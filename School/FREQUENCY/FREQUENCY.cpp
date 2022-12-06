#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e5+10;
int n,a[maxn],mem[maxn];

int main() {
    freopen("FREQUENCY.INP","r",stdin);
    freopen("FREQUENCY.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i<= n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n+1);
    int counter = INT_MIN;
    for(int i = 1; i <= n; i++)
    {
        mem[a[i]] +=1;
        counter = max(counter,mem[a[i]]);
    }
    for (int i = 1; i <= a[n]; i++)
    {
        if (mem[i] == counter) cout << i << " ";
    }

    return 0;
}