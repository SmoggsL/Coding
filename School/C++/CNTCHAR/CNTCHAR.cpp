#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
string s;

int main() {
    freopen("CNTCHAR.INP","r",stdin);
    freopen("CNTCHAR.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> s;
    sort(s.begin(),s.end());
    int counter = 0;
    for (int i = 1; i <= s.length(); i++)
    {
        if(s[i] != s[i-1])
        {
            cout << s[i-1] << ":" << counter << endl;
            counter = 0;
        }
        counter++;
    }
    return 0;
}