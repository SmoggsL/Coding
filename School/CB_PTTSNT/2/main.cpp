#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
ll n,t;
vector<char> a;

int main() {
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n;
        while(n%2 == 0)
        {
            a.push_back('2');
            a.push_back('*');
            n = n/2;
        }
        for (ll i = 3; i <= sqrt(n); i++)
        {
            while(n%i == 0)
            {
                a.push_back('i');
                a.push_back('*');
                n = n/i;
            }
        }
        if (n>2) cout << "*" << n << " ";
        cout << "\n";
        a.clear();
    }
    return 0;
}