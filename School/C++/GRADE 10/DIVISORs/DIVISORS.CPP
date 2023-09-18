#include <bits/stdc++.h>
using namespace std;
int n;

int main() {
    freopen("DIVISORS.INP","r",stdin);
    freopen("DIVISORS.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    long Counter = 0;
    for (int i = 1; i <= n; i++)
    {
        int a[10001];
        memset(a,0,10001);
        int GCD_Count = 1;
        int temp = i;
        for (int j = 2; j <= temp; j++)
        {
            while(temp%j == 0)
            {
                a[j]++;
                temp /= j;
            }
            GCD_Count *= (a[j]+1);
        }
        if (GCD_Count == 4)
        {
            Counter++;
        }
    }
    cout << Counter;

    return 0;
}