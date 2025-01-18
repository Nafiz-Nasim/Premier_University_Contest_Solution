#include <iostream>
#define MAX 100

using namespace std;

int stack[MAX], top = -1;

int main()

 {
    int choice, value;



    while (1) {
        cout << "\n1. Push\n2. Pop\n3. Show\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
         {
            case 1:
                if (top == MAX - 1) 
                {

                    cout << "Stack is full!\n";

                } 


                else
                 {
                    cout << "Enter value to push: ";


                    cin >> value;

                    stack[++top] = value;
                    cout << value << " pushed.\n";
                }
                break;

            case 2:
                if (top == -1)
                 {

                    cout << "  NO  value in the Stack !\n";
                } 
                else
                 {
                    cout << "Popped: " << stack[top] << "\n";
                    top--;
                }
                break;
            case 3:
                if (top == -1) 
                {
                    cout << "Stack is empty.\n";
                }
                 else 
                 {
                    cout << "Stack: ";
                    for (int i = top; i >=0; i--) {
                        cout << stack[i] << " ";
                    }
                    cout << "\n";
                }
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice.\n";

        }

    }

}
