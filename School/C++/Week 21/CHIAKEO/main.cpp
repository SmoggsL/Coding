#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int n,a[25];
ll sum1, sum2,min_val = LLONG_MAX;
string s,temp = " ";


void sol2(string temp, string t, int x)
{
    temp = temp + t;
    if (x >= n)
    {
        ll temp1 = 0,temp2 = 0;
        for (int i = 1; i <= n; i++)
        {
            if (temp[i] == '0') temp1 += a[i-1];
            else temp2 += a[i-1];
        }
        ll total = abs(temp1 - temp2);
        if (total < min_val)
        {
            sum1 = temp1;
            sum2 = temp2;
            s = temp;
            min_val = total;
        }
        return;
    }
    sol2(temp,"0",x+1);
    sol2(temp,"1",x+1);
}

int main() {
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sol2(temp,"0",1);
    sol2(temp,"1",1);
    cout << sum1 << endl;
    for (int i = 1 ; i <= n; i++)
    {
        if(s[i] == '0') cout << i << " ";
    }
    cout << endl << sum2 << endl;
    for (int i = 1; i <= n; i++)
    {
        if(s[i] == '1') cout << i << " ";
    }
    return 0;

}