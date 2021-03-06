/*
Проверьте, принадлежит ли точка данной закрашенной области:

Рисунок:
https://stepik.org/lesson/13027/step/8?unit=4379 


Если точка принадлежит области (область включает границы), выведите слово YES, иначе выведите слово NO.
Решение должно содержать функцию IsPointInArea(x, y), возвращающую True, если точка принадлежит области и False, если не принадлежит. Основная программа должна считать координаты точки, вызвать функцию IsPointInArea и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
Функция IsPointInArea не должна содержать инструкцию if.
Формат входных данных
Вводятся два действительных числа.
Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:

-4
-4

Sample Output 1:

NO */


#include <iostream>
#include <cmath>
using namespace std;

bool IsPointInArea (double x, double y) {

	return y >= -x  && y >= 2 * x + 2 && pow((x + 1), 2) + pow((y - 1), 2) <= 4 ||
		y <= -x  && y <= 2 * x + 2 && pow((x + 1), 2) + pow((y - 1), 2) >= 4;
}


int main() {
	double x, y;
	cin >> x >> y;
	if (IsPointInArea(x, y) == true) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
