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
    
    int newData, pos;
    cout << endl << "Position = ";
    cin >> pos;
    cout << endl << "Data = ";
    cin >> newData;
    
    if (avail == -1) {
        cout << endl << "There is no space available in this list" << endl;
        return 0;
    }
    
    int newIdx = avail;
    avail = linkArr[avail - 1];
    dataArr[newIdx - 1] = newData;
    
    if (pos == -1) {
        linkArr[newIdx - 1] = start;
        start = newIdx;
    } else {
        int curr = start, prev = -1, currPos = 1;
        while (curr != -1 && currPos < pos) {
            prev = curr;
            curr = linkArr[curr - 1];
            currPos++;
        }
        
        if (currPos == pos) {
            linkArr[newIdx - 1] = curr;
            if (prev != -1) linkArr[prev - 1] = newIdx;
        } else {
            cout << endl << "Invalid position" << endl;
            return 0;
        }
    }
    
    cout << endl << "Updated List = [ ";
    idx = start;
    while (idx != -1) {
        cout << dataArr[idx - 1] << " ";
        idx = linkArr[idx - 1];
    }
    cout << "]" << endl;
    

}
