
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define MOD 1e9 + 7

int main()
{
    int t;
    cin >> t;
    int n, m, k, x, y;
    int i, j;
    int w, h;
    while (t--)
    {
        cin >> n;
        int a;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            s.insert(a);
        }
        cout << s.size() << endl;
    }
    return 0;
}