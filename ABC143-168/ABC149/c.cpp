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

bool isPrimary(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int X;
    cin >> X;

    int num;
    num = X;
    
    while(1){
        if(isPrimary(num)){
            cout << num << endl;
            return 0;
        }
        num++;
    }

    return 0;
}
