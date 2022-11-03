#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define c1 cout << "Entered here1" << endl;
#define c2 cout << "Entered here2" << endl;
#define sf(x) scanf("%lld", &x)
#define pf(x) printf("%lld", x)
#define b_d binary_to_deci
#define mp make_pair // p= make_pair(44, "Edpresso");  --> p needs to be declared as  pair<int, string> p
#define pb push_back
#define loop(n) for (ll i = 0; i < n; i++)
// #define mp() make_pair()
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

ll getFirstSetBitPos(ll n)
{
    return log2(n & -n) + 1;
}

// ll oddFirst(int a, int b)
// {

//  // Stores the positions of the
//  // first set bit
//  ll steps_a = getFirstSetBitPos(a);
//  ll steps_b = getFirstSetBitPos(b);

//  // If both are same
//  if (steps_a == steps_b)
//  {
//      return a;
//  }

//  // If A has the least significant
//  // set bit
//  if (steps_a > steps_b)
//  {
//      return b;
//  }

//  // Otherwise
//  if (steps_a < steps_b)
//  {
//      return a;
//  }
// }

ll findLargestPower(ll n)
{
    int x = 0;
    while ((1 << x) <= n)
        x++;
    return x - 1;
}
ll countSetBits(ll n)
{
    if (n <= 1)
        return n;
    ll x = findLargestPower(n);
    return (x * pow(2, (x - 1))) + (n - pow(2, x) + 1) + countSetBits(n - pow(2, x));
}

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

unsigned int countBits(unsigned int n)
{
    unsigned int count = 0;
    while (n)
    {
        count++;
        n >>= 1;
    }
    return count;
}

ll ita(ll n)
{
    ll decimal, binary = 0, remainder, product = 1;
    // cin >> decimal;
    decimal = n;
    while (decimal != 0)
    {
        remainder = decimal % 2;
        binary = binary + (remainder * product);
        decimal = decimal / 2;
        product *= 10;
    }

    return binary;
}

/***************************************** Code starts here ****************************************/

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i, j, k;
        cin >> n;

        vector<string> vec;
        string s;
        bool flag = false;

        loop(n)
        {
            // cin >> s;
            scanf("%s", &s);
            vec.push_back(s);
            // st.insert(s);
        }

        for (i = 0; i < n; i++)
        {
            flag = false;
            for (j = 0; j < n; j++)
            {
                if (j == i)
                    continue;
                for (k = 0; k < n; k++)
                {
                    if(k==i)
                        continue;
                    string s1 = vec[i];
                    string s2 = vec[j];
                    string s3 = vec[k];
                    if (s1.compare(s2 + s3) == 0)
                    {
                        cout << s1 << " = " << s2 + s3 << " " << i << " " << j << " " << k << endl;
                        flag = true;
                        cout << 1;
                        break;
                    }
                }
                if (flag)
                    break;
            }
            if (!flag)
                cout << 0;
        }
        cout << endl;
    }
    return 0;
}
