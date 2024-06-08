#include <bits/stdc++.h>
using namespace std;
int n,t;

bool ArrCheck(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i]) return 1;
    }
    return 0;
}


int main() {
    //freopen("main.INP","r",stdin);
    //freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    while(t-- > 0)
    {
        cin >> n;
        int a[n],b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        if(ArrCheck(a,b,n) == 0)
        {
            cout << 0 << endl;
            continue;
        }
        bool flag = false;
        int counter = 0;
        for(int i = 0;i < n; i++)
        {
            if (a[i] > b[i])
            {
                for (int j = 0; j < n; j++)
                {
                    if (b[j] == 1 && a[j] < 1) 
                    {
                        swap(a[i],a[j]);
                        flag = true;
                    }
                }
            }
        }
        if (flag) counter++;
        for(int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                a[i] = 1- a[i];
                counter++;
            } 
        }
        cout << counter << endl;
    }
    return 0;
}