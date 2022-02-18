#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	auto scores = vi(n, -1);
	for (int i = 0; i < n; ++i) {
		cin >> scores[i];
	}

	auto kth = scores[k - 1];
	auto count = int{ 0 };
	if (0 == kth) {
		for (const auto& x : scores) {
			if (0 < x) {
			count += 1;
			}
		}
	} else {
		for (const auto& x : scores) {
			if (kth <= x) {
			count += 1;
			}
		}
	}

	cout << count;

	return 0;
}