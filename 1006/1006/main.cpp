#include<iostream>
#include<cstring>

using namespace ::std;

void one(char& a);
void ten(char& b);
void hundred(char& c);

int main() {
	char i[4];
	cin >> i;
	if (strlen(i) == 3) {
		hundred(i[0]);
		ten(i[1]);
		one(i[2]);
	}
	else if(strlen(i) == 2){
		ten(i[0]);
		one(i[1]);
	}
	else if (strlen(i) == 1) {
		one(i[0]);
	}
	else {}
	return 0;
}

void one(char& a) {
	int i = a - '0';
	for (int temp = 1; temp != i+1; ++temp) {
		cout << temp;
	}
}

void ten(char& b) {
	int i = b - '0';
	for (; i != 0; --i) {
		cout << 'S';
	}
}

void hundred(char& c) {
	int i = c - '0';
	for (; i != 0; --i) {
		cout << 'B';
	}
}