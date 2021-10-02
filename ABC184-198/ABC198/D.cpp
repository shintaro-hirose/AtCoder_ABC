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
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9 + 10)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    string S1, S2, S3;
    cin >> S1 >> S2 >> S3;
    set<char> st;
    vs Ss = {S1, S2, S3};
    rep(i, 3) {
        rep(j, Ss[i].size()) { st.insert(Ss[i][j]); }
    }
    if(st.size() > 10) {
        cout << "UNSOLVABLE" << endl;
        return 0;
    }

    vi ref(10);
    rep(i, 10) ref[i] = i;

    string chars = "";
    for(char c : st) {
        chars += c;
    }

    do {
        vs NSs = {S1, S2, S3};

        rep(i, chars.size()) {
            rep(j, 3) {
                string T = NSs[j];
                rep(k, NSs[j].size()) {
                    if(NSs[j][k] == chars[i])
                        NSs[j][k] = char('0' + ref[i]);
                }
            }
        }
        if(NSs[0][0] != '0' && NSs[1][0] != '0' && NSs[2][0] != '0') {

            int num1, num2, num3;
            num1 = stoi(NSs[0]);
            num2 = stoi(NSs[1]);
            num3 = stoi(NSs[2]);
            if(num1 + num2 == num3) {
                cout << num1 << endl;
                cout << num2 << endl;
                cout << num3 << endl;
                return 0;
            }
        }
    } while(next_permutation(ref.begin(), ref.end()));

    cout << "UNSOLVABLE" << endl;
    return 0;
}