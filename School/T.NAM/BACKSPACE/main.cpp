#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;


class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> sa,ta;
        for (auto i : s)
        {
            if (i == '#')
            {
                if (sa.size() == 0) continue;
                sa.pop();
                continue;
            }
            sa.push(i);
        }
        for (auto i : t)
        {
            
            if (i == '#')
            {
                if (ta.size() == 0) continue;
                ta.pop();
                continue;
            }
            ta.push(i);
        }
        if (sa.size() == ta.size())
        {
            ll n = max(sa.size(),ta.size());
            while(n--)
            {
                if(sa.top() != ta.top()) return false;
                sa.pop();
                ta.pop();
            }
            return true;
        }
        return false;
    }
};