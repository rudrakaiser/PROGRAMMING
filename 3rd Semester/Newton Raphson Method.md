# **Report on Newton–Raphson Method**

## **Problem Statement**

In this report, we apply the **Newton–Raphson Method** to find approximate roots of two nonlinear equations:

1. **Equation 01:**

$$
f(x) = x^3 + 2x^2 + 10x - 20
$$

2. **Equation 02:**

$$
f(x) = \sin(x) - 1 - x^3
$$

These equations cannot be solved easily by analytical methods. Therefore, an iterative numerical technique such as the Newton–Raphson Method is used to approximate the solutions.

---

## **Newton–Raphson Method**

The Newton–Raphson Method is an **iterative root-finding algorithm** that improves the approximation of a root using the formula:

$$
x_{n+1} = x_n - \frac{f(x_n)}{f'(x_n)}
$$

Where:

* $x_n$ = current approximation
* $x_{n+1}$ = improved approximation
* $f(x)$ = function
* $f'(x)$ = derivative of the function

The process continues until:

$$
|x_{n+1} - x_n| < \epsilon
$$

where $\epsilon$ is the tolerance (error bound).

---

## **Code**

### Equation 01 Code

```cpp
#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return x*x*x + 2*x*x + 10*x - 20;
}

double df(double x) {
    return 3*x*x + 4*x + 10;
}

int main() {
    double x0 = 1;
    double x1;
    double tol = 0.0001;
    int max_iter = 100;
    int iter = 0;

    while (iter < max_iter) {
        double fx = f(x0);
        double dfx = df(x0);

        if (dfx == 0) {
            cout << "Derivative zero, cannot continue." << endl;
            return -1;
        }

        x1 = x0 - (fx / dfx);

        cout << "Iteration " << iter+1 << ": x = " << x1 << endl;

        if (fabs(x1 - x0) < tol) {
            cout << "\nApproximate root = " << x1 << endl;
            break;
        }

        x0 = x1;
        iter++;
    }

    if (iter == max_iter) {
        cout << "Method did not converge." << endl;
    }

    return 0;
}
```

---

### Equation 02 Code

```cpp
#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return sin(x) - 1 - pow(x, 3);
}

double df(double x) {
    return cos(x) - 3 * x * x;
}

int main() {
    double x0 = 0.5;
    double x1;
    double tol = 0.0001;
    int max_iter = 100;
    int iter = 0;

    while (iter < max_iter) {
        double fx = f(x0);
        double dfx = df(x0);

        if (dfx == 0) {
            cout << "Derivative is zero, method fails." << endl;
            return -1;
        }

        x1 = x0 - (fx / dfx);

        cout << "Iteration " << iter + 1 << ": x = " << x1 << endl;

        if (fabs(x1 - x0) < tol) {
            cout << "\nApproximate root = " << x1 << endl;
            break;
        }

        x0 = x1;
        iter++;
    }

    if (iter == max_iter) {
        cout << "Method did not converge." << endl;
    }

    return 0;
}
```

---

## **Implementation**

The Newton–Raphson method has been implemented in C++ for both equations. Below is a line-by-line explanation of the program:

| **Code Line(s)**                                                                     | **Explanation**                                                                                                                                                                     |
| ------------------------------------------------------------------------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `#include <iostream>`<br>`#include <cmath>`                                          | These header files are included: `<iostream>` is required for input/output operations (`cout`), and `<cmath>` provides mathematical functions like `fabs`, `pow`, `sin`, and `cos`. |
| `using namespace std;`                                                               | This line allows direct use of standard library functions (like `cout`) without writing `std::` before them.                                                                        |
| `double f(double x) { return x*x*x + 2*x*x + 10*x - 20; }`                           | Defines the function $f(x)$ for Equation 01. It calculates $x^3 + 2x^2 + 10x - 20$. (For Equation 02, the function is defined as `sin(x) - 1 - pow(x, 3)`.)                         |
| `double df(double x) { return 3*x*x + 4*x + 10; }`                                   | Defines the derivative $f'(x)$ for Equation 01. It calculates $3x^2 + 4x + 10$. (For Equation 02, the derivative is `cos(x) - 3*x*x`.)                                              |
| `int main() { ... }`                                                                 | The main function of the program, where execution begins.                                                                                                                           |
| `double x0 = 1;`                                                                     | Sets the **initial guess** for the root (for Equation 01, initial guess = 1. For Equation 02, initial guess = 0.5).                                                                 |
| `double x1;`                                                                         | Declares a variable `x1` which will store the improved approximation after applying the Newton–Raphson formula.                                                                     |
| `double tol = 0.0001;`                                                               | Sets the tolerance level (the stopping condition). The iteration will stop when the change between successive approximations is smaller than this value.                            |
| `int max_iter = 100;`                                                                | Defines the maximum number of iterations allowed, in case the method fails to converge.                                                                                             |
| `int iter = 0;`                                                                      | Initializes the iteration counter.                                                                                                                                                  |
| `while (iter < max_iter) { ... }`                                                    | Starts a loop that continues until either convergence is reached or the maximum number of iterations is exceeded.                                                                   |
| `double fx = f(x0);`                                                                 | Calculates the value of the function $f(x)$ at the current guess `x0`.                                                                                                              |
| `double dfx = df(x0);`                                                               | Calculates the value of the derivative $f'(x)$ at the current guess `x0`.                                                                                                           |
| `if (dfx == 0) { cout << "Derivative zero, cannot continue." << endl; return -1; }`  | Checks whether the derivative is zero. If yes, the program stops, because division by zero is not possible in the Newton–Raphson formula.                                           |
| `x1 = x0 - (fx / dfx);`                                                              | Applies the Newton–Raphson iteration formula: $x_{n+1} = x_n - \frac{f(x_n)}{f'(x_n)}$.                                                                                             |
| `cout << "Iteration " << iter+1 << ": x = " << x1 << endl;`                          | Prints the current iteration number and the newly calculated value of `x1`.                                                                                                         |
| `if (fabs(x1 - x0) < tol) { cout << "\nApproximate root = " << x1 << endl; break; }` | Checks the **convergence condition**: if the difference between the current and previous approximations is smaller than tolerance, the root is found, printed, and the loop ends.   |
| `x0 = x1;`                                                                           | Updates `x0` with the new value for the next iteration.                                                                                                                             |
| `iter++;`                                                                            | Increases the iteration counter by 1.                                                                                                                                               |
| `if (iter == max_iter) { cout << "Method did not converge." << endl; }`              | After the loop ends, this line checks if the maximum number of iterations was reached without convergence. If so, a failure message is displayed.                                   |
| `return 0;`                                                                          | Ends the program successfully.                                                                                                                                                      |

---

## **Output**

### Output for Equation 01

```
Iteration 1: x = 1.41176
Iteration 2: x = 1.36934
Iteration 3: x = 1.36881
Iteration 4: x = 1.36881

Approximate root = 1.36881
```

### Output for Equation 02

```
Iteration 1: x = 5.56005
Iteration 2: x = 3.67353
Iteration 3: x = 2.43809
Iteration 4: x = 1.63973
Iteration 5: x = 1.09749
Iteration 6: x = 0.644036
Iteration 7: x = -0.8553
Iteration 8: x = -1.58913
Iteration 9: x = -1.32403
Iteration 10: x = -1.25396
Iteration 11: x = -1.24908
Iteration 12: x = -1.24905

Approximate root = -1.24905
```