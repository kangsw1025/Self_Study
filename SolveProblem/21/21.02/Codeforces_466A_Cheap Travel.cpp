#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, a, b, ans = 0; // n ž�� Ƚ�� b mȸ ž�º� a 1ȸ ž�º�
	cin >> n >> m >> a >> b;

	if (a * m <= b) ans = a * n;
	else if (a * m > b) {
		if (a * (n % m) > b) ans = (n / m + 1) * b;
		else ans = n / m * b + (n % m) * a;
	}
	cout << ans;
	return 0;
}