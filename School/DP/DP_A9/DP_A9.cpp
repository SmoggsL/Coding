#include <bits/stdc++.h>
using namespace std;
#define ll long long;
#define mod 1e9 + 7;
#define maxn 1e9;

int n, m, t, xi,yi,xj,yj;
int a[1001][1001], b[1001][1001];

int main() {
  freopen("DP_A9.INP", "r", stdin);
  freopen("DP_A9.OUT", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cin >> m >> n;

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++)
      cin >> a[i][j];
  }

  b[1][1] = a[1][1];

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      // if(i == 1 && j== 1) continue;
      b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + a[i][j];
    }
  }

  cin >> t;

  while (t--) {
    cin >> xi >> yi >> xj >> yj;
    cout << b[xj][yj] - b[xi-1][yj] - b[xj][yi-1] + b[xi-1][yi-1] << "\n";
  }

  return 0;
}