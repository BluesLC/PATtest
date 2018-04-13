#include<iostream>
#include<string>
#include<deque>

using namespace::std;

int main() {
	deque<string> aptline;
	string line;
	getline(cin,line);
	auto b = line.begin(), e = line.end();
	e = b;
	for (; *e != '\0';) {
		for ( ; *e != ' '|| *e != '\0';++e) {}			
		string temp(b, e);
		aptline.push_front(temp);
		++e;
		b = e;
	}
	auto a = aptline.begin(),c = aptline.end();
	for (; a != c; ++a)
		cout << *a << ' ';
	return 0;

}

/*
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<string> v;
	string str;
	getline(cin,str);
	string tmp="";
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='\n')
			break;
		if(str[i]!=' ')
			tmp += str[i];
		else
		{
			v.push_back(tmp);
			tmp="";
		}
	}
	v.push_back(tmp); //因为最后一个数后面没有空格。
	for(int j=v.size()-1;j>=0;j--)
	{
		if(j!=0)
			cout<<v[j]<<" ";
		else
			cout<<v[j];
	}
	system("pause");
	return 0;
}
*/