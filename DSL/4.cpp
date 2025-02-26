#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target)
{
    int Beg = 0, End = n - 1;
    while (Beg <= End)
    {
        int Mid = Beg + (End - Beg) / 2;
        if (arr[Mid] == target)
            return Mid;
        if (arr[Mid] < target)
            Beg = Mid + 1;
        else
            End = Mid - 1;
    }
    return -1;
}
int main()
{
    cout << "\n-----------------| Binary Search |-----------------";
    cout << "\n\nEnter Array SIZE = ";
    int n;
    cin >> n;
    int arr[n];

    cout << "\nEnter All The Elements = ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "\nSorted Array: [ ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "]\n";
    int target;
    cout << "\nEnter the element to search: ";
    cin >> target;
    int result = binarySearch(arr, n, target);
    if (result != -1)
        cout << "\nElement " << target << " found at index " << result << ".\n";
    else
        cout << "\nElement " << target << " not found in the array.\n";
    return 0;
}