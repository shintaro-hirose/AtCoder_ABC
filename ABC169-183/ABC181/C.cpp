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
    int N;
    cin >> N;
    vi Xs(N);
    vi Ys(N);
    rep(i, N) cin >> Xs[i] >> Ys[i];
    string ans = "No";
    rep(i, N - 2){
        for(int j = i + 1; j <= N - 2; j++){
            for(int k = j + 1; k <= N - 1;k++){
                int x1,y1,x2,y2,x3,y3;
                x1 = Xs[i];
                y1 = Ys[i];
                x2 = Xs[j];
                y2 = Ys[j];
                x3 = Xs[k];
                y3 = Ys[k];
                if(y3*(x2-x1) == (y2-y1)*x3+y1*(x2-x1)-x1*(y2-y1)){
                    ans = "Yes";
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}