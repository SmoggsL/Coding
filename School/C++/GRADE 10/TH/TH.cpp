#include <bits/stdc++.h>

using namespace std;
int n,m,k;


int main()
{
    freopen("TH.INP","r",stdin);
    freopen("TH.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> m >> n >> k;
    while (k > 0)
    {
        if ( m >= n*2)
        {
            m--;
            k--;
        }
        else
        {
            n--;
            k--;
        }
    }
    cout << min(m/2,n);
    return 0;
}