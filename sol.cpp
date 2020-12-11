#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

bool chk(int n) {
	vector<int> v;
	while(n) {
		v.push_back(n%10);
		n/=10;
	}
	int cnt=0;
	for(auto x : v)
		if(x==3)
			cnt++;
	if(cnt>=3)
		return 1;
	return 0;
}

void solve() {
	int n;
	cin >> n, ++n;
	while(1) {
		if(chk(n))
			break;
		n++;
	}
	cout << n << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
