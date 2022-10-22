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
ll mod2=998244353;

int main()
{
  int N,M,K; cin>>N>>M>>K;
  vector<vector<ll>> dp(N+1,vector<ll>(K+1,0));
  dp[0][0]=1;

  rep(i,N){
    repp(j,0,K){
      repp(k,1,M){
        if(j-k>=0)
         dp[i+1][j]+=dp[i][j-k]%mod2;
        dp[i+1][j]%=mod2;
      }
    }
  }
  ll ans=0;
  repp(i,N,K){
    ans+=dp[N][i]%mod2;
  }
  ans%=mod2;
  cout<<ans<<endl;

  return 0;
}