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
    int N, M;
    cin >> N >> M;
    vector<int> data(N, -1);
    rep(i, M){
        int si, ci;
        cin >> si >> ci;
        if(data[si - 1] == -1){
            data[si - 1] = ci;
        } else {
            if(data[si - 1] != ci){
                cout << "-1" << endl;
                return 0;
            }
        }
    }
    rep(i, N){
        if(i == 0 && N != 1){
            if(data[i] == 0){
                cout << "-1" << endl;
                return 0;
            }
            if(data[i] == -1){
                data[i] = 1;
            }
        } else {
            if(data[i] == -1){
                data[i] = 0;
            }
        }
    }
    for(int x: data){
        cout << x;
    }
    cout << endl;
    return 0;
}
