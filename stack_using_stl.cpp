#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<int> st;

    // Push
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // Top
    cout << "Top: " << st.top() << endl;

    // Size
    cout << "Size: " << st.size() << endl;

    // Empty
    if (st.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    // Pop
    st.pop();

    cout << "After pop, Top: " << st.top() << endl;

    // Print all elements
    cout << "Stack: ";

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl;

    return 0;
}