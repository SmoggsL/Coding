#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;


class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        vector<pair<char,char>> v = { {')', '('}, {']', '['}, {'}', '{'} };
        for (auto c : s)
        {
            if (c == '(' || c == '{' || c == '[') st.push(c);
            else{
                if (st.empty()) return false;
                for (auto p : v)
                {
                    if (c == p.first && st.top() != p.second) return false;
                }
                st.pop();
            }
        }
        return (st.empty());
    }
};