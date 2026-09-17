#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n + 1);
    vector<int> prefix(n + 1);

    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        prefix[i] = prefix[i - 1] + a[i];
    }

    int q;
    cin >> q;

    while(q--)
    {
        int l, r;
        cin >> l >> r;

        int sum = prefix[r] - prefix[l - 1];

        cout << sum << '\n';
    }

    return 0;
}