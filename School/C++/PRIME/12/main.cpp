#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
string s;

bool checkprime(ll n)
{
    if (n == 2|| n == 3) return true;
    if (n < 5) return false;
    if (n%2 == 0 || n% 3 == 0) return false;
    for (int i = 5; i <= sqrt(n); i+= 6)
    {
        if (n% i == 0 || n % (i+2) == 0) return false;
    }
    return true;
}

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> s;
    while(s.length() >0)
    {
        ll temp = stoll(s);
        if (!checkprime(temp))
        {
            cout << "NO";
            return 0;
        }
        s.erase(0,1);
    }
    cout << "YES";
    return 0;
}