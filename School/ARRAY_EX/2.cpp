#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
int n;
vector<ll> a;

void bai2()
{
    string a,b;
    vector <ll> c;
    getline(cin, a);
    getline(cin,b);
    
    remove(a.begin(),a.end(), ' ');

    remove(b.begin(),b.end(), ' ');
    int j = 0,k=0;
    for (int i = 0; i < a.size() + b.size(); i++)
    {
        if (a[j] - '0' > b[k] - '0')
        {
            //c.push_back(a[j]-'0');
            cout << a[j] << ' ';
            j++;
        }
        else
        {
            cout << b[k] << ' ';
            k++;
        }
    }

}

int main() {
    freopen("ARR.INP","r",stdin);
    freopen("ARR.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    bai2();
    
    return 0;
}
