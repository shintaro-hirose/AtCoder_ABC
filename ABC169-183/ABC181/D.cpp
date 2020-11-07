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

string digToString(int n){
    string res = "";
    int d3,d2,d1;
    d3 = n / 100;
    d2 = (n % 100) / 10;
    d1 = n % 10;
    res += '0' + d3;
    res += '0' + d2;
    res += '0' + d1;
    return res;
}

int main() {
    string S;
    cin >> S;
    string ans = "No";
    int N = S.size();
    if(N >= 3){
        vi cnt(10);
        rep(i, N){
            char c = S[i];
            int num = c - '0';
            cnt[num]++;
        }
        int a = 8;
        for(int hi = 1; a < 1000;  hi++){
            a = 8 * hi;
            string cur = digToString(a);
            vi subCnt(10);
            rep(i,3){
                subCnt[cur[i] - '0']++;
            }
            bool canBeAns = true;
            rep(i,10){
                if(cnt[i] < subCnt[i]){
                    canBeAns = false;
                }
            }
            if(canBeAns) {
                cout << "Yes" << endl;
                return 0;
            }
        }
        cout << ans << endl;
    }
    else if(N == 2){
        int n1, n2;
        string ns = "";
        ns+=S[1];
        ns+=S[0];
        n1 = stoi(S);
        n2 = stoi(ns);
        if(n1%8==0 || n2%8==0){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        if(stoi(S)%8 == 0){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}