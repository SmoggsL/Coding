#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("TH.INP","r",stdin);
    //freopen("TH.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n,a[10000],ucln=0,bcnn=1;
    cin >> n >> a[0];
    bcnn*=a[0];
    ucln=a[0];
    for(int i=1;i<n;i++)
    {
        cin >> a[i];
        ucln=__gcd(ucln,a[i]);
        bcnn*=a[i];
    }
    cout << ucln <<"\n"; 
    bcnn/=ucln;
    for(int i=0;i<n;i++)
    {
        cout << bcnn/a[0]<<" ";
    }
}