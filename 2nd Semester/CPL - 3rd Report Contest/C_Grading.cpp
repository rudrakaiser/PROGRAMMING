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

string result(int n) {
    if (n >= 80) return "A+";
    else if (n >= 75 && n < 80) return "A";
    else if (n >= 70 && n < 75) return "A-";
    else if (n >= 65 && n < 70) return "B+";
    else if (n >= 60 && n < 65) return "B";
    else if (n >= 55 && n < 60) return "B-";
    else if (n >= 50 && n < 55) return "C";
    else if (n >= 45 && n < 50) return "D";
    else return "F";
}

void solve(int i) {
    int n;
    cin >> n;
    cout << "Case " << i << ": " << result(n) << endl;
}

int main() {
    fast;
    ll test;
    cin >> test;
    for (int i = 1; i <= test; i++) solve(i);
    return 0;
}