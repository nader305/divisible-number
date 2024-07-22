#include<iostream>
using namespace std;
bool checkNum(int num, int divisor) {
	if (num % divisor == 0) {
		return true;
		}
	return false;
	}
 int main() {
	int number, divisor;
	cout << "Enter your number\n";
	cin >> number;
	cout << "Enter divisor\n";
	cin >> divisor;
	cout << "=============\n";
	if (checkNum(number, divisor))
		cout << number << " is divisible by " << divisor << " and result is " << number / divisor << endl;
	else

		cout << number << " is not divisible by " << divisor << " and reminder is " << number % divisor << endl;

		return 0;
}