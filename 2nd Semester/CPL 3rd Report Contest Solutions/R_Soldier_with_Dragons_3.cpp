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

void solve(int x) {
    string s;
    int x1, x2;
    cin >> s >> x1 >> x2;
    int cnt = 0;
    for (int i = x1 - 1; i < x2; i++) {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') cnt++;
    }
    cout << "Case " << x << ": " << cnt << endl;
}

int main() {
    fast;
    ll test;
    cin >> test;
    for (int i = 1; i <= test; i++) solve(i);
    return 0;
}