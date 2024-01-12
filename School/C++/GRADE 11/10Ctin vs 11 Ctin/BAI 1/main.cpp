#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sp ' '
const ll mod = 1e9+7;
const ll maxn = 1e9;
int BIGmonth[8] = {1,3,5,6,7,10,12};
char slash = '/';
string fail = "KHONG TAO DUOC";
bool checkleap(int year)
{
    if (year% 4 == 0 || year%400 == 0)
    {
        if (year % 10 == 0) return false;
        return true;
    }
    return false;
}

bool checkmonth(int month)
{
    for (int i = 0; i < 7; i++)
    {
        if (month == BIGmonth[i]) return true;
    }
    return false;
}


int main() {
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s; cin >> s;

    int len = s.length();
    string year = s.substr(len-2, 2);
    s.erase(len-2,2);
    int temp = 2000 + stoi(year);
    bool flag = checkleap(temp);

    if (s.length() == 2)
    {
        if (s[0] == '0' || s[1] == '0')
        {
            cout << fail;
        }
        else cout << s[0] << slash << s[1] << slash << year;
    }
    else 
    {
        string sdate = s.substr(0,2);
        string smonth = s.substr(2,2);
        int date = stoi(sdate), month = stoi(smonth);
        if (checkmonth(month))
        {
            if (date <= 31) cout << date << slash << month << slash << year;
            else cout << fail;
        }
        else
        {
            if (month == 2)
            {
                if (flag && date <= 29) cout << date << slash << month << slash << year;
                else
                {
                    if (date <= 28) cout << date << slash << month << slash << year;
                    else
                    {
                        if (date == 30 || date == 29) cout << fail;
                        if (date == 31)
                        {
                            month = (date%10) + month;
                            date = 3;
                            if (month <= 12) cout << date << slash << month << slash << year;
                            else cout << fail;
                        }
                    }
                }
            }
            else
            {
                if (date <= 30) cout << date << slash << month << slash << year;
                else if (date == 31)
                {
                    month = (date%10) + month;
                    date = 3;
                    if (month <= 12) cout << date << slash << month << slash << year;
                    else cout << fail;
                }
                else cout << fail;
            }
        }
    }
    return 0;
}