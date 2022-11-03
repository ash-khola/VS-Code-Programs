#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, length;
    string str;
    char c;
    cin >> t;

    while (t--)
    {
        cin >> str;
        cin >> c;
        int flag = 0;
        length = str.length();
        for (int i = 0; i < length; i++)
        {
            if (str[i] == c and (i % 2 == 0 || (length - i) % 2 == 0))
            {
                cout << "Yes" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "NO" << endl;
    }
}