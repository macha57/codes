#pragma once
#include <iostream>

#define NUM int
#define RUN_CODE int main()
#define DECIMAL float
#define macha std
#define SENT string
#define DEBUG 1
#if DEBUG
	#define GET(x) std::cout << x << std::endl;
#else
	#define GET(x);
#endif

class pointer
{
public:
	void get_ref_ptr(NUM num___,NUM i)
	{
		char* buffer = new char[num___];
		memset(buffer, i, num___);
	}
};

pointer av;
pointer* get_charPtr = &av;

class vector
{
private:
	DECIMAL x;
	DECIMAL y;
	macha::SENT point;
	DECIMAL h;
	DECIMAL p;
	DECIMAL b_base;

public:
	void get_axis(DECIMAL a, DECIMAL b)
	{
		#include <math.h>
		x = a;
		y = b;

		p = x;
		b_base = y;
		
		DECIMAL hyp = h;
		hyp = p * p + b_base * b_base;
		DECIMAL sqrt__ = sqrt(hyp);
		GET(sqrt__);
	}
};

vector vtc;
vector* get_spCpx_mesh = &vtc;