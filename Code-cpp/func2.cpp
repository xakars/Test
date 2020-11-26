/*

Дано действительное положительное число a и целоe число n.

Вычислите a^n. Решение оформите в виде рекурсивной функции power(a, n).
Формат входных данных
Вводится действительное положительное число a и целоe число n.
Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:

2
1

Sample Output 1:

2 */


#include <iostream>
#include <cmath>
using namespace std;

double rec( double a, double n) {
	if (n == 0) {
		return 1;
	}
	if (n > 0) {
		return a * rec(a, n - 1);
	}
	if (n < 0) {
		return 1 / a * rec(a, n + 1);
	}
}


int main() {
	double a, n;
	cin >> a >> n;
	cout << rec(a, n);
	return 0;
}


