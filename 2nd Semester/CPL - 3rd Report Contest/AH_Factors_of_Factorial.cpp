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

const int MOD = 1e9 + 7;

vector<int> all_primes(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }
    vector<int> primes;
    for (int p = 2; p <= n; p++) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }
    return primes;
}

vector<int> prime_fact(int n, const vector<int>& primes) {
    vector<int> factors(primes.size(), 0);
    for (size_t i = 0; i < primes.size(); i++) {
        int p = primes[i];
        int count = 0;
        int temp = n;
        while (temp >= p) {
            count += temp / p;
            temp /= p;
        }
        factors[i] = count;
    }
    return factors;
}

void solve() {
    int n;
    cin >> n;
    vector<int> primes = all_primes(n);
    vector<int> factors = prime_fact(n, primes); 
    long long result = 1;
    for (int i : factors) {
        result = (result * (i + 1)) % MOD;
    } cout << result << endl;
}

int main() {
    fast;
    solve();
    return 0;
}