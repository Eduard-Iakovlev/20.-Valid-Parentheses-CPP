#pragma once
#include <string>

using namespace std;

class Output{
public:
	Output() = default;

	void setOutput(int test, string s, bool expected);
	void printBool(bool value);
	void printCheck();
	void printSolution();

private:
	int _test;
	string _s;
	bool _expected, _result;

	void setTest(int test);
	void setS(string s);
	void setExpected(bool expectead);
	void setResult();
};

