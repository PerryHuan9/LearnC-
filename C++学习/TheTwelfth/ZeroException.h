#pragma once
#include <iostream>
using namespace std;

class ZeroException {
private:
	const char* message;
public:
	ZeroException():message("Error by dividing zero!!") {}

	const char* getMessage() {
		return  message;
	}


};
























