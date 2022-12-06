#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("ARR.INP","r",stdin);
    freopen("ARR.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    int small = INT_MAX;
    memset(a,0,sizeof(a));
    
    
    int z;
    while(cin>> z)
    {
        a[z]++;
        small = min(small,z);
    }
    bool flag = true;
    int i = small;
    while(flag == true)
    {
        if (a[i] == 0)
        {
            cout << i;
            break;
        } 
        i++;
    }
    return 0;
}