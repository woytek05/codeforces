#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int w;
    cin >> w;

    if (w <= 3)
    {
        cout << "NO";
        return 0;
    }

    if (w % 2 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}