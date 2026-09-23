#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    queue<int> q;

    // Insert
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // Front element
    cout << "Front: " << q.front() << endl;

    // Back element
    cout << "Back: " << q.back() << endl;

    // Size
    cout << "Size: " << q.size() << endl;

    // Remove
    q.pop();

    cout << "After pop: " << q.front() << endl;

    // Empty check
    if(q.empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Queue is not empty" << endl;
    }

    // Print all elements
    cout << "Queue: ";

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    return 0;
}