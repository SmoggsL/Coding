#include <bits/stdc++.h>

using namespace std;
#define ll long long
int n,x;
string s;

ll F(int i)
{
    if (i <= 1) return 1;
    else return F(i-1) * 2;
}

int main()
{
    freopen("NHIPHAN.INP","r",stdin);
    freopen("NHIPHAN.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> s >> x;
    ll vt =0;
    for (int i = n-1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            vt += F(n-i);

        }
    }
    string S = s;

    for (int t = 0; t < n; t++)
    {
        if (x <= F(n-t))S[t] = '0';
        else
        {
            S[t] = '1';
            x = x - F(n-t);
        }
    }
    cout << vt+1 << endl;
    cout << S;

    return 0;
}
