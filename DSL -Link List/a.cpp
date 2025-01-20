#include<iostream>
using namespace std;

int dataArr[10] = {45, 57, 98, 12, 76, 0, 10, 23, 0, 9};
int linkArr[10] = {7, 10, 2, -1, 1, -1, 3, 4, 6, 8};
int start = 5;

int main() {
    int idx = start;
    cout << "List = [ ";
    while (idx != -1) {
        cout << dataArr[idx - 1] << " ";
        idx = linkArr[idx - 1];
    }
    cout << "]" << endl << endl;
    
    cout << "Enter the value for K = ";
    int k;
    cin >> k;
    
    idx = start;
    cout << endl << "Updated List = [ ";
    while (idx != -1) {
        dataArr[idx - 1] += k;
        cout << dataArr[idx - 1] << " ";
        idx = linkArr[idx - 1];
    }
    cout << "]" << endl;
    
    
}
