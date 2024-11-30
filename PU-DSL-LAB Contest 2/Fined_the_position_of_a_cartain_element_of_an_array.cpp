#include <iostream>
using namespace std;

int main()
{

    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int element;
    cout << "Enter the element:";
    cin >> element;
    for (int j = 0; j < size; j++)
    {
        if (array[j] == element)
            cout << j+1;
    }
}
