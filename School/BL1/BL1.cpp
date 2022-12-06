#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll a[11];
int main() {
    freopen("BL1.INP","r",stdin);
    freopen("BL1.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = 0;
        for (int j = n-1; j >= i; j--)
        {
            if (a[j] % a[i] == 0)
            {
                flag = 1;
                break;
            }
        }
        if (!flag)count++;
    }
    cout << count;
    
    return 0;
}