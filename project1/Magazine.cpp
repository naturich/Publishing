#pragma once
#include "Magazine.h"



void Magazine::SetNumber(int number)
{
	if (number >= 0) { this->number = number; }
	else 
	{ 
		this->number = 0;
		throw std::logic_error("number can't be negative");
	}
}

int Magazine::GetNumber() const{return this->number;}

void Magazine::Print(std::ostream& os)const
{
	os << "Year: " << this->year << "\tName: " << this->name << "\tNumber: " << this->number << std::endl;
}




Magazine& Magazine::operator=(const Magazine& other)
{
	this->name = other.name;
	this->number = other.number;
	this->year = other.year;
	return *this;
}
