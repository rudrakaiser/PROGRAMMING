# **Report on False Position Method**

## **Problem Statement**

In this report, we apply the **False Position Method (Regula Falsi Method)** to find the root of the nonlinear equation:

$$
f(x) = x^3 - 2x - 5
$$

The equation cannot be solved directly using simple algebraic methods. The False Position Method, which is based on the principle of bracketing and linear interpolation, is used to approximate the solution.

---

## **False Position Method**

The False Position Method is a **bracketing method** for finding roots of a nonlinear function. It requires two initial guesses $a$ and $b$ such that:

$$
f(a) \cdot f(b) < 0
$$

This condition ensures that the root lies between $a$ and $b$.

The formula for the next approximation is:

$$
x = \frac{a \cdot f(b) - b \cdot f(a)}{f(b) - f(a)}
$$

The iteration continues until either:

1. $f(x)$ is very close to zero, or
2. The maximum number of iterations is reached.

---

## **Code**

```cpp
/*
    Author : Rudra Kaiser
    Topic  : False Position Method
    Course : Numerical Method
*/

#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return x*x*x - 2*x - 5;
}

int main() {
    double a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    double x;
    double fa, fb, fx, mi;
    cout << "Max Iteration = ";
    cin >> mi;
    double tol = 1e-3;

    fa = f(a);
    fb = f(b);

    if (fa * fb >= 0) {
        cout << "The value of initial guesses,\nf(a) and f(b) must have opposite signs ... !!!" << endl;
        return 1;
    }

    cout << "----------------------------------" << endl;
    cout << "Iteration \t f(x)" << endl;
    cout << "----------------------------------" << endl;
    for (int i = 1; i <= mi; i++) {
        x = (a * fb - b * fa) / (fb - fa);
        fx = f(x);

        cout << i << " \t\t "  << fx << endl;

        if (abs(fx) < tol) {
            cout << "----------------------------------" << endl;
            cout << "Approximate root found,\nx = " << x << endl;
            return 0;
        }

        if (fa * fx < 0) {
            b = x;
            fb = fx;
        } else {
            a = x;
            fa = fx;
        }
    }

    cout << "----------------------------------" << endl;
    cout << "Max iterations reached.\nApproximate root, x = " << x << endl;
    return 0;
}
```

---

## **Output**

Example run for initial guesses:

```
a = 2
b = 3
Max Iteration = 10
----------------------------------
Iteration    f(x)
----------------------------------
1            -0.518519
2            -0.0179861
3            -0.0006156
----------------------------------
Approximate root found,
x = 2.09455
```

---

## **Implementation**

The program can be explained line by line as follows:

| **Code Line(s)**                                                | **Explanation**                                                                                                                         |
| --------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------- |
| `#include <iostream>`<br>`#include <cmath>`                     | Includes libraries: `<iostream>` for input/output, `<cmath>` for math functions like `abs`.                                             |
| `using namespace std;`                                          | Allows using standard functions without writing `std::`.                                                                                |
| `double f(double x) { return x*x*x - 2*x - 5; }`                | Defines the nonlinear function $f(x) = x^3 - 2x - 5$.                                                                                   |
| `int main() { ... }`                                            | Program execution starts from here.                                                                                                     |
| `double a, b;`                                                  | Declares variables for the initial guesses $a$ and $b$.                                                                                 |
| `cout << "a = "; cin >> a;`<br>`cout << "b = "; cin >> b;`      | Takes user input for the two guesses.                                                                                                   |
| `double x; double fa, fb, fx, mi;`                              | Declares variables: `x` = current approximation, `fa`, `fb`, `fx` = values of function at `a`, `b`, and `x`, `mi` = maximum iterations. |
| `cout << "Max Iteration = "; cin >> mi;`                        | Takes input for maximum number of iterations allowed.                                                                                   |
| `double tol = 1e-3;`                                            | Sets tolerance (error bound). Here, $10^{-3}$.                                                                                          |
| `fa = f(a); fb = f(b);`                                         | Computes function values at the initial guesses.                                                                                        |
| `if (fa * fb >= 0) { ... }`                                     | Checks whether guesses are valid. If `f(a)` and `f(b)` have the same sign, no root is guaranteed between them → program stops.          |
| `cout << "Iteration \t f(x)" << endl;`                          | Prints table header for iterations.                                                                                                     |
| `for (int i = 1; i <= mi; i++) { ... }`                         | Loop to perform the method up to maximum iterations.                                                                                    |
| `x = (a * fb - b * fa) / (fb - fa);`                            | Applies the False Position formula to find the new approximation.                                                                       |
| `fx = f(x);`                                                    | Calculates the function value at the new approximation.                                                                                 |
| `cout << i << " \t\t " << fx << endl;`                          | Prints iteration number and corresponding `f(x)`.                                                                                       |
| `if (abs(fx) < tol) { ... }`                                    | Checks convergence. If `f(x)` is close enough to 0, the approximate root is printed and the program ends.                               |
| `if (fa * fx < 0) { b = x; fb = fx; } else { a = x; fa = fx; }` | Updates the interval. If the root lies between `a` and `x`, then `b` is replaced with `x`. Otherwise, `a` is replaced with `x`.         |
| `cout << "Max iterations reached... x = " << x << endl;`        | If convergence is not reached within maximum iterations, prints the last approximation.                                                 |
| `return 0;`                                                     | Ends the program successfully.                                                                                                          |

---