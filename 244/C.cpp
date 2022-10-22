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
bool chmax(T &a, const T &b)
{  if (a < b)
  {
    a = b;
    return true;
  }
  return false;
}
template <typename T>
bool chmin(T &a, const T &b)
{
  if (a > b)
  {
    a = b;
    return true;
  }
  return false;
}

int main()
{
  int N;
  cin >> N;
  vector<bool> nums(2 * N + 1, false);
  int cnt = 2 * N + 1;
  while (cnt > 0)
  {
    repp(i, 1, 2 * N + 1)
    {
      if (!nums[i])
      {
        nums[i] = true;
        cout << i << endl;
        cout << flush;
        cnt--;
        break;
      }
    }
    int aoki;    cin >> aoki;
    if (aoki == 0)
      return 0;
    nums[aoki] = true;
    cnt--;
  }
  return 0;
}