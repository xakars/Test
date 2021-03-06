/*

Выведите все исходные точки в порядке возрастания их расстояний от начала координат. 

Входные данные

Программа получает на вход набор точек на плоскости. Сначала задано количество точек n, затем идет последовательность из n строк, каждая из которых содержит два числа: координаты точки. Величина n не превосходит 100, все исходные координаты – целые числа, не превосходящие 103.

Выходные данные

Необходимо вывести все исходные точки в порядке возрастания их расстояний от начала координат.

Sample Input:

2
1 2
2 3

Sample Output:

1 2
2 3

 */

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool cmp(pair <int, int> a, pair <int, int> b) {

	return (a.first*a.first + a.second*a.second) < (b.first*b.first + b.second*b.second);
	}


int main() {
	int n;
	cin >> n;
	vector <pair <int, int>> a(n);

	//номер, балл
	for (int i = 0; i<n; i++) {
		cin >> a[i].first >> a[i].second;
	}

	sort(a.begin(), a.end(), cmp);

	for (auto now : a) {
		cout << now.first << " " << now.second << endl;
	}
	return 0;
}
