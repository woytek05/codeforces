#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k, next_round = 0;
    cin >> n >> k;
    int *scores = new int[n];

    for (int i = 0; i < n; i++)
        cin >> scores[i];

    for (int i = 0; i < n; i++)
    {
        if (scores[i] != 0 && scores[i] >= scores[k - 1])
            next_round++;
    }

    cout << next_round;

    delete[] scores;
    return 0;
}