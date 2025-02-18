//source: https://vn.spoj.com/problems/C11PNUM/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e5;
vector<ll> primenum;
void eratosthene(int N){
    bool a[maxn] = {0};
    for(int i = 2; i*i <= N;i++){
    if(!a[i]){
        for(int j = i*i; j <= N; j+=i) a[j]=1;  
        }
    }

    for (int i=2;i<=N;i++){
        if(!a[i]) primenum.push_back(i);
    }
}

int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    eratosthene(maxn);
    while(t--){
        int n,k; cin >> n >> k;
        ll res = 1;
        for (int i = 0; i < k;i++) res *= primenum[i];
        int i = 0;
        ll temp;
        while(res < n){
            temp = res;
            res = res * primenum[i+k]/primenum[i];
            i++;
        }
        if (temp > n) cout << -1 << "\n";
        else cout << temp << "\n";
    }

    return 0;
}