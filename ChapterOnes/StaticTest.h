#pragma once

class StaticTest
{
public:
	int a = 0;
	static int num;
	StaticTest& stest(int a)
	{
		static StaticTest st;
		return st; 
	}
	StaticTest()
	{
		a = 0; 
		num = 10; 
	}
};


