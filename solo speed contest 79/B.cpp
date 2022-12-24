#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)

void solve(int t){
     int n,m,ans = 0;
     cin >> n >> m ;

     while(n){
          n /= m;
          ++ans;
     } 

     cout << ans << "\n";
}

int32_t main()
{
     int t = 1;
     cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}

