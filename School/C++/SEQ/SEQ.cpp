#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
const ll maxn = 1e9;
vector<long> a;
int n,q;

ll binSearch(ll l, ll r, ll k)
{
    while ( l <= r)
    {
        int mid = (l + r)/2;
        if(a[mid] == k) return mid;
        if(a[mid] < k) l = mid++;
        else r = mid--;
    }
    return -1;
}

int main() {
    freopen("SEQ.INP","r",stdin);
    freopen("SEQ.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    cin >> q;
    while(q--)
    {
        int x,y;
        cin >> x >> y;
        if ( x == 1){
            a.push_back(y);
            n++;
            sort(a.begin(),a.end());
        }
        else if (x == 2)
        {
            ll bruh = binSearch(0,n,y);
            if (bruh > -1)
            {
                a.erase(a.begin() + bruh);
                n--;
            }
            sort(a.begin(),a.end());
        }
        else if (x == 3)
        {
            if (y > a.back())
            {
                cout << "No \n";
                continue;
            }
            long k = lower_bound(a.begin(),a.end(),y) - a.begin();
            if (a[k] != y) cout << a[k] << "\n";
            else
            {
                bool flag = false;
                for (int i = k+1; i < n; i++)
                {
                    if (a[i] != a[k])
                    {
                        cout << a[i] << "\n";
                        flag = true;
                        break;
                    }
                    if(!flag) cout << "No \n";
                }
            }
        }
        else if (x == 4)
        {
             if (y < a.front())
            {
                cout << "No \n";
                continue;
            }
            long k = upper_bound(a.begin(),a.end(),y) - a.begin();
            if (a[k] != y) cout << a[k] << "\n";
            else
            {
                bool flag = false;
                for (int i = k-1; i >0; i--)
                {
                    if (a[i] != a[k])
                    {
                        cout << a[i] << "\n";
                        flag = true;
                        break;
                    }
                    if(!flag) cout << "No \n";
                }
            }
        }   
        if(x == 5)
        {
            cout << a.front() << " " << a.back() << "\n";
        }
        
    }
    return 0;
}