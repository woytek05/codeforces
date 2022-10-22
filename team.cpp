#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, sum, problems_to_implement = 0;
    cin >> n;
    int *arr = new int[3 * n];

    for (int i = 1; i < 3 * n; i += 3)
        cin >> arr[i - 1] >> arr[i] >> arr[i + 1];

    for (int i = 1; i < 3 * n; i += 3)
    {
        sum = arr[i - 1] + arr[i] + arr[i + 1];
        if (sum > 1)
            problems_to_implement++;
    }

    cout << problems_to_implement;

    delete[] arr;
    return 0;
}