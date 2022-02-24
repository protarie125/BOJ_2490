#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	for (int i = 0; i < 3; ++i) {
		auto sum = int{ 0 };
		for (int j = 0; j < 4; ++j) {
			int x;
			cin >> x;
			if (0 == x) {
				sum += 1;
			}
		}

		switch (sum)
		{
		case 0:
			cout << "E"; break;
		case 1:
			cout << "A"; break;
		case 2:
			cout << "B"; break;
		case 3:
			cout << "C"; break;
		case 4:
			cout << "D"; break;
		}
		cout << '\n';
	}

	return 0;
}