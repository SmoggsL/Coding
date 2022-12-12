#include <bits/stdc++.h>

using namespace std;
#define ll long long


int n;
map<int,ll> a;
int main()
{
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    int bigx = INT_MIN;
    int bign = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        a[temp]++;
        int temp2 = a[temp];
        bigx = max(bigx,temp2);
        bign = max(bign,temp);
    }

    for (auto i : a)
    {
        if (i.second == bigx) cout << i.first << " ";
    }

    return 0;
}
