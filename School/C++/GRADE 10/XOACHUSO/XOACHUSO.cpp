#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
string s;
int k;

int main() {
    freopen("XOACHUSO.INP","r",stdin);
    freopen("XOACHUSO.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> s >> k;
    for (int i = 0; i < s.length(); i++)
    {
        int x = s[i] -'0',y = s[i+1] - '0';
        if (x < y)
        {
            s.erase(remove(s.begin(),s.end(),s[i]),s.end());
            k--;
        }
        if(k == 0) break;
    }
    //s.erase(remove(s.begin(),s.end(),s[3]),s.end());
    cout << s;
    return 0;
}
