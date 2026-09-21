#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    list<int> l;

    // Insert
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    l.push_front(5);

    cout << "List: ";
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Insert at specific position
    auto it = l.begin();
    advance(it, 2);

    l.insert(it, 15);

    cout << "After Insert: ";
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Delete from front
    l.pop_front();

    // Delete from back
    l.pop_back();

    cout << "After Delete: ";
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Delete specific value
    l.remove(15);

    cout << "After Remove 15: ";
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Size
    cout << "Size: " << l.size() << endl;

    // Front and Back
    cout << "Front: " << l.front() << endl;
    cout << "Back: " << l.back() << endl;

    // Reverse
    l.reverse();

    cout << "Reverse: ";
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Sort
    l.sort();

    cout << "Sorted: ";
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}