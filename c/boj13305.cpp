#include <iostream>
#include <algorithm>

#define MAX 1000000000
long long dist[100001];
long long price[100001];
long long N, sum;
long long greedy;

int bojmain13305() {
	// 도시의 개수
	std::cin >> N;
	// 도시를 연결하는 도로의 길이
	for (int i = 1; i <= N - 1; i++) {
		std::cin >> dist[i];
	}
	// 주유소의 리터당 가격
	for (int i = 1; i <= N; i++) {
		std::cin >> price[i];
	}
	// 왼쪽 도시에서 오른쪽 도시로 가는 최소 비용

	greedy = MAX;
	for (int i = 1; i <= N - 1; i++) {
		if (price[i] < greedy) {
			greedy = price[i];
		}
		sum += greedy * dist[i];
	}
	std::cout << sum;
	return 0;
}