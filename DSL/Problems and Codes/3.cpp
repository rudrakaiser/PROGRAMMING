#include <iostream>
#include <stdbool.h>
using namespace std;
int arr[20] = {57, 88, 12, 97, 34, 61, 45, 23, 55, 70, 39, 46, 94};
void FIND(int val)
{
    bool not_found = true;
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == val)
        {
            not_found = false;
            cout << "Position >>> " << i + 1;
            break;
        }
    }
    if (not_found)
        cout << "Not Found !!!";
}
void display()
{
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    cout << "--------| FIND Elements Position In Array |--------" << endl
         << endl;
    int val;
    display();
    cout << "Value >>> ";
    cin >> val;
    FIND(val);
    return 0;
}