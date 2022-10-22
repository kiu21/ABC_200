#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repp(i, s, n) for (int i = (s); i <= (int)(n); ++i)
using ll = long long;
using P = pair<int, int>;
using table = vector<vector<int>>;
const ll mod = 1000000007;
template <typename T>
bool chmax(T &a, const T& b) {if (a < b) {a = b;return true;}return false;}
template <typename T>
bool chmin(T &a, const T& b) {if (a > b) {a = b;return true;}return false;}

int main()
{
    int N,X,Y; cin>>N>>X>>Y;
    vector<ll> R(11),B(11);

    int pos=N; R[pos]=1;
    while(pos>1){
        R[pos-1]+=1*R[pos];
        B[pos]+=X*R[pos];

        R[pos-1]+=1*B[pos];
        B[pos-1]+=Y*B[pos];
        pos--;
    }
    cout<<B[1]<<endl;
    return 0;
}

