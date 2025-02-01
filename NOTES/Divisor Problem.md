```cpp
#include <bits/stdc++.h>
using namespace std;

int countDivisors(int x) {
    int count = 0;
    for (int i = 1; i*i <= x; i++) {
        if (x % i == 0) {
            if (i == x / i) {
                count++;
            } else {
                count += 2;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        cout << countDivisors(x) << "\n";
    }
    return 0;
}
```