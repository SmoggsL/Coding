#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int n,y[101];

int lcm(int a, int b)
{
    return a / __gcd(a,b) *b;
}

int main() {
    freopen("tn.INP","r",stdin);
    freopen("tn.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) cin >> y[i];
    int temp = y[0];
    for (int i = 1; i < n; i++)
    {
        temp = lcm(temp,y[i]);
    }
    cout << temp << endl;
    for (int i = 0; i < n; i++) cout << temp/y[i] << " ";
    
    return 0;
}