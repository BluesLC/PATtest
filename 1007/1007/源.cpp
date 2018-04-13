#include<iostream>
#include<cmath>

using namespace std;

bool isprimnum(int i);

bool isprimnum(int i) {
	for (int temp = 2; temp < sqrt(i)+1;++temp) {
		if (i%temp == 0) 
			return false;
	}
	return true;
}

int main() {
	int count, num;
	cin >> num;
	count = 0;
	if (num < 100000) {
		for (int i = 3; i <= num - 2;i += 2) {
			if (isprimnum(i) && isprimnum(i + 2)) 
				++count;
		}
		cout << count;
	}
	return 0;
}

