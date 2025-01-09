#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;

void code()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    map<char, long long> m;
    long long maxx = LLONG_MIN;
    long long minn = LLONG_MAX;
    for( long long i = 0 ; i < n ; i++ )
    {
        m[ s[i] ]++;
        maxx = max(maxx, m[s[i]]);
        minn = min( minn , m[s[i]]);
    }
    char maxi, mini;
    for( auto o : m )
    {
        if(  o.second == maxx ) maxi = o.first;
        if( o.second == minn && o.first != maxi ) mini = o.first;
    }
    long long loca, loci;
    for( long long i = 0 ; i < n ; i++ )
    {
        if( s[i] == maxi ) loca = i;
        if( s[i] == mini ) loci = i;
    }
    s[loci] = s[loca];
    cout << s << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; 
    cin >> t;
    while( t-- )
    {
        code();
    }
    return 0;
}