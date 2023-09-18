#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;


class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
    vector<int> res = prices;
    stack<int> s;
    int n = prices.size();

    for (int i = 0; i < n; i++)
    {
        int v = prices[i];
        while(s.size())
        {
            int idx = s.top();
            if (prices[idx] < v) break;
            prices[idx] -= v;
            s.pop();
        }
        s.push(i);
    }
    return {};
    }
};