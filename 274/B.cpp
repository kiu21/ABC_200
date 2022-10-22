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
    int H,W; cin>>H>>W;
    vector<vector<char>> C(H,vector<char>(W));

    vector<int> X(W,0);
    rep(i,H){
        rep(j,W){
            char c; cin>>c;
            if(c=='#') X[j]++;
        }
    }
    rep(i,W) cout<<X[i]<<' ';
    cout<<endl;
    return 0;
}