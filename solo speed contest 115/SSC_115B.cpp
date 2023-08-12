#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T; cin >> T;
	
	while(T--){
        	string a,b; cin >> a >> b;
        	set<char> A;
        	
        	bool ok = 0;
        	for(int i = 0 ; i < a.size(); i++) A.insert(a[i]);
        	for(int i = 0 ; i < b.size(); i++) if(A.count(b[i])) ok = 1;
        	
        	cout << (ok? "Yes\n":"No\n");
	}
	return 0;
}
