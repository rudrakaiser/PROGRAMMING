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
#define MAX 2002

vector<int> primes;

void sieve() {
    bool arr[MAX];
    memset(arr, true, sizeof(arr));
    arr[0] = arr[1] = false;
    for (int i = 2; i * i < MAX; i++) {
        if (arr[i]) {
            for (int j = i * i; j < MAX; j += i) {
                arr[j] = false;
            }
        }
    }
    for (int i = 0; i < MAX; i++) {
        if (arr[i]) {
            primes.push_back(i);
        }
    }
}

void solve(ll tc) {
    string s;
    cin >> s;
    map<char, int> freq;
    for (char i:s) freq[i]++;
    cout << "Case " << tc << ": ";
    bool notFound = true;
    for (auto it:freq) {
        if (binary_search(primes.begin(), primes.end(), it.second)) {
            cout << it.first;
            notFound = false;
        }
    }
    if (notFound) cout << "empty";
    cout << endl;
}

int main() {
    fast;
    sieve();
    ll test;
    cin >> test;
    for (ll i = 1; i <= test; i++) solve(i);
    return 0;
}