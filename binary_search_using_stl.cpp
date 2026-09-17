#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int x;
    cin >> x;

    int l = 0;
    int r = n - 1;

    bool found = false;

    while(l <= r)
    {
        int mid = l + (r - l) / 2;

        if(a[mid] == x)
        {
            found = true;
            break;
        }
        else if(a[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    if(found)
    {
        cout << "Found" << '\n';
    }
    else
    {
        cout << "Not Found" << '\n';
    }

    return 0;
}