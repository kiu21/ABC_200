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
  int n;cin>>n;
  vector<int> a(n);
  rep(i,n) cin>>a[i];

  int ans=0;
  int sum=0;
  rep(i,n){
    sum+=a[n-i-1];
    if(sum>3){
      ans=n-i;
      cout<<ans<<endl;
      return 0;
    } 
  }
  cout<<ans<<endl;
  return 0;
}