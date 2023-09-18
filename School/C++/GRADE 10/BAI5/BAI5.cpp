#include <bits/stdc++.h>
using namespace std;
int n;
vector<long long> a;
int binsearch(int l, int r, long long k)
{
    int i = l;
    int j = r;
    long ans = -1;
    while (i <= j)
    {
        int mid = (i + j)/2;
        if ( a[mid] <= k)
        {
            ans = mid;
            i = mid+1;
        }
        else j = mid-1;
    }
    return ans;
}

int main() {
    freopen("BAI5.INP","r",stdin);
    freopen("BAI5.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        a.push_back(l);
    }
    sort(a.begin(),a.end());
    long long Count = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n;j++)
        {
            int x = binsearch(j+1,n,a[i]+a[j]-1);
            if (x > j) Count += x-j;
        }
    }
    cout << Count;
    return 0;
}
