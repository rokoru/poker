#include <iostream>
#include <vector>
#include <map>

int main()
{
	std::vector<int> a;

	int n=5;
	int s;
	
	for (int i = 0; i < n; ++i) {
		std::cin >> s;
		a.push_back(s);
	}

	if (a[0] == a[1] == a[2] == a[3] == a[4]) {
		std::cout << "impossible";
	}

	std::map<int, int> combinations;

	for (auto x = a.begin(); x != a.end(); ++x) {
		auto y = combinations.find(*x);
		if (y == combinations.end()) {
			combinations.insert(std::make_pair(*x, 1));
		}
		else {
			++(y->second);
		}
	}

	for (auto it = combinations.begin(); it != combinations.end(); ++it) {
		std::cout << it->first << ' ' << it->second << std::endl;
	}

	//for (auto it = combinations.begin(); it != combinations.end(); ++it) {
	//	if (it->second == 2) {
	//		std::cout << "two pairs";
	//	}
	//}


	//else {
	//	std::cout << "nothing";
	//}
}
