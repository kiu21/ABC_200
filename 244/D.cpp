#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repp(i, s, n) for (int i = (s); i <= (int)(n); ++i)
using ll = long long;
using P = pair<int, int>;
const ll mod = 1000000007;
template <typename T>
bool chmax(T &a, const T& b) {if (a < b) {a = b;return true;}return false;}
template <typename T>
bool chmin(T &a, const T& b) {if (a > b) {a = b;return true;}return false;}

int main()
{
  vector<vector<int>> ST(2,vector<int>(3));
  rep(i,2){
    rep(j,3){
      char c;cin>>c;
      if(c=='R') ST[i][j]=1;
      if(c=='G') ST[i][j]=2;
      if(c=='B') ST[i][j]=3;
    }
  }
  int s1=0,s2=0,s3=0;
  rep(i,2){
    s1+=ST[i][0];
    s2+=ST[i][1];
    s3+=ST[i][2];
  }
  if(s1==s2||s2==s3||s1==s3){
    cout<<"No"<<endl;
    return 0;
  }
  cout<<"Yes"<<endl;
  return 0;
}