#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
string valid(string s)
{
	int cnt = 0;
	cout << s << endl;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(') {
			cnt += 1;
		}
		else {
			cnt -=1;
		}
		if (cnt < 0) return "NO";
	}
	if (cnt == 0) return "YES";
	else return "NO";
}
int main()
{
	string s;
	ifstream in("c:\\data\\rhkfgh.txt");
	int cnt = 0;
	getline(in, s);
	cnt = atoi(s.c_str());

	for (int i = 0; i < cnt; i++)
	{
		getline(in, s);
		cout<< valid(s)<<endl;
	}
	return 0;
}