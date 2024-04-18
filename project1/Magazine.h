#pragma once
#include"Publication.h"
class Magazine :public Publication
{
	int number;
public:
	Magazine(int Number ) : Publication(year, name), number(Number) {};
	Magazine() : number(0) {};
	void SetNumber(int number);
	int GetNumber() const;
	void Print(std::ostream& os) const override;
	Magazine(Magazine& other) : Publication(other), number(other.number) {};
	Magazine& operator=(const Magazine& other) ;
};

