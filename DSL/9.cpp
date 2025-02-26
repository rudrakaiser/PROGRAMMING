#include <iostream>
using namespace std;
#define SIZE 5
int QUEUE[SIZE];
int FRONT = -1, REAR = -1;
void ENQUEUE()
{
    if ((REAR + 1) % SIZE == FRONT)
    {
        cout << "Queue Overflow! Unable to add more elements.\n";
        return;
    }
    int value;
    cout << "Enter the value to Enqueue >>> ";
    cin >> value;
    if (FRONT == -1)
    {
        FRONT = 0;
    }
    REAR = (REAR + 1) % SIZE;
    QUEUE[REAR] = value;
    cout << "Enqueued [ " << value << " ]\n";
}
void DEQUEUE()
{
    if (FRONT == -1)
    {
        cout << "Queue Underflow! No elements to dequeue.\n";

        return;
    }
    cout << "Dequeued [ " << QUEUE[FRONT] << " ]\n";
    if (FRONT == REAR)
    {
        FRONT = REAR = -1;
    }
    else
    {
        FRONT = (FRONT + 1) % SIZE;
    }
}
void SHOW_QUEUE()
{
    if (FRONT == -1)
    {
        cout << "Queue is Empty.\n";
        return;
    }
    cout << "QUEUE = [ ";
    int i = FRONT;
    while (true)
    {
        cout << QUEUE[i] << " ";
        if (i == REAR)
        {
            break;
        }
        i = (i + 1) % SIZE;
    }
    cout << "]\n";
}
void ADD_VALUE_K()
{
    if (FRONT == -1)
    {
        cout << "Queue is Empty. No values to add.\n";
        return;
    }
    int K;
    cout << "Enter the value K to add to each element >>> ";
    cin >> K;
    int i = FRONT;
    while (true)
    {
        QUEUE[i] += K;
        if (i == REAR)
        {
            break;
        }
        i = (i + 1) % SIZE;
    }
    cout << "Added " << K << " to every element in the queue.\n";
}
void DISPLAY()
{

    cout << "------------------| QUEUE |------------------\n\n";
    cout << ">>> Size of the QUEUE is [ " << SIZE << " ]\n\n";
    cout << "\t(1) Enqueue\n";
    cout << "\t(2) Dequeue\n";
    cout << "\t(3) Show Queue\n";
    cout << "\t(4) Add value K to every node\n";
    cout << "\t(5) Exit\n";
}
int main()
{
    DISPLAY();
    while (true)
    {
        char choice;
        cout << "\nEnter Your Choice ------------------------> ";
    for_invalid_choice:
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case '1':
            ENQUEUE();
            break;
        case '2':
            DEQUEUE();
            break;
        case '3':
            SHOW_QUEUE();
            break;
        case '4':
            ADD_VALUE_K();
            break;
        case '5':
            cout << "-------------------| EXIT |------------------\n\n";
            return 0;
        default:
            cout << "Invalid Choice ! Please Choose 1 to 5 ----> ";
            goto for_invalid_choice;
        }
    }
    return 0;
}