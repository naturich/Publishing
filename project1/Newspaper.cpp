#pragma once
#include "Newspaper.h"
#include <ostream>

void Newspaper::SetSize(std::string&Size) { this->size = Size; };
std::string Newspaper::GetSize() const { return this->size;}
void Newspaper::SetColor(std::string & color) { this->color = color; }
std::string  Newspaper::GetColor() const { return this->color; }

void Newspaper::Print(std::ostream& os) const
{
	os << "Name: " << this->name << "\tYear: " << this->year << "Color: " << this->color << "\tSize" << this->size << std::endl;
	
}

Newspaper& Newspaper::operator=(const Newspaper& other)
{
	this->color = other.color;
	this->name = other.name;
	this->size = other.size;
	this->year = other.year;
	return *this;
}
