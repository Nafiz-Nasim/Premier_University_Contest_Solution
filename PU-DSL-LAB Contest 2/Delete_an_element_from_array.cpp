#include <iostream>
using namespace std;

int main()
{
    
    int array[20] = {57, 88, 12, 97, 34, 61, 45, 23, 55, 70, 39, 46, 94};
    int size = 13;
    int position;
    cin>>position;

    for(int i=0;i<size-1;i++)
    {
        
        if(i+1<position) 
        {
            cout<<array[i]<<" ";
        }
    
        else 
        {
            
            
        
            cout<<array[i+1]<<" ";
            
        }
        


    }




}
