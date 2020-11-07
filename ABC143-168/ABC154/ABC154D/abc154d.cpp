/*
2020-04-26
atcoder ABC
D - Dice in Line
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    int N, K;
    ll max_K_total = 0;
    ll d = 0;
    ll max_d = 0;
    double ans;
    cin >> N >> K;
    vector<int> p(N);
    for(int i; i < N; i++){
        int input_p;
        cin >> input_p;
        p[i] = input_p;
        if(i < K){
            max_K_total += input_p;
        } else {
            d += input_p - p[i - K];
            max_d = max(max_d, d);
        }
    }
    max_K_total += max_d;
    ans = (double)(max_K_total + K) / 2;
    cout << fixed << setprecision(12) << ans << endl; 
    return 0;
}
