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
    ll N, X, M;
    cin >> N >> X >> M;
    ll pre = X;
    ll cnt = 1;
    vb seen(100010, false);
    seen[pre] = true;
    ll ans = X;
    while(1){
        pre = pre * pre % M;
        if(seen[pre]) break;
        seen[pre] = true;
        if(cnt == N)break;
        cnt++;
        ans += pre;
    }
    ll loopSum = 0;
    ll loopStart = pre;
    ll loopCnt = 1;
    vl loopMemo(100010);
    loopMemo[1] = loopStart;
    while(1){
        pre = pre * pre % M;
        loopSum += pre;
        if(pre == loopStart) break;
        loopCnt++;
        loopMemo[loopCnt] = loopMemo[loopCnt - 1] + pre;
    }

    ll loopTime, extraCnt;
    loopTime = (N - cnt) / loopCnt;
    extraCnt = (N - cnt) % loopCnt;
    ans += loopTime * loopSum + loopMemo[extraCnt];
    cout << ans << endl;

    // cout << "cnt: " << cnt << endl;
    // cout << "loopSum: " << loopSum << endl;
    // cout << "loopCnt: " << loopCnt << endl;
    // cout << "loopStart: " << loopStart << endl;
    // cout << "ans: " << ans << endl;
    // cout << "loopTime: " << loopTime << endl;
    // cout << "extraCnt: " << extraCnt << endl;
    // rep(i, loopCnt) cout << loopMemo[i] << endl;
    
    return 0;
}