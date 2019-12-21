#include <iostream>
#include <vector>
#include "operator_overload.h"

using namespace std;

int main()
{
	//operator_overload oo;
	operator_overload oo1(3);
	operator_overload oo2(oo1);
	//cout << oo << endl;
	//cout << oo1 << endl;
	cout << oo2 << endl;

	return 0;
}