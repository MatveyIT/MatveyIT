//lizogub mMatve
#include <iostream>
using namespace std;
int main() {
	/*Boolean16◦
. Дано целое положительное число. Проверить истинность высказывания: «Данное число является четным двузначным».
	int a;
	bool res;
	cin >> a;
		res = (a % 2 == 0 && a > 9 && a < 100);
		cout << boolalpha << res << endl;
		*/
	/*Boolean17◦. Дано целое положительное число. Проверить истинность высказывания: «Данное число является нечетным трехзначным»
	int a;
	bool res;
	cin >> a;
	res = (a % 2 != 0 && a > 99 && a < 1000);
	cout << boolalpha << res << endl;
	*/
	/*Boolean21◦. Дано трехзначное число. Проверить истинность высказывания:«Цифры данного числа образуют возрастающую последовательность».
	int a;
	bool res;
	cin >> a;
	res = (((a / 100) < (a % 100 / 10)) & ((a % 100 / 10) < (a % 10)));
	cout << boolalpha << res << endl;
	*/
	/*Boolean25◦. Даны числа x, y. Проверить истинность высказывания: «Точка скоординатами (x, y) лежит во второй координатной четверти».
*/
	int x, y;
	bool res;
	cin >> x, y;
	res = (x < 0 && y > 0);
	cout << boolalpha << res << endl;

	return 0;
}