#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

const ll mod = 1000000007;

int main() {
    int N;
    cin >> N;
    vector<i_i> data(N, {0,0});

    rep(i, N){
        int a;
        cin >> a;
        data[i] = {a, i};
    }
    sort(data.begin(), data.end());
    for(i_i p: data){
        cout << p.second + 1 << " ";
    }
    cout << endl;
    return 0;
}
