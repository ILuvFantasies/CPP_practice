#include "algorhythms.h"
#include <iostream>

using namespace std;

void main()
{
	workingWithStructs();

	if (JumpConditions())
		cout << "call successful " << endl;
	else cout << "error executing call " << endl;

	FooBarApp(30);

	cout << "Hello world";
}