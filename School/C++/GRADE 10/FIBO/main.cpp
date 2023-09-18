#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e8;
int n;
ll fibo[maxn];

ll Fi(int n)
{
    if (n <= 2) return 1;
    return Fi(n - 1) + Fi(n - 2);
}

ll ImFi(int n)
{
    if (fibo[n] > -1) return fibo[n];
    if (n <= 2) fibo[n] = 1;
    else fibo[n] = ImFi(n-1) + ImFi(n-2);
    return fibo[n];
}

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    memset(fibo,-1,sizeof(fibo));
    //cout << Fi(n) << "\n";
    cout << ImFi(n);
    return 0;
}