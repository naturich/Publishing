#pragma once
#include "Publication.h"
#include<string>
class Newspaper : public Publication
{
	std::string color;
	std::string size;
public:
	Newspaper() :Publication(), color(""), size("") {};
	Newspaper(std::string color, std::string& size) : Publication(year, name), color(color), size(size) {};
	Newspaper(Newspaper& other) : Publication(other), color(other.color), size(other.size) {};
	void SetSize(std::string&Size);
	std::string GetSize()const;
	void SetColor( std::string&color);
	std::string GetColor() const;
	void Print(std::ostream& os)const override;
	Newspaper& operator= (const Newspaper& other);
};