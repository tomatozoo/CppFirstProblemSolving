#include <iostream>
#include <algorithm>
#include <vector>
#include <string>


int bojmain1427() {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0); std::cout.tie(0);
	// input 값
	int n;
	std::cin >> n;

	// 문제 해결
	std::string str = std::to_string(n);
	std::vector<char> v;
	for (int i = 0; i < str.size(); i++) v.push_back(str[i]);
	sort(v.begin(), v.end());

	//출력
	for (int i = v.size() - 1; i >= 0; i--) std::cout << v[i];
	return 0;
}