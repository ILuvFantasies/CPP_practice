#include "algorhythms.h"
#include <iostream>

using namespace std;

#define MAX_TITLE_LEN 50

//print foo when index is divisible by two
//print bar when index is divisible by five
//print both when both are met
bool FooBarApp(int counter)
{
	if (counter <= 0) //checks input data and guarantees the app working properly
		return false;

	for (int index = 0; index < counter; index++)
	{
		bool check = false;
		if (index % 2 == 0)
			cout << "foo";
		//else
		//	check = true;
		if (index % 5 == 0)
			cout << "bar";
		//else
		//	check = true;

		//if(!check)
		cout << " " << index << endl;
	}

	cout << "here comes the while loop " << endl;
	int index = 0;
	while (index < counter)
	{
		if (index % 2 == 0)
			cout << "foo";
		if (index % 5 == 0)
			cout << "bar";

		index++; //don't forget to update the index
	}

	cout << "do while loop: " << endl;

	index = 0;
	do
	{
		if (index % 2 == 0)
			cout << "foo";
		if (index % 5 == 0)
			cout << "bar";

		index++;
	} while (index < counter);

	return true;
}

bool JumpConditions()
{
	int counter = 25;

	for (int i = 0; i < counter; i++)
	{
		if (i == 24)
		{
			cout << LogLevel::ERROR;
			return false;
		}

		if (i % 23 == 0 && i > 10) //will stop the for loop and exit it
			break;

		if (i % 3 == 0) //will hop to the next iteration when this condition is true
		{
			cout << LogLevel::WARNING;
			continue;
		}
		if (i % 2 == 0)
			cout << i;

	}

	cout << "for loop executed succesfully ";

	return true;
}

bool workingWithStructs()
{
	Books myBook;
	myBook.authorName = "Jules Verne";
	setBookName(myBook, "Calatorie spre centrul pamantului");
	//myBook.title = "Calatorie spre centrul pamantului";
	myBook.bookID = 51;

	return true;
}

void setBookName(Books& book, string name)
{
	book.title[50] = NULL;
	strncpy_s(book.title, name.c_str(), MAX_TITLE_LEN);
}