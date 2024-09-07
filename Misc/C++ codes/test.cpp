#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int n;

int main() {
    // freopen("main.INP","r",stdin);
    // freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n,dem=0;
    vector <int> a[1009];
    cin >>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int temp;
            cin >> temp;
            a[i].push_back(temp);
            if(j>i&&temp==1)dem++;
        }
    }
    cout << dem << "\n";
    for(int i=0;i<n;i++)
    for(int j=i+1;j<a[i].size();j++)
    if(a[i][j]==1) cout << i+1 << " " << j+1 << "\n";
    // cout << sum_array(a,n);
    // f(&n);`
    // cout << S
    return 0;
}