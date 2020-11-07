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
    int N, ans;
    cin >> N;
    vector<vector<int>> whoIsHonest(N, vector<int>(0));
    vector<vector<int>> whoIsUnkind(N, vector<int>(0));
    rep(i, N){
        int A;
        cin >> A;
        rep(j, A){
            int c,d;
            cin >> c >> d;
            if(d == 1){
                whoIsHonest[i].push_back(c - 1);
            } else {
                whoIsUnkind[i].push_back(c - 1);
            }
        }
    }

    ans = 0;
    for(int i = (1 << N) - 1; i > 0; i--){
        bool canBeAnswer = true;
        bitset<15> bit(i);
        rep(j, N){
            bool isReasonable = true;
            if(bit.test(j)){
                for(int x: whoIsHonest[j]){
                    if(!bit.test(x)){
                        isReasonable = false;
                        break;
                    }
                }
                for(int x: whoIsUnkind[j]){
                    if(bit.test(x)){
                        isReasonable = false;
                    }
                }
                if(!isReasonable) {
                    canBeAnswer = false;
                    break;
                }
            }
        }
        if(canBeAnswer){
            int cnt = 0;
            rep(j, N){
                if(bit.test(j)) cnt++;
            }
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;
    return 0;
}
