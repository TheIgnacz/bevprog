#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

int main()
{
	//1.
	string userName;
	cin >> userName;
	cout << "Hello, " << userName << endl;

	string writeTo;
	cout << "Enter the name of the person you want to write to." << endl;
	cin >> writeTo;
	cout << "Dear " << writeTo << "," << endl;

	//2.
	cout << "How are you? I am fine. I miss you." << endl;

	//3.
	string friendName;
	cin >> friendName;

	//4.
	char friendSex = '0';
	while (friendSex != 'm' && friendSex != 'f') {
		cin >> friendSex;
	}

	if (friendSex == 'm') {
		cout << "If you see " << friendName << " please ask him to call me." << endl;
	}
	else {
		cout << "If you see " << friendName << " please ask her to call me." << endl;
	}

	//5.
	int age;
	cin >> age;

	//6.
	switch (age) {
	case 0 ... 11: cout << "Next year you will be " << age + 1 << endl; break;
	case 17: cout << "Next year you will be able to vote." << endl; break;
	case 18 ... 69: cout << ""; break;
	case 70 ... 110: cout << "I hope you are enjoying retirement." << endl; break;
	default: simple_error("you're kidding!"); break;

	}

	//7.
	cout << "Your sincerely,\n\n" << userName;

	return 0;
}