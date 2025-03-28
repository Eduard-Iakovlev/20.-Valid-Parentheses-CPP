#include <iostream>
#include <string>
#include "Output.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");

	int test = 0;
	string s;
	bool expected;

	Output output;

	test++;
	s = "()";
	expected = true;
	output.setOutput(test, s, expected);
	output.printSolution();

	test++;
	s = "()[]{}";
	expected = true;
	output.setOutput(test, s, expected);
	output.printSolution();

	test++;
	s = "(]";
	expected = false;
	output.setOutput(test, s, expected);
	output.printSolution();

	test++;
	s = "([])";
	expected = true;
	output.setOutput(test, s, expected);
	output.printSolution();

}
