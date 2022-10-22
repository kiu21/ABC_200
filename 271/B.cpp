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
    int N,Q;cin>>N>>Q;
    vector<int> L(N);
    vector<vector<int>> a(N);
    rep(i,N){
        int l;cin>>l;
        rep(j,l){
            int aa; cin>>aa;
            a[i].push_back(aa);
        }
    }
    rep(i,Q){
        int s,t; cin>>s>>t;
        cout<<a[s-1][t-1]<<endl;

    }
    return 0;
}