#include <bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[4], a = 0, b = 0;
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        sort(arr,arr+4);
        bool flag = 0;
        do
        {
            if ((arr[1] + arr[2]) % 2 == 0)
            {
                a = (arr[1] + arr[2]) / 2;
                b = arr[1] - a;

                if (a >= 1 and a <= pow(10, 4) and b >= 1 and b <= pow(10, 4))
                {
                    if (a * b == arr[0] and (a / b) == arr[3])
                    {
                        flag = 1;
                        cout << a << " " << b << endl;
                    }
                }
            }
        } while (next_permutation(arr, arr + 4));

        if (flag == 0)
            cout << -1 << " " << -1 << endl;
    }
    return 0;
}