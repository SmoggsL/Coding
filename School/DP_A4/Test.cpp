#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    //freopen("DP_A4.INP","r",stdin);
    freopen("DP_A4.INP","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n = rand()%100000;
    cout << n << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << rand()%2000 - 1000 << " ";
    }
    int t = rand()%n;
    cout << endl << t << endl;
    while(t--)
    {
        ll A,B;
        for (int i = 1; i <= 2; i++)
        {
        A = rand()%n;
        B = rand()%n;
        }
        cout << max(A,B) << " " << min(A,B) << endl;
    }
    return 0;
}