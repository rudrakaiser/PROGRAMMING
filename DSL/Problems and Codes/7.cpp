#include <iostream>
using namespace std;
int D[100] = {45, 57, 98, 12, 76, 0, 10, 23, 0, 9};
int L[100] = {7, 10, 2, -1, 1, -1, 3, 4, 6, 8};
int st = 5;
int av = 9;
int main()
{
    cout << "List = [ ";
    int p = st;
    while (p != -1)
    {
        cout << D[p - 1] << " ";
        p = L[p - 1];
    }
    cout << "]\n";
    int delD;
    cout << "\nDelete Data = ";
    cin >> delD;
    int c = st, prev = -1;
    bool found = false;
    while (c != -1)
    {
        if (D[c - 1] == delD)
        {
            found = true;
            break;
        }
        prev = c;
        c = L[c - 1];
    }
    if (!found)
    {
        cout << "\nData not found in the list\n";
        return 0;
    }
    if (prev == -1)
        st = L[c - 1];
    else
        L[prev - 1] = L[c - 1];
    L[c - 1] = av;
    av = c;
    cout << "\nUpdated List = [ ";

    p = st;
    while (p != -1)
    {
        cout << D[p - 1] << " ";
        p = L[p - 1];
    }
    cout << "]\n";
    return 0;
}