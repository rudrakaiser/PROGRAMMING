# Power of Two Check

```cpp
#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    if ( (n > 0) && ( (n & (n-1)) == 0 ) )
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
```

### Input
```
8
15
16
128
512
1000
2048
```

### Output
```
YES
NO
YES
YES
YES
NO
YES
```


# Explanation

The expression `(n > 0) && ((n & (n - 1)) == 0)` is used to check if a number `n` is a power of two. Here's a detailed explanation of how it works :

1. **Condition `n > 0`**: This ensures that the number `n` is positive. A power of two must be a positive number.

2. **Bitwise Operation `n & (n - 1)`**:
   - This operation exploits the binary representation of powers of two.
   - A number that is a power of two has exactly one `1` bit in its binary representation and all other bits are `0`.

3. **Binary Representation Examples**:
   - 1 &rarr; ${2^0}$ &rarr; `0001`
   - 2 &rarr; ${2^1}$ &rarr; `0010`
   - 4 &rarr; ${2^2}$ &rarr; `0100`
   - 8 &rarr; ${2^3}$ &rarr; `1000`

4. **Subtraction by 1**:
   - Subtracting `1` from a power of two flips all the bits after the single `1` bit.
   - For example:
     - `2` (binary `0010`) &rarr; `2 - 1 = 1` (binary `0001`)
     - `4` (binary `0100`) &rarr; `4 - 1 = 3` (binary `0011`)
     - `8` (binary `1000`) &rarr; `8 - 1 = 7` (binary `0111`)

5. **Bitwise AND with `(n - 1)`**:
   - Performing a bitwise AND between `n` and `(n - 1)` will result in `0` if `n` is a power of two.
   - This is because all bits after the single `1` bit in `n` are flipped to `1` in `n - 1`, making the AND operation result in all `0`s.

6. **Combining the Conditions**:
   - If `n` is positive and `n & (n - 1)` equals `0`, then `n` is a power of two.

**Examples**:

1. **Checking if 4 is a power of two**:
   ```
   n = 4 (binary 0100)
   n - 1 = 3 (binary 0011)
   n & (n - 1) = 0100 & 0011 = 0000
   ```
   Since `n & (n - 1) == 0`, 4 is a power of two.

2. **Checking if 6 is a power of two**:
   ```
   n = 6 (binary 0110)
   n - 1 = 5 (binary 0101)
   n & (n - 1) = 0110 & 0101 = 0100
   ```
   Since `n & (n - 1) != 0`, 6 is not a power of two.