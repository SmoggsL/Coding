#include <bits/stdc++.h>
using namespace std;
int a[10001];
int k,n;
int binary_k(int l, int r, long long k)
{
    int i =l;
    int j =r;
    while (i <= j)
    {
        int mid = (i + j)/2;
        if ( a[mid] == k) return mid;
        else if (a[mid] < k) i = mid+1;
        else j = mid-1;
    }
    return -1;
}

int main() {
    freopen("BINARY.INP","r",stdin);
    freopen("BINARY.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << binary_k(0,n-1,k);

    return 0;
}