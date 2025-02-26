#include <iostream>
using namespace std;

void print(int DATA[], int LINK[], int START)
{
    cout << "List = [ ";
    while (LINK[START - 1] != -1)
    {
        cout << DATA[START - 1] << " ";
        START = LINK[START - 1];
    }
    cout << "]\n\n";
}

int main()
{
    int data[] = {45, 57, 98, 12, 76, 0, 10, 23, 0, 9};
    int link[] = {7, 10, 2, -1, 1, -1, 3, 4, 6, 8};

    int start = 5;
    int available = 9;

    print(data, link, start);

    int K;
    cout << "Enter The Value For K = ";
    cin >> K;

    int array_size = (sizeof(data) / sizeof(data[0]));

    for (int i = 0; i < array_size; i++)
    {
        if (data[i] != 0)
        {
            data[i] += K;
        }
    }

    cout << "\nList Updated ...\n\n";

    print(data, link, start);

    return 0;
}