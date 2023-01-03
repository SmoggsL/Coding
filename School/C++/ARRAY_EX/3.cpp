#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    freopen("ARR.INP","r",stdin);
    freopen("ARR.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    int a[n];
    int b[n];
    int big = INT_MIN;

    for (int i = 0; i < n; i++) b[i] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        //b[i] = 0;
        if (a[i] >0 ) b[a[i]]++;
        big = max(big,a[i]);
    }
    for (int i = 0; i <= big; i++)
    {
        if(b[i] > 0)
        {
            for (int j = 1; j <= b[i]; j++) cout << i << " ";
        }
        else cout << -1 << " ";
    }
    //cout << 1;
    return 0;
}