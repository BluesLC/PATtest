#include<cstdlib>
#include<iostream>
using std::cin; using std::cout;
using std::endl;

int caixiang(int n) {
	int i;
	for (i = 0; n != 1; ++i) {
		if (n & 1 == 1)
			n = (3 * n + 1) / 2;
		else
			n = n / 2;
	}
	return i;
}

int main() {
	int n;
	cout << "please input a natural number"<<endl;
	cin >> n;
	cout << caixiang(n);
	return 0;

}