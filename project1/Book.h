#pragma once
#include"Publication.h"

class Book:public Publication
{
	std::string *author;
	int countPage;
	int authorCount;
public:
	void SetCountPage(int count);
	int GetCountPage() const;
	void SetAuthor(std::string &author);
	std::string *GetAuthor()const;
	void Print(std::ostream& os)const override;
	Book& operator= (const Book &other);
	Book() :Publication(), countPage(0), authorCount(1) { this->author = new std::string[1]; this->author[0] = ""; };
	Book(const Book& other) : Publication(other), countPage(other.countPage),authorCount(other.authorCount)
	{
		this->author = new std::string[this->authorCount];
		for (int i = 0; i < other.authorCount; i++)
		{
			this->author[i] = other.author[i];
		}
	};
	Book(std::string& author, int countPage) : Publication(year, name), countPage(countPage), authorCount(1) { this->author[0] = author; };
	~Book() { delete[]this->author; }
};

