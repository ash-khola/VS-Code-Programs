#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    // vector<int> vec;
    int length;
    while (t--)
    {
        int sumo = 0, maxe = 0, mino = 0, sume = 0;
        int sum = 0;
        cin >> length;
        vector<int> vec(length);
        for (int i = 0; i < length; i++)
        {
            cin >> vec[i];                   // -3 -2 -1 0 1 2 3
            if (i % 2 != 0)
            {
                sumo += abs(vec[i]);
                mino = min(mino, vec[i]);
            }

            else
            {
                sume += abs(vec[i]);
                maxe = max(maxe, vec[i]);
            }
        }
        if (maxe > mino)
        {
            sum = (sumo - sume) + 2 * (maxe - mino);
        }
        else
        {
            sum = sumo - sume;
        }

        cout << sum << endl;
    }
}