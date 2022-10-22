#include <bits/stdc++.h>
using namespace std;

const int MAXN = 101;
string words[MAXN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
        if (words[i].length() > 10)
            cout << words[i][0] << words[i].length() - 2
                 << words[i][words[i].length() - 1] << endl;
        else
            cout << words[i] << endl;
    }

    return 0;
}