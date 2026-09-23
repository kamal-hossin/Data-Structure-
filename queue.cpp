#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q[100];
    int front = 0;
    int rear = -1;

    // Push
    q[++rear] = 10;
    q[++rear] = 20;
    q[++rear] = 30;
    q[++rear] = 40;

    // Front
    cout << "Front: " << q[front] << endl;

    // Back
    cout << "Back: " << q[rear] << endl;

    // Size
    cout << "Size: " << rear - front + 1 << endl;

    // Pop
    front++;

    cout << "After Pop: " << q[front] << endl;

    // Print Queue
    cout << "Queue: ";

    for(int i = front; i <= rear; i++)
    {
        cout << q[i] << " ";
    }

    cout << endl;

    // Empty Check
    if(front > rear)
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is Not Empty" << endl;
    }

    return 0;
}