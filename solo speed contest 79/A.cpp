#include <bits/stdc++.h>
using namespace std;

// #define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)

void solve(int t){
     int n,m,k;
     cin >> n >> m >> k;

     if(m*k >= n) cout << "YES\n";
     else         cout << "NO\n";
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

