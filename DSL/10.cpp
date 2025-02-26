#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> t = {
        {50, 1, 2},
        {30, 3, 4},
        {70, 5, 6},
        {20, 7, -1},
        {40, -1, -1},
        {60, -1, -1},
        {70, -1, -1},
        {10, -1, -1}};
    cout << "-------| Pre-order Traversal |-------\n\n";
    vector<int> stack;
    int i = 0;
    cout << "[ ";
    while (i != -1 || !stack.empty())
    {

        cout << t[i][0] << " ";
        if (t[i][2] != -1)
            stack.push_back(t[i][2]);
        i = t[i][1] != -1 ? t[i][1] : (!stack.empty() ? stack.back() : -1);
        if (!stack.empty() && i == stack.back())
            stack.pop_back();
    }
    cout << "]" << endl
         << endl
         << endl;
    cout << "\n-------| In-order Traversal |-------\n\n";
    stack.clear();
    i = 0;
    cout << "[ ";
    while (i != -1 || !stack.empty())
    {
        while (i != -1)
        {
            stack.push_back(i);
            i = t[i][1];
        }
        i = stack.back();
        stack.pop_back();
        cout << t[i][0] << " ";
        i = t[i][2];
    }
    cout << "]" << endl
         << endl
         << endl;
    cout << "\n------| Post-order Traversal |------\n\n";
    stack.clear();
    i = 0;
    cout << "[ ";
    int pi = -1;
    while (i != -1 || !stack.empty())
    {
        while (i != -1)
        {
            stack.push_back(i);
            i = t[i][1];
        }
        i = stack.back();
        if (t[i][2] != -1 && t[i][2] != pi)
            i = t[i][2];
        else
        {
            cout << t[i][0] << " ";
            pi = i;
            stack.pop_back();
            i = -1;
        }
    }
    cout << "]" << endl
         << endl
         << endl;
    return 0;
}