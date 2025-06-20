#include <iostream>
using namespace std;

int main() {
	float n1;
	float n2;
	float n3;

	cout << "Enter three numbers:\n";
	cin >> n1 >> n2 >> n3;

	{ if (n1 >= n2 && n1 >= n3)
		cout << "\nLargest number: " << n1;
	if (n2 >= n1 && n2 >= n3)
		cout << "\nLargest number: " << n2;
	if (n3 >= n1 && n3 >= n2)
		cout << "\nLargest number: " << n3;
	}
	cout << "\n";
	return 0;
}