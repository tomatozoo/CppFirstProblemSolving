#include <iostream>
#include <algorithm>

const int MAX = 1000;
int N;
int person[MAX];

int bojmain11399() {
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> person[i];
	}
	std::sort(person, person + N);
	int time = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			time += person[j];
		}
	}
	std::cout << time << std::endl;
	return 0;
}