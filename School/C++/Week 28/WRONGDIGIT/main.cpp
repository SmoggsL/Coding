#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
string a,b,c,d;

int main() {
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll x1 = 0,y1 = 0,x2 = 0,y2 = 0;
    cin >> a >> b;

    for (int i = 0; i < a.size();i++)
    {
        if ((a[i] - '0')%10 == 6 || (a[i] - '0')%10 == 5)
        {
            x1 = x1*10+5;
            x2 = x2*10 + 6;
        }
        else
        {
            int temp = (a[i] - '0')%10;
            x1 = x1*10 + temp;
            x2 = x2*10 + temp;
        } 
    }
    // cout << x1 << sp << x2;
    for (int i = 0; i < b.size();i++)
    {
        if ((b[i] - '0')%10 == 6 || (b[i] - '0')%10 == 5)
        {
            y1 = y1*10+5;
            y2 = y2*10 + 6;
        }
        else
        {
            int temp = (b[i] - '0')%10;
            y1 = y1*10 + temp;
            y2 = y2*10 + temp;
        } 
    }
    cout << x1 + y1 << sp << x2 + y2;
    return 0;
}