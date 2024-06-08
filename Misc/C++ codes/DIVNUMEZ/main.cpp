#include <bits/stdc++.h>
using namespace std;
int t;
int main() {
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        int a,b,c,d,temp1,temp2;
        cin >> a >> b >> c >> d;
        bool flag = false;
        for (int i = a+1 ; i <= c ; i++)
        {
            for(int j = b+1;j <= d;j++)
            {
                if (i*j % a*b== 0)
                {
                    flag = true;
                    cout << i << " " << j << "\n";
                    break;
                }
            }
            if(flag) break;
        }
        if (!flag) cout << -1 << " " << -1 << "\n";
    }
    return 0;
}