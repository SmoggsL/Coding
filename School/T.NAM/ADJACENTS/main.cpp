#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> solve;
        for (auto i : s)
        {
            if (!solve.size()) solve.push(i);
            else
            {
                if (i == solve.top())
                {
                    solve.pop();
                    continue;
                }
                solve.push(i);
            }
        }
        string a;
        while(solve.size())
        {
            a = solve.top() + a;
            solve.pop();
        }
        return (a);
    }
};  

int main() {
    Solution sol;
    cout << sol.removeDuplicates("abbaca");
}