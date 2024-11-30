#include <iostream>
using namespace std;

int main()
{
    
    int array[20] = {57, 88, 12, 97, 34, 61, 45, 23, 55, 70, 39, 46, 94};
    int size = 13; 
    int new_array[20];

    int insert_position, element;
    cout << "Enter the insert position and the element: ";
    cin >> insert_position >> element;
    for(int i=0;i<=size;i++)
    {
      if(i<(insert_position-1))
      {
        new_array[i]=array[i];
      }
      else if(i==(insert_position-1))
      {
        new_array[i]=element;

      }
      else 
      {
        new_array[i]=array[i-1];
      }


    }
    for(int i=0;i<=size;i++)
    {

        cout<<new_array[i]<<" ";

    }
}
