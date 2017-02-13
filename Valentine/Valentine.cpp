// Valentine.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cout << "Hey! Wanna play the \"lubit - ne lubit\" game? Ye, i know, you want.\n Enter the number of lepestki: ";
	cin >> n;
	string tmp;
	tmp = n;
	for (;;) {
		if (getline(cin, tmp)) {
			cout << "Lubit\nAnd again: ";
		}
	}
    return 0;
}

