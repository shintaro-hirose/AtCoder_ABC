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
    int N; cin >> N;
    bool ok = true;
    string ans = "";
    unordered_map<string, int> A; // !
    unordered_map<string, int> B;
    rep(i, N){
        string S; cin >> S;
        if(S[0] == '!'){
            if(B[S] == 1){
                ok = false;
                ans = S.substr(1, S.size()-1);
            }
            else A[S]++;
        }
        else {
            if(A["!" + S] == 1){
                ok = false;
                ans = S;
            }
            else B["!" + S]++;
        }
    }
    if(ok)ans = "satisfiable";
    cout << ans << endl;
    return 0;
}