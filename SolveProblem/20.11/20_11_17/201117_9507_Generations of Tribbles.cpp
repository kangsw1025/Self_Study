#include<iostream>
using namespace std;

long long dp[70];

void solve() {
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i <= 67; i++) dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	int T;
	cin >> T;
	while (T--) {
		int num;
		cin >> num;
		cout << dp[num]<<"\n";
	}
	return 0;
}