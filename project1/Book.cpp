#pragma once
#include "Book.h"

void Book::SetCountPage(int count)
{
	if (count >= 0) { this->countPage = count; }
	else 
	{
		this->countPage = count; 
		throw std::logic_error("countPage can't be negative");
	}
}

int Book::GetCountPage() const { return this->countPage; }

void Book::SetAuthor(std::string& author)
{
	++(this->authorCount);
	std::string* authorsnew = new std::string[authorCount];
	for (int i = 0; i < authorCount - 2; i++)
	{
		authorsnew[i] = this->author[i];
	};
	authorsnew[authorCount - 1] = author;
	delete[]this->author;
	this->author = authorsnew;
}



std::string *Book::GetAuthor() const { return this->author; }

void Book::Print(std::ostream& os) const
{
	os << "Name: " << this->name << "\tYear: " << this->year<<"\tAuthor: " << this->author << "\tCountPage: " << this->countPage << std::endl;
}

Book& Book::operator=(const Book& other)
{
	this->author = author;
	this->name = name;
	this->countPage = other.countPage;
	this->year = other.year;
	return *this;
}






