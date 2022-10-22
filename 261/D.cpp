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
  int M,N; cin>>N>>M;
  vector<ll> X(N); rep(i,N) cin>>X[i];
  map<int,ll> m;
  rep(i,M){
    int c; ll y; cin>>c>>y;
    m[c]=y;
  }

  vector<vector<ll>> dp(N+1,vector<ll>(N+1,0));
  dp[0][0]=0;

  repp(i,1,N){
    repp(j,1,i){
      dp[i][j]=max(dp[i-1][0],dp[i-1][j-1]+X[i-1]);        
      
      if(m[j-1]!=0){//bonus
        dp[i][j-1]=max(dp[i][0]+m[0],dp[i][j-1]+m[j-1]);

    }
  }

  ll ans=0;
  rep(i,N)chmax(ans,dp[N][i]); 
  cout<<ans<<endl;

  return 0;
}