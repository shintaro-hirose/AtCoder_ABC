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

int gcd(int ain, int bin) {
    int a = max(ain, bin), b = min(ain, bin);
    if(a%b == 0) {
        return b;
    } else {
        return gcd(b, a%b);
    }
}

int main() {
    int N; cin >> N;
    vector<int> As(N);
    rep(i, N) cin >> As[i];
    string ans = "pairwise coprime";
    vector<int> D(1000010, 1);
    for(int i = 2; i <= 1000000; i++){
        if(D[i] != 1) continue;
        for(int j = 1; i * j <= 1000000; j++){
            D[i*j] = i;
        }
    }
    vector<int> cnt(1000010, 0);
    rep(i,N){
        int a = As[i];
        set<int> yk;
        yk.insert(a);
        while(a != D[a]){
            yk.insert(D[a]);
            a /= D[a];
            yk.insert(D[a]);
        }
        for(auto itr = yk.begin(); itr != yk.end(); itr++){
            if(*itr == 1) continue;
            cnt[*itr]++;
            if(cnt[*itr] == N){
                cout << "not coprime" << endl;
                return 0;
            }
            if(cnt[*itr] >= 2){
                ans = "setwise coprime";
            }
        }
    }
    cout << ans << endl;
    return 0;
}