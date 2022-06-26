#include <iostream>
#include <algorithm>

bool desc(int a, int  b) {
	return a > b;
}
int bojmain11508() {
	int n;
	int cost = 0;
	std::cin >> n;
	int* c = new int[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> c[i];
	}
	std::sort(c, c + n, desc);
	for (int j = 0; j < n; j++) {
		if (j % 3 == 2) {
			continue;
		}
		cost += c[j];
	}
	std::cout << cost << std::endl;
	return 0;
}