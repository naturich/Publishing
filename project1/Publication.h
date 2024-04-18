#pragma once
#include <iostream>
#include<string>
class Publication
{
public:
	Publication() : year(0), name("") {};

	std::string GetName() const { return  this->name; };
	int GetYear()const { return this->year; };
	void SetName(std::string& name) { this->name = name; };
	void SetYear(int year)
	{
		if (year >= 0) { this->year = year; }
		else 
		{
			this->year = 0; 
			throw std::logic_error("year can't be negative"); 
		}
	};
	Publication(int year, std::string& name) { SetName(name); SetYear(year); }
	virtual void Print(std::ostream& os) const =0;
	virtual ~Publication() {};

protected:
	int year;
	std::string name;
};

