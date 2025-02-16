# Even Odd Check

```cpp
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;

    if ((n & 1) == 0) cout << "Even";
    else cout << "Odd";
    
    return 0;
}
```

### Input
```
0
13
16
2048
3465277
6254362
```

### Output
```
Even
Odd
Even
Even
Odd
Even
```


# Explanation

&nbsp; 0 &rarr; binary &rarr; ${0000}$ &rarr; Least Significant Bit `0` &rarr; Even <br>
&nbsp; 1 &rarr; binary &rarr; ${0001}$ &rarr; Least Significant Bit `1` &rarr; Odd <br>
&nbsp; 2 &rarr; binary &rarr; ${0010}$ &rarr; Least Significant Bit `0` &rarr; Even <br>
&nbsp; 3 &rarr; binary &rarr; ${0011}$ &rarr; Least Significant Bit `1` &rarr; Odd <br>
&nbsp; 4 &rarr; binary &rarr; ${0100}$ &rarr; Least Significant Bit `0` &rarr; Even <br>
&nbsp; 5 &rarr; binary &rarr; ${0101}$ &rarr; Least Significant Bit `1` &rarr; Odd <br>
&nbsp; 6 &rarr; binary &rarr; ${0110}$ &rarr; Least Significant Bit `0` &rarr; Even <br>
&nbsp; 7 &rarr; binary &rarr; ${0111}$ &rarr; Least Significant Bit `1` &rarr; Odd <br>
&nbsp; 8 &rarr; binary &rarr; ${1000}$ &rarr; Least Significant Bit `0` &rarr; Even <br>
&nbsp; 9 &rarr; binary &rarr; ${1001}$ &rarr; Least Significant Bit `1` &rarr; Odd <br>
10 &rarr; binary &rarr; ${1010}$ &rarr; Least Significant Bit `0` &rarr; Even <br>

### `(n & 1) == 0`

- The operation `n & 1` performs a bitwise AND between `n` and `1`. This directly checks the least significant bit of the binary representation of `n`. If the least significant bit is `0`, the number is even.
- Example For **Even** :
    - Let ${n=12}$
    - Binary of ${n}$ is ${1100}$
    - Here, Least Significant Bit is ${0}$
    - Now, ${0}$ ${\&}$ ${1}$ will be ${0}$
    - So, ${0=0}$, the condition is `true`
- Example For **Odd** :
    - Let ${n=13}$
    - Binary of ${n}$ is ${1101}$
    - Here, Least Significant Bit is ${1}$
    - Now, ${1}$ ${\&}$ ${1}$ will be ${1}$
    - So, ${1=0}$, the condition is `false`