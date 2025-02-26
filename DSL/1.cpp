#include <iostream>
using namespace std;
int arr[20] = {57, 88, 12, 97, 34, 61, 45, 23, 55, 70, 39, 46, 94};
void INSERT(int position, int val)
{
    --position;
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = length; i > position; i--)
        arr[i] = arr[i - 1];
    arr[position] = val;
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
    cout << "---------------------| INSERT |---------------------" << endl
         << endl;
    int position, val;
    display();
    cout << "Position >>> ";
    cin >> position;
    cout << "Value >>> ";
    cin >> val;
    INSERT(position, val);
    display();
    return 0;
}