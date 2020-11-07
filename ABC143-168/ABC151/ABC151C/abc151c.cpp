/*
2020-04-25
atcoder ABC
C - Welcome to AtCoder
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    int N, M, wa_cnt = 0, ac_cnt = 0;
    cin >> N >> M;
    vector<int> wa_cnts(N);
    vector<int> ac_memo(N);
    for(int i = 0; i < M; i++) {
        int p;
        string judge;
        cin >> p >> judge;
        if(ac_memo[p - 1] == 0) {
            if(judge == "WA"){
                wa_cnts[p - 1]++;
            } else {
                ac_memo[p - 1] = 1;
                ac_cnt++;
            }
        }
    }
    for(int i = 0; i < N; i++){
        if(ac_memo[i] == 1) {
            wa_cnt += wa_cnts[i];
        }
    }
    cout <<  ac_cnt << " " << wa_cnt << endl;
    
    return 0;
}
