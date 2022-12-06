#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("SUM.INP","r",stdin);
    freopen("SUM.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n1,n2,a[10001],b[10001],dem1=0,dem2=0;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    cin >> n1 >> n2;
    while(n1 >0)
    {
        a[dem1] = n1%10;
        n1 = n1/10;
    }
    while(n2 >0)
    {
        b[dem2] = n2%10;
        n2 = n2/10;
        dem2++;
    }
    int tong = 0;
    dem1 = dem2-1;
    while(dem2 >= 0)
    {
        
        for (int i = a[dem2]; i <= b[dem2]; i++) tong = tong + i*pow(10,dem2);
        if (dem2 == 0)
        {
            tong = tong + 45*dem1;
        }
        dem2--;
    }
    cout << tong;
    return 0;
}
