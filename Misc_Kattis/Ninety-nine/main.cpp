#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0;

    while (n < 99)
    {
        if ((n + 2) % 3 == 0)
        {
            n += 2;
        }
        else if ((n + 1) % 3 == 0)
        {
            n += 1;
        }
        else
        {
            n += n % 2 + 1;
        }

        cout << n << endl;

        cin >> n;
    }

    cout << '\n';
    return 0;
}
