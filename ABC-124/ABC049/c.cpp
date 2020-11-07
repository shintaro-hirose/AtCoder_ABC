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
// #define debug(a) cout << "["; rep(i,a.size()) cout << a[i] << ", "; cout<<"]"<< endl;

const ll mod = 1000000007;

int main() {
    string S, ans; cin >> S;
    string t1,t2,t3,t4;
    ans = "YES";
    t1 = "dream"; t2 = "dreamer"; t3 = "erase"; t4 = "eraser";
    reverse(t1.begin(), t1.end());
    reverse(t2.begin(), t2.end());
    reverse(t3.begin(), t3.end());
    reverse(t4.begin(), t4.end());
    reverse(S.begin(), S.end());
    while(S.size() > 0){
        if(S.size() < 5){
            ans = "NO";
            break;
        } 
        else if(S.size() < 6){
            if(S.substr(0,5) == t1 || S.substr(0,5) == t3){
                S = S.substr(5);
            } else {
                ans = "NO";
                break;
            }
        }
        else {
            if(S.substr(0,6) == t2 || S.substr(0,6) == t4){
                S = S.substr(6);
            } else if(S.substr(0,5) == t1 || S.substr(0,5) == t3){
                S = S.substr(5);
            } else {
                ans = "NO";
                break;
            }
        }
    }
    cout << ans << endl;
    
    return 0;
}