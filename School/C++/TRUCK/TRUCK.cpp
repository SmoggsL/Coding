#include <bits/stdc++.h>
using namespace std;
int k,n;
set<int, greater<int> >s1;
int a[100000];

int main() {
    //freopen("TRUCK.INP","r",stdin);
    //freopen("TRUCK.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> k;
    int t = 1;
    while(cin >> n)
    {   
        s1.insert(n);
        t++;
    }

    set<int, greater<int> >::iterator itr;
    int idx = 0;
    for (itr = s1.begin(); itr != s1.end(); itr++) {
        //cout << idx << ' ';
        a[idx]=*itr;
        idx++;
    }
    cout << a[k-1];
    return 0;
}