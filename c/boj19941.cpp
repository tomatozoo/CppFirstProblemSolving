#include <iostream>
#include <string>

int bojmain19941() {
	std::string arr;
	int n, k, cnt = 0, sw;
	std::cin >> n >> k;
	std::cin >> arr;

	for (int i = 0; i < n; i++) {
		if (arr[i] != 'P') continue;
		for (int j = i - k; j <= i + k; j++) {
			if (0 <= j && j < n && arr[j] == 'H') {
				arr[j] = '-';
				cnt++;
				break;
			}
		}
	}
	std::cout << cnt;
	return 0;
}