#include<iostream>
using namespace std;
bool is_prime(int m) {
	if (m < 2)
		return false;
	for (int i = 2; i < m; i++ ) {
		if (m % i == 0)
			return false;
	}
	return true;
}
int main() {
	int g = 0;
	for (int j = 2; g < 200; j++) {
		if (is_prime(j) == 1) {
			cout << j << '\t';
			g++;
			if (g % 10 == 0)
				cout << endl;
		}
		
	}
	return 0;
}