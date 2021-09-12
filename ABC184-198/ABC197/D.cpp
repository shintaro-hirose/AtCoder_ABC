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
typedef vector<bool> vb;
typedef vector<vb> vvb;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9+10)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    int N, x0, y0, xt, yt;
    cin >> N >> x0 >> y0 >> xt >> yt;
    double xm = (double)(xt + x0) / 2;
    double ym = (double)(yt + y0) / 2;
    
    double xc = x0 - xm;
    double yc = y0 - ym;
    
    double x1 = xc * cos(2 * PI / N) - yc * sin(2 * PI / N) + xm;
    double y1 = xc * sin(2 * PI / N) + yc * cos(2 * PI / N) + ym;

    cout << fixed << setprecision(15) << x1 << " " << y1 << endl;

    return 0;
}