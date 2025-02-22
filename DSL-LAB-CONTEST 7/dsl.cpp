#include <bits/stdc++.h>
using namespace std;

int main() {
    int data[] = {50, 30, 70, 20, 40, 60, 70, 10};
    int left[] = {1, 3, 5, 7, -1, -1, -1, -1};
    int right[] = {2, 4, 6, -1, -1, -1, -1, -1};

    int stack[100], top = -1, index;

    // Preorder Traversal (Root -> Left -> Right)
    cout << "Preorder: ";
    stack[++top] = 0;
    while (top != -1) {
        index = stack[top--];
        if (index == -1) continue;
        cout << data[index] << " ";
        stack[++top] = right[index];
        stack[++top] = left[index];
    }
    cout << endl;

    // Inorder Traversal (Left -> Root -> Right)
    cout << "Inorder: ";
    top = -1;
    index = 0;
    while (top != -1 || index != -1) {
        while (index != -1) {
            stack[++top] = index;
            index = left[index];
        }
        index = stack[top--];
        cout << data[index] << " ";
        index = right[index];
    }
    cout << endl;

    // Postorder Traversal (Left -> Right -> Root)
    cout << "Postorder: ";
    int visited[100] = {0};
    top = -1;
    stack[++top] = 0;
    while (top != -1) {
        index = stack[top];
        if (index == -1) {
            top--;
            continue;
        }

        if (visited[index] == 1) {
            cout << data[index] << " ";
            top--; 
        } else {
            visited[index] = 1;
            stack[++top] = right[index];
            stack[++top] = left[index];
        }
    }
    cout << endl;

    return 0;
}
