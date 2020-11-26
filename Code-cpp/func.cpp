/*
Даны пять действительных чисел: x, y, xc, yc, r. Проверьте, принадлежит ли точка (x, y) кругу с центром (xc, yc) и радиусом r. Если точка принадлежит кругу, выведите слово YES, иначе выведите слово NO.
Решение должно содержать функцию IsPointInCircle(x, y, xc, yc, r), возвращающую True, если точка принадлежит кругу и False, если не принадлежит. Основная программа должна считать координаты точки, вызвать функцию IsPointInCircle и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
Функция IsPointInCircle не должна содержать инструкцию if.
Формат входных данных
Вводятся пять действительных чисел.
Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:

0.5
0.5
0
0
1

Sample Output 1:

YES */

#include <iostream>
#include <math.h>
using namespace std;
bool IsPointInCircle(double x, double y, double xc, double yc, double r) {
	double x0 = x - xc;
	double y0 = y - yc;
	return r >= sqrt(x0*x0 + y0*y0);
}
int main() {

	double x1, y1, xc1, yc1, r1;
	cin >> x1 >> y1 >> xc1 >> yc1 >> r1;
	if (IsPointInCircle(x1, y1, xc1, yc1, r1) == true) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
