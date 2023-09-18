#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;

struct fans
{
    string name;
    ll points;
};

bool pointcompare(fans a, fans b)
{
    return a.points > b.points;
}
bool namecompare(fans a, fans b)
{
    if (a.points == b.points) return a.name < b.name;
    return a.points > b.points;
}
int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n,t;
    cin >> n >> t;
    fans a[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].points;
    }
    sort(a,a+n,pointcompare);
    sort(a,a+n,namecompare);
    for (int i = 0; i < t; i++)
    {
        cout << a[i].name << "\n";
    }
    return 0;
}