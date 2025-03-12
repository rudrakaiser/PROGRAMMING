/* A u t h o r :

╭━━━╮╱╱╱╱╭╮╱╱╱╱╱╭╮╭━╮
┃╭━╮┃╱╱╱╱┃┃╱╱╱╱╱┃┃┃╭╯
┃╰━╯┣╮╭┳━╯┣━┳━━╮┃╰╯╯╭━━┳┳━━┳━━┳━╮
┃╭╮╭┫┃┃┃╭╮┃╭┫╭╮┃┃╭╮┃┃╭╮┣┫━━┫┃━┫╭╯
┃┃┃╰┫╰╯┃╰╯┃┃┃╭╮┃┃┃┃╰┫╭╮┃┣━━┃┃━┫┃
╰╯╰━┻━━┻━━┻╯╰╯╰╯╰╯╰━┻╯╰┻┻━━┻━━┻╯

R u d r a    K a i s e r */

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define ll long long
#define endl '\n'

void formated(int n, bool &f, string s, string p) {
    if (n > 0) {
        if (!f) cout << " ";
        f = false;
        cout << n << " " << (n == 1 ? s : p);
    }
}

void solve(int x) {
    ll s;
    cin >> s;
    int year = s / (12 * 30 * 24 * 60 * 60);
    s %= (12 * 30 * 24 * 60 * 60);
    int month = s / (30 * 24 * 60 * 60);
    s %= (30 * 24 * 60 * 60);
    int day = s / (24 * 60 * 60);
    s %= (24 * 60 * 60);
    int hour = s / (60 * 60);
    s %= (60 * 60);
    int minute = s / 60;
    int second = s % 60;
    cout << "Case " << x << ": ";
    bool check = true;
    formated(year, check, "year", "years");
    formated(month, check, "month", "months");
    formated(day, check, "day", "days");
    formated(hour, check, "hour", "hours");
    formated(minute, check, "minute", "minutes");
    formated(second, check, "second", "seconds");
    cout << endl;
}

int main() {
    fast;
    ll test;
    cin >> test;
    for (int i = 1; i <= test; i++) solve(i);
    return 0;
}