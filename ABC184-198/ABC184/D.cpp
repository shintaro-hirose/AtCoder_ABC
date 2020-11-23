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

int A, B, C;
vector<vector<vector<double>>> dp;
double f(int a,int b, int c){
    if(a==100 || b==100 || c==100)return dp[a][b][c] = 0;
    if(dp[a][b][c] != -1) return dp[a][b][c];
    double res = 0;
    res += (f(a+1,b,c) + 1) * a / (a+b+c);
    res += (f(a,b+1,c) + 1) * b / (a+b+c);
    res += (f(a,b,c+1) + 1) * c / (a+b+c);
    return dp[a][b][c] = res;
}

int main() {
    cin >> A >> B >> C;
    // dp[i][j][k]; それぞれ i,j,k 枚のときの答え
    dp = vector<vector<vector<double>>>(101, vector<vector<double>>(101, vector<double>(101, -1)));
    cout << fixed << setprecision(15) << f(A,B,C) << endl;
    return 0;
}