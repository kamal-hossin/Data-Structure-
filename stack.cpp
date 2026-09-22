#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int stack[100];
    int top = -1;

    // Push
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;
    stack[++top] = 40;
    stack[++top] = 50;

    cout << "Top element: " << stack[top] << endl;

    // Size
    cout << "Size: " << top + 1 << endl;

    // Pop
    stack[top--];

    cout << "After pop: " << stack[top] << endl;

    // Print Stack
    cout << "Stack elements: ";

    while (top != -1)
    {
        cout << stack[top] << " ";
        top--;
    }

    cout << endl;

    return 0;
}