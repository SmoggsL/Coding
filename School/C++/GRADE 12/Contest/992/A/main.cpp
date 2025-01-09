#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e5;
int a[maxn];


int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        int n,k; cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> a[i];
        bool flag = true;
        int pos = 1, posj = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j ++)
            {
                
                if (j == i) continue;
                int temp = abs(a[i] - a[j]);
                if (temp%k != 0){
                    flag = true;
                    pos = i+1;
                    // posj = j+1;
                } 
                else{
                    flag = false;
                    pos = -1;
                    break;
                } 
            }
            if (flag == true) break;
        }
        if (flag && pos > 0)
        {
            cout << "YES" << "\n" << pos;
        }
        else cout << "NO";
        cout << "\n";
    }
    return 0;
}