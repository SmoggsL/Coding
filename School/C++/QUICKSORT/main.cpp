#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
int n;
int a[100001];
int partition(int a[],int l,int r)
{
    int pivot = a[r];
    int i = l - 1;
    for(int j = l; j < r; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    i++;
    swap(a[i],a[r]);
    return i;
}

void quicksort(int a[],int l,int r)
{
    if (l >= r) return;
    int p = partition(a,l,r);
    quicksort(a,l,p-1);
    quicksort(a,p+1,r);
}

int main() {
    freopen("main.INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    quicksort(a,0,n-1);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    
    return 0;
}