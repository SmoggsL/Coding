#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e6;
int a[maxn][3] = {0};

int main() {
    freopen("XEPHANG.INP","r",stdin);
    freopen("XEPHANG.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n,p; cin >> n >> p;
    int rank = 1;
    while(p--){
        int x,y; cin >> x >> y;
        // cout << x << sp << y << "\n";
        a[x][0]++;
        a[x][1]+= y;
        // cout << a[x][0] << sp << a[x][1] << "\n";
        int displacement = 0;
        for (int i = 2; i <= n; i++)
        {
            if ((a[i][0] > a[1][0]) || (a[i][0] == a[1][0] && a[i][1] < a[1][1])) displacement++;
            else if ((a[i][0] > a[1][0]) || (a[i][0] == a[1][0] && a[i][1] < a[1][1])) displacement--;
            // cout << displacement << "\n";
        }
        if (displacement < 0) displacement = 0;
        cout << rank + displacement << "\n";
    }
    return 0;
}