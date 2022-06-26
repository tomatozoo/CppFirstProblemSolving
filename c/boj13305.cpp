#include <iostream>
#include <algorithm>

#define MAX 1000000000
long long dist[100001];
long long price[100001];
long long N, sum;
long long greedy;

int bojmain13305() {
	// ������ ����
	std::cin >> N;
	// ���ø� �����ϴ� ������ ����
	for (int i = 1; i <= N - 1; i++) {
		std::cin >> dist[i];
	}
	// �������� ���ʹ� ����
	for (int i = 1; i <= N; i++) {
		std::cin >> price[i];
	}
	// ���� ���ÿ��� ������ ���÷� ���� �ּ� ���

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