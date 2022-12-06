#include <bits/stdc++.h>
using namespace std;
#define ll long long
int t,n,q;
ll x0,x1;
int main() {
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n >> q;
        ll a;
        ll sum = 0,prevsum = 0;
        ll IsEven = 0,IsOdd = 0;
        for (int i = 0; i < n; i++) 
        {
            cin >> a;
            if (a%2 == 0) IsEven++;
            else IsOdd++;
            sum += a;
        }
        for (int i = 0; i < q; i++)
        {
            int type,temp;
            cin >> type >> temp;
            if (type == 0)
            {
                if (temp%2 == 0) sum += temp*IsEven;
                else
                {
                    sum += temp*IsEven;
                    IsOdd += IsEven;
                    IsEven = 0;
                }
            }
            else
            {
                if(temp%2 == 0) sum+= temp*IsOdd;
                else
                {
                    sum+= temp*IsOdd;
                    IsEven += IsOdd;
                    IsOdd = 0;
                }
            }
            cout << sum << "\n";
        }
    }
    return 0;
}