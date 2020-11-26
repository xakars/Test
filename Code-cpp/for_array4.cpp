/*

Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.

Формат входных данных
В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.

Sample Input 1:

5
0 1 2 3 4

Sample Output 1:

1

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> a;
    //считывание
    for(int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    if((temp % 2) != 0 and temp != 0) {
        a.push_back(temp);
        }
    }
    if(a.size() == 0) {
        cout << "0";
        return 0;
    }
    //обработка
    int num_min = 0;
    for(int i = 0; i < a.size(); i++) {
           if(a[i] < a[num_min]) {
            num_min = i;
           }
           } cout << a[num_min];

    return 0;
}

