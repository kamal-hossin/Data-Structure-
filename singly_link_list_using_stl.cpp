#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    forward_list<int> list;

    // Insert at front
    list.push_front(10);
    list.push_front(20);
    list.push_front(30);

    cout << "List: ";
    for (auto it = list.begin(); it != list.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Insert after a position
    auto it = list.begin();
    advance(it, 1);

    list.insert_after(it, 25);

    cout << "After Insert: ";
    for (auto it = list.begin(); it != list.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Delete first element
    list.pop_front();

    cout << "After Delete Front: ";
    for (auto it = list.begin(); it != list.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Delete after a position
    it = list.begin();
    advance(it, 1);

    list.erase_after(it);

    cout << "After Erase: ";
    for (auto it = list.begin(); it != list.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Search
    int value = 10;

    auto found = find(list.begin(), list.end(), value);

    if (found != list.end())
    {
        cout << value << " Found" << endl;
    }
    else
    {
        cout << value << " Not Found" << endl;
    }

    // Size
    int count = distance(list.begin(), list.end());

    cout << "Size: " << count << endl;

    return 0;
}