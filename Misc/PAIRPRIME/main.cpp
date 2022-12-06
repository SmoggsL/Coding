#include <bits/stdc++.h>
using namespace std;
int n;

bool PrimeCheck(int x)
{
    // if x is 0 or 1 then return false
    if (x <= 1) return false;
    //using loop for() to check if x have any other divisors other than itself and 1
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x%i == 0) return false;
    }
    return true;
}

int main() {
    freopen("main.INP","r",stdin);
    freopen("main.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    //input
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    //int to count the pairs
    int counter = 0;
    //solution
    for (int i = 0; i < n-1; i++)
    {
        //check if a[i] is prime or not
        if (PrimeCheck(a[i]))
        {
            //j = i+1 to make sure i < j
            for (int j = i+1; j < n; j++)
            {
                //check if a[j] is prime or not
                //if a[j] is prime then increase the counter
                if(PrimeCheck(a[j])) counter++;
            }
        }
    }
    cout << counter;
    return 0;
}