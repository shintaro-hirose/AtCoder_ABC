/*
2020-05-05
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
    int N, ref, loopCnt;
    ull K, cnt;
    cin >> N >> K;
    vector<int> towns(N);
    vector<int> saw(N);
    rep(i, N){
        int a;
        cin >> a;
        towns.at(i) = a - 1;
    }
    ref = 0;
    cnt = 0;
    while(1){
        if(cnt == K){
            cout << ref + 1 << endl;
            return 0;
        }
        if(saw.at(ref) == 1){
            break;
        }
        saw.at(ref) = 1;
        ref = towns.at(ref);
        cnt++;
    }
    int refmemo = ref;
    loopCnt = 0;
    while(1){
        
        if(cnt == K){
            cout << ref + 1 << endl;
            return 0;
        }
        if(towns.at(ref) == refmemo){
            loopCnt++;
            break;
        }
        ref = towns.at(ref);
        loopCnt++;
        cnt++;
    }
    K = (K - cnt) % loopCnt;
    cnt = 0;
    while(1){
        if(cnt == K){
            cout << ref + 1 << endl;
            return 0;
        }
        ref = towns.at(ref);
        cnt++;
    }
    
    return 0;
}
