#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
int n;
vector<ll> a;

bool checkprime(ll n)
{
    for (int i = 2; i+i <= n; i++)
    {
        if (n%i == 0) return 0;
    }
    return n > 1;
}

void bai1()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (checkprime(x)) cout << x;
    }
}


int main() {
    freopen("ARR.INP","r",stdin);
    freopen("ARR.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    bai1();
    
    return 0;
}
