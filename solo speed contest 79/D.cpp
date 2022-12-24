#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = a ; i < b ; i++)
#define int long long int

const int N = 1e9 + 7;
vector<int> ans;

void solve(int t){
     int n ;
     cin >> n;
     cout << ans[n-1] << "\n";
}

int32_t main()
{
     int answer = 1;
     ans.push_back(1);
     rep(i,2,1e6 + 7){
          answer = answer + i + (answer*i); 
          answer %= N;
          ans.push_back(answer);
     }

     int t = 1;
     cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}

