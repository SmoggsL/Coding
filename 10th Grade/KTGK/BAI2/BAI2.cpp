#include <bits/stdc++.h>

using namespace std;
#define ll long long
const ll maxn = 1e6+7;
int n,a[maxn];

bool binsearch(int l, int r, int key)
{
    while (l <= r)
    {
        int mid = (l+r)/2;
        if (a[mid] == key) return true;
        else if (a[mid] < key) l = mid+1;
        else r = mid - 1;
    }
    return false;
}

int main()
{
    freopen("BAI2.INP","r",stdin);
    freopen("BAI2.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    int k = n;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = k-a[i];
        if(binsearch(i+1,n-1,temp))
        {
            counter+=2;
            k = k - a[i] - temp;
        }
        else
        {
            k -= a[i];
            counter++;
        }
        if(k <= 0) break;
    }
    cout << counter;

    return 0;
}
