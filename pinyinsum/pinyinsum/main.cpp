#include<iostream>
#include<iterator>
#include<string>
using namespace std;

int ssum(string &s);
int pinyinnum(int n);
string int_pinyin(int a);
int highest(int b);

int main() {
	string s;
	cin >> s;
	if (s.size() < 100) {
		pinyinnum(ssum(s));
		return 0;
	}
	else {
		return 0;
	}
	
}

int ssum(string &s) {
	int sum = 0;
	for (auto &r : s)
		sum += (r-'0');
	return sum;
}

string int_pinyin(int a) {
	string b;
	switch (a){
	case 0: b = "ling";
		break;
	case 1: b = "yi";
		break;
	case 2: b = "er";
		break;
	case 3: b = "san";
		break;
	case 4: b = "si";
		break;
	case 5: b = "wu";
		break;
	case 6: b = "liu";
		break;
	case 7: b = "qi";
		break;
	case 8: b = "ba";
		break;
	case 9: b = "jiu";
		break;
	}
	return b;
}

int pinyinnum(int n) {
	if (n / 10 != 0) {
		cout << int_pinyin(n % 10) << " ";
		return pinyinnum(n / 10);
	}
	else {
		cout << int_pinyin(n);
		return 0;
	}
}

int hightest(int b) {
	for (; b % 10 != 0; ) {
		b = b / 10;
	}
	return 0;
}