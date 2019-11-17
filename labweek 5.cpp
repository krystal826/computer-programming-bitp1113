// labweek 5.cpp : using some library functions and more
//Your task: using selection control structure
// ask the user to enter positive value for x and z
//Author : Yoong Cheng Nee

#include "stdafx.h"
#include<string>
#include<iostream>
using namespace std;
int x, z;

int main()
{
	string name;
	cout << "Please enter your name: ";
	getline(cin, name);

	cout << "Please enter positive value for x: ";
	cin >> x;
	if (x > 0)
		cout << "x= " << x << endl;

	cout << "Please enter positive value for z: ";
	cin >> z;
	if (z > 0)
		cout <<"z= "<< z << endl;

	return 0;
}
