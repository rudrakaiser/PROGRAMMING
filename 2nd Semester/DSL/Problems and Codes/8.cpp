#include <iostream>
using namespace std;
#define MAX 5
int STACK[MAX], top = -1;
void PUSH()
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow ! Cannot push more elements.\n";
    }
    else
    {
        int value;
        cout << "Enter the value to PUSH >>> ";
        cin >> value;
        STACK[++top] = value;
        cout << "Pushed [ " << value << " ] onto the stack.\n";
    }
}
void POP()
{
    if (top == -1)
    {
        cout << "Stack Underflow ! The Stack is EMPTY.\n";
    }
    else
    {
        cout << "Popped [ " << STACK[top--] << " ] from the stack.\n";
    }
}
void SHOW()
{
    if (top == -1)
    {
        cout << "The Stack is EMPTY !\n";
    }
    else
    {
        cout << "Stack [ ";
        for (int i = top; i >= 0; --i)
        {
            cout << STACK[i] << " ";
        }
        cout << " ]" << endl;
    }
}
void DISPLAY()
{
    system("cls");
    cout << "----------------------------| STACK |----------------------------\n\n";
    cout << "--> (1) PUSH\n";
    cout << "--> (2) POP\n";
    cout << "--> (3) SHOW\n";
    cout << "--> (4) EXIT\n";
}
int main()
{

    int choice;
    DISPLAY();
    while (true)
    {
        cout << "\nEnter Your Choice -----------------------> ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            PUSH();
            break;
        case 2:
            POP();
            break;
        case 3:
            SHOW();
            break;
        case 4:
            cout << "-----------------------------| EXIT |--------------------------- -\n\n ";

                return 0;
        default:
            cout << "Invalid choice ! Please try again.\n";
        }
    }
    return 0;
}