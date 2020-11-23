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
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    int r1,c1,r2,c2;
    cin >> r1 >> c1 >> r2 >> c2;
    int d1,d2;
    d1 = abs(c1-c2);
    d2 = abs(r1-r2);
    int ans = 0;

    if(c1==c2 && r1==r2){
        ans = 0;
    }
    else if(d1+d2<=3 || d1 == d2){
        ans = 1;
    }
    else if((c1+r1)%2 == (c2+r2)%2){
        ans = 2;
    }
    else if(abs(r2-r1+c1-c2)<=3 || abs(r1+c1-r2-c2)<=3){
        ans = 2;
    }
    else ans = 3;
    cout << ans << endl;
    return 0;
}