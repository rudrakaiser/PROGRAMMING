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
#define MAX 1001

vector<bool> arr(MAX, true);
vector<int> primes;

void sieve() {
    arr[0] = arr[1] = false;
    for (int i = 0; i * i <= MAX; i++) {
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

void solve() {
    int n, k;
    cin >> n >> k;
    int c = 0;
    for (int i = 0; i < primes.size() - 1; i++) {
        int p1 = primes[i], p2 = primes[i + 1];
        int sum = p1 + p2 + 1;
        if (sum <= n && arr[sum]) c++;
    } cout << (c >= k ? "YES" : "NO") << endl;
}

int main() {
    fast;
    sieve();
    solve();
    return 0;
}