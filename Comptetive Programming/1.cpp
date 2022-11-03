#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define p(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define s(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define sf(x) scanf("%lf", &x)
#define ll long long
#define db double
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define c1 cout << "Entered here1" << endl;
#define c2 cout << "Entered here2" << endl;
#define b_d binary_to_deci
#define loop(n) for (ll i = 0; i < n; i++)
const int N = 3e5 + 4;

ll binary_to_deci(string s)
{
    string s1;
    ll deci = 0;
    for (int i = 0; i < s.length(); i++)
    {
        s1 = s[i];
        deci += (stoi(s1) << (s.length() - 1 - i));
    }
    return deci;
}

ll invertBits(ll num)
{
    // calculating number of bits
    // in the number
    ll x = log2(num) + 1;

    // Inverting the bits one by one
    for (ll i = 0; i < x; i++)
        num = (num ^ (1 << i));

    return num;
}

// Returns factorial of n
ll fact(ll n)
{
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}

ll nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

ll factorial(ll n)
{
    if (n == 0)
        return 1;
    ll i = n, fact = 1;
    while (n / i != n)
    {
        fact = fact * i;
        i--;
    }
    return fact;
}

/***************************************** Code starts here ****************************************/

bool check_rotation(string s, string goal)
{
    if (s.size() != goal.size())
        return false;
    if (s[0] == goal[0])
        return false;

    unordered_map<char, char> next_char1, next_char2;
    for (int i = 0; i < s.length(); i++)
    {
        if (i == s.length() - 1)
            next_char1[s[i]] = s[0];
        else
            next_char1[s[i]] = s[i + 1];
    }
    next_char1[s[s.length() - 1]] = s[0];

    for (int i = 0; i < goal.length(); i++)
    {
        if (i == goal.length() - 1)
            next_char2[goal[i]] = goal[0];
        else
            next_char2[goal[i]] = goal[i + 1];
        if (next_char1[goal[i]] != next_char2[goal[i]])
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    string s1 = "ABCD";
    string s2 = "CDAB";
    if (check_rotation(s1, s2))
        cout << s2 << " is a rotated form of " << s1
             << endl;
    else
        cout << s2 << " is not a rotated form of " << s1
             << endl;
    string s3 = "ACBD";
    if (check_rotation(s1, s3))
        cout << s3 << " is a rotated form of " << s1
             << endl;
    else
        cout << s3 << " is not a rotated form of " << s1
             << endl;
    return 0;
}