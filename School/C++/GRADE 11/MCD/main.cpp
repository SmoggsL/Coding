#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int a, b, s = 0, x, j, n;
    
    cin >> a >> b;
    x = a;
    j = b;
    
    while (a != b) {
        if (a > b) a = a - b;
        else b = b - a;
    }
    n = a;

    a = x;
    b = j;
    
    for (int i = 1; i <= sqrt(n); i++) {
        if (a % i == 0) {
            if (b % i == 0) {
                x = 0;
                j = i;
                while (j != 0) {
                    x = x + j % 10;
                    j = j / 10;
                }
                if (x > s) s = x;

                j = n / i;
                if (b % j == 0) {
                    x = 0;
                    while (j != 0) {
                        x = x + j % 10;
                        j = j / 10;
                    }
                    if (x > s) s = x;
                }
            }
        }
    }
    
    cout << s;
    return 0;
}