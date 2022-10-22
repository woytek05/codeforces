#include <bits/stdc++.h>
using namespace std;

const int MAXN = 151;
string statements[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> statements[i];
        if (statements[i] == "++X" || statements[i] == "X++")
            x++;
        else if (statements[i] == "--X" || statements[i] == "X--")
            x--;
    }

    cout << x << "\n";

    return 0;
}