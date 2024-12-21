#include <iostream>
using namespace std;
int main()

{

    int size;
    cout << "Enter the size of the array:";
    cin >> size;

    int array[size];
    cout << "Enter the array:";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int item;
    cout << "Enteer the element:";
    cin >> item;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {

                int t = array[j];
                array[j] = array[j + 1];

                array[j + 1] = t;
            }
        }
    }

    int beg = 0;
    int end = size - 1;
    int mid = (beg + end) / 2;

    while (beg < end && array[mid] != item)
    {
        if (item < array[mid])
            end = mid - 1;
        else
            beg = mid + 1;
        mid = (beg + end) / 2;
    }

    if (array[mid] == item)
        cout << " place number fo the item is :" << mid + 1;
    else
        cout << "element not found";
}