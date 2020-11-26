/* 
Дано натуральное число n > 1. Проверьте, является ли оно простым. Программа должна вывести слово YES, если число простое и NO, если число составное.
Решение оформите в виде функции IsPrime(n), которая возвращает True для простых чисел и False для составных чисел. Количество операций в программе должно быть пропорционально корню из n.
Формат входных данных
Вводится натуральное число.
Формат выходных данных
Выведите ответ на задачу. */


#include <iostream>
#include <cmath>
using namespace std;

bool MinDivisor(int n) {
	int i;
	i = 2;
	while (i <= sqrt(n)) {
		if (n % i == 0) {
			return true;
		}
		i++;
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	if (MinDivisor (n) == true) {
		cout << "NO";
	}
	else {
		cout << "YES";
	}

	return 0;
}
