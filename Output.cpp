#include "Output.h"
#include "Solution.h"
#include "Check.h"
#include <iostream>

using namespace std;

void Output::setOutput(int test, string s, bool expected){
	setTest(test);
	setS(s);
	setExpected(expected);
}

void Output::printBool(bool value){
	(value) ? cout << "true" : cout << "false";
}

void Output::printCheck(){
	Check check;
	(check.check(_result, _expected)) ? cout << " Тест пройден" : cout << " Тест провален!";
}

void Output::printSolution(){
	cout << "============ Тест № " << _test << " ============" << endl;
	cout << " Входная строка: \"" << _s << "\"" << endl;
	cout << " Ожидаемый оезультат: ";
	printBool(_expected);
	cout << endl;
	setResult();
	cout << " Полученный результат: ";
	printBool(_result);
	cout << endl;
	cout << "============ Проверка ============" << endl;
	printCheck();
	cout << endl;
	cout << "==================================\n" << endl;
}

void Output::setTest(int test){
	_test = test;
}

void Output::setS(string s){
	_s = s;
}

void Output::setExpected(bool expected){
	_expected = expected;
}

void Output::setResult(){
	Solution solution;
	_result = solution.isValid(_s);
}
