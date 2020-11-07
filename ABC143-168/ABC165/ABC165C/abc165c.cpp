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
    int N, M, Q;
    ll ans;
    cin >> N >> M >> Q;
    vector<vector<int>> data(Q, vector<int>(4));
    rep(i, Q){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        data[i] = {a,b,c,d};
    }

    vector<int> array;
    rep(i, M){
        array.push_back(0);
    }
    rep(i, N){
        array.push_back(1);
    }
    
    ans = 0;
    
    do{
        ll sum = 0;
        if(array[0] == 1) continue;
        int curref,temp0Sum;
        curref = 0;
        temp0Sum = 0;
        vector<int> perm(N);
        rep(i, N + M){
            if(array[i] == 1){
                perm[curref] = temp0Sum;
                curref++;
            } else {
                temp0Sum++;
            }
        }
        rep(i, Q){
            if(perm[data[i][1] - 1] - perm[data[i][0] - 1] == data[i][2]){
                sum += (ll)data[i][3];
            }
        }
        ans = max(ans, sum);
        
    }while(next_permutation(array.begin(), array.end()));

    cout << ans << endl;
    return 0;
}
