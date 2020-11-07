/*
2020-05-03
atcoder ABC
*/

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
    int N, M, ans = 0;
    cin >> N >> M;
    vector<ll> data(N);
    vector<vector<int>> bridge(N);
    rep(i, N){
        ll H;
        cin >> H;
        data[i] = H;
    }

    rep(i, M){
        int A, B;
        cin >> A >> B;
        bridge.at(A-1).push_back(B-1);
        bridge.at(B-1).push_back(A-1);
    }

    rep(i, N){
        bool isHighest = true;
        for(int j: bridge.at(i)){
            if(data[i] <= data[j]){
                isHighest = false;
                break;
            }
        }
        if(isHighest){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
