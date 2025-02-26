#include <iostream>
using namespace std;
int arr[20] = {57, 88, 12, 97, 34, 61, 45, 23, 55, 70, 39, 46, 94};
void DELETE(int position)
{
    --position;
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = position; i < length; i++)
        arr[i] = arr[i + 1];
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
    cout << "---------------------| DELETE |---------------------" << endl
         << endl;
    int position, val;
    display();
    cout << "Position >>> ";
    cin >> position;
    DELETE(position);
    display();
    return 0;
}