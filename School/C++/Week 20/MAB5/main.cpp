#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e7+5;
ll l,r;
ll sol[maxn];

bool primecheck(ll n)
{
    if(n <= 1) return 0;
    if(n <=3 ) return 1;
    if(n%2 == 0 || n%3 == 0) return 0;
    for (int i = 5; i*i <= n; i+= 6)
    {
        if (n% i == 0 || n%(i+2)==0) return 0;
    }
    return 1;
}

int main() {
    //freopen(".INP","r",stdin);
    //freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> l >> r;
    
    ll sum = 0;
    ll cnt = 0;
    
    for (int i = l;i <= r; i++)
    {
            ll temp = i;
            sum = 0;
            while (temp > 0)
            {
                sum = sum + temp%10;
                temp = temp/ 10;
            }
            if (primecheck(sum) == 1) cnt++;
            
    }  
    cout << cnt;

    return 0;
}