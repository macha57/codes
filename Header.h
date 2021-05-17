#pragma once
#include <iostream>

#define NUM int
#define RUN_CODE int main()
#define DECIMAL float
#define SENT std::string
#define DEBUG 1
#if DEBUG
	#define GET(x) std::cout << x << std::endl;
#else
	#define GET(x);
#endif

class constructer
{
private:
	SENT school;
	SENT addr;
	NUM noOfstudents;
public:

	constructer()
	{
		GET("SET");
	}

	void setData(SENT a, SENT b,NUM c)
	{
		school = a;
		addr = b;
		noOfstudents = c;

	}

	void displayData()
	{
		GET(school);
		GET(addr);
		GET(noOfstudents);
	}
};