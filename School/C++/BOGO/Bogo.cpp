#include <bits/stdc++.h>
using namespace std;
int n,a[10001];

bool IsSorted(int a[],int n)
{
    while(--n >= 1)
    {
        if(a[n] < a[n+1]) return false;
    }
    return true;
}

void Shuffle(int a[], int n)
{
    for(int i = 0; i < n; i++) swap(a[i],a[rand()%n]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    srand(time(NULL));
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    while(IsSorted(a,n) == true) Shuffle(a,n);
    for (int i = 0; i < n; i++ ) cout << a[i];
    return 0;
}