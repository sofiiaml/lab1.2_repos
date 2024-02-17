//Book.h
#pragma once
#include <iostream>

using namespace std;

class Book {
private:
	string author;
	string name;
	string publish;
	int year;
public:
	string getAuthor() const { return author; }
	string getName() const { return name; }
	string getPublish() const { return publish; }
	int getYear() const { return year; }

	void setAuthor(string);
	void setName(string);
	void setPublish(string);
	void setYear(int);

	bool Init(string author, string name, string publish, int yaer);
	void Read();
	void Display() const;
	bool Search(string searchTerm);
};
