#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string firstString, secondString;
    cin >> firstString >> secondString;
    int stringsLength = firstString.length();

    transform(firstString.begin(), firstString.end(), firstString.begin(), ::tolower);
    transform(secondString.begin(), secondString.end(), secondString.begin(), ::tolower);

    for (int i = 0; i < stringsLength; i++)
    {
        if (firstString[i] > secondString[i])
        {
            cout << "1\n";
            return 0;
        }
        else if (firstString[i] < secondString[i])
        {
            cout << "-1\n";
            return 0;
        }
    }

    cout << "0\n";
    return 0;
}