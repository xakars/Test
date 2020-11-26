/*

По данной строке определите, является ли она палиндромом (то есть, читается одинаково как слева-направо, так и справа-налево).

Входные данные

На вход подается 1 строка без пробелов.

Выходные данные

Необходимо вывести yes, если строка является палиндромом, и no в противном случае.

Sample Input:

kayak

Sample Output:

yes

 */

#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;

	cin >> s;
	for (int i = 0; i < s.size(); i++) {
				if (s[i] !=  s[s.size() - 1 - i]){
					cout << "no";
					return 0;
				}

			}
	cout << "yes";
	return 0;
}
