#pragma once

#include <string>

enum LogLevel{INFO = 0, DEBUG, WARNING, ERROR};

bool FooBarApp(int counter);

bool JumpConditions();

struct Books
{
	char title[50];
	//std::string title;  //one way to solve unassignable value
	//char* title;
	std::string authorName;
	int bookID;
};

bool workingWithStructs();

void setBookName(Books& book, std::string name);
