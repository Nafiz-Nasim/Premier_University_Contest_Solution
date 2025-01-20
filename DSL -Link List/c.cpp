#include<iostream>
using namespace std;

int dataArr[100] = {45, 57, 98, 12, 76, 0, 10, 23, 0, 9};
int linkArr[100] = {7, 10, 2, -1, 1, -1, 3, 4, 6, 8};
int start = 5;
int avail = 9;

int main() {
    cout << "List = [ ";
    int idx = start;
    while (idx != -1) {
        cout << dataArr[idx - 1] << " ";
        idx = linkArr[idx - 1];
    }
    cout << "]" << endl;
    
    int delData;
    cout << endl << "Delete Data = ";
    cin >> delData;
    
    int curr = start, prev = -1;
    bool found = false;
    while (curr != -1) {
        if (dataArr[curr - 1] == delData) {
            found = true;
            break;
        }
        prev = curr;
        curr = linkArr[curr - 1];
    }
    
    if (!found) {
        cout << endl << "Data not found in the list" << endl;
        return 0;
    }
    
    if (prev == -1) start = linkArr[curr - 1];
    else linkArr[prev - 1] = linkArr[curr - 1];
    
    linkArr[curr - 1] = avail;
    avail = curr;
    
    cout << endl << "Updated List = [ ";
    idx = start;
    while (idx != -1) {
        cout << dataArr[idx - 1] << " ";
        idx = linkArr[idx - 1];
    }
    cout << "]" << endl;
    

}
