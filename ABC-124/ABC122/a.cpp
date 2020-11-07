#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<string> vs;
typedef vector<vs> vvs;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    char c; cin >> c;
    if(c == 'A') cout << 'T' << endl;
    else if(c == 'T') cout << 'A' << endl;
    else if(c == 'C') cout << 'G' << endl;
    else if(c == 'G') cout << 'C' << endl;
    return 0;
}