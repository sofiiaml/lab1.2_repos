//Book.cpp
#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

void Book::setAuthor(string a) {
	author = a;
}
void Book::setName(string n)
{
	name = n;
}
void Book::setPublish(string p) {
	publish = p;
}
void Book::setYear(int y)
{
	year = y;
}
bool Book::Init(string author, string name, string publish, int year)
{
	if (!author.empty() && !name.empty() && !publish.empty() && year > 0) {
		this->author = author;
		this->name = name;
		this->publish = publish;
		this->year = year;return true;
	}
	else {
		cout << "Invalid arguments provided for initialization." << endl;
		return false;
	}
}
bool Book::Search(string searchTerm) {
	return (author.find(searchTerm) != string::npos || name.find(searchTerm) != string::npos ||publish.find(searchTerm) != string::npos ||
		to_string(year).find(searchTerm) != string::npos);
}
void Book::Read()
{
	string author;
	string name;
	string publish;
	int year;

	cout << " author = "; cin >> author;
	do
	{
		cout << " name = "; cin >> name;
		cout << " publish = "; cin >> publish;
		cout << " year = "; cin >> year;
	} while (!Init(author,name, publish, year));
}
void Book::Display() const
{
	cout << " author = " << author << endl;
	cout << " name = " << name << endl;
	cout << " publish = " << publish << endl;
	cout << "year = " << year << endl;
}