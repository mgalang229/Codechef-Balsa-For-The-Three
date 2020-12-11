#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

bool chk(int n) {
	int cnt=0;
	while(n) {
		if(n%10==3)
			cnt++;
		n/=10;
	}
	return cnt>=3;
}

void solve() {
	int n;
	cin >> n;
	for(int i=1; i<=1000;++i)
		if(chk(n+i)) {
			cout << n+i << "\n";
			return;
		}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
