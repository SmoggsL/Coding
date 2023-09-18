#include <bits/stdc++.h>
using namespace std;

int xk,yk,xp,yp;

bool move1(int x1, int y1, int x2, int y2)
{
    if (abs(x2 - x1) == 2 && abs(y2-y1) == 1) return false;
    return true;
}

bool move2(int x1, int y1, int x2, int y2)
{
    if (abs(x2 - x1) == 1 && abs(y2-y1) == 2) return false;
    return true;
}

int main() {
    freopen("KNIGHT.INP","r",stdin);
    freopen("KNIGHT.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> xk >> yk;
    cin >> xp >> yp;
    if (move1 || move2) cout << "No";
    else cout << "Yes";
    return 0;
}