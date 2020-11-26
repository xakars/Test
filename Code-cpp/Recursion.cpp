/* a^n = (a^2)^(n/2)  при четном n,

a^n = a × a^(n−1) при нечетном n.

Реализуйте алгоритм быстрого возведения в степень с помощью рекурсивной функции.
Формат входных данных
Вводятся действительное число a и целое неотрицательное число n.
Формат выходных данных
Выведите ответ на задачу. */

#include <iostream>
#include <cmath>
using namespace std;

double rec(double a, int n) {
	if (n % 2 != 0) {
		if (n == 0) {
			return 1;
		} return	a * rec(a, n - 1);
	}
	else {
		return pow(a*a, n / 2);
	}
}

int main() {

	double a, n;

	cin >> a >> n;

	cout << rec(a, n);
	return 0;
}
