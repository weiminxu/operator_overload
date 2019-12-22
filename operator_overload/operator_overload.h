#ifndef OPERATOR_OVERLOAD_H
#define OPERATOR_OVERLOAD_H
#include <iostream>
using namespace std;

class operator_overload
{
private:
	int v;

public:
	//constructor
	operator_overload():v(0){}
	operator_overload(const int &a) :v(a) {}
	operator_overload(const operator_overload &t) :v(t.v) {}

	//operator overload >>
	friend inline istream &operator >> (istream &is, operator_overload &t)
	{
		std::cin >> t.v;
		return is;
	}

	//operator overload <<
	friend inline ostream& operator << (ostream& os, operator_overload& t1)
	{
		std::cout << t1.v;
		return os;
	}
	
	//operator overload <
	bool operator < (const operator_overload &t2) const
	{
		return (v < t2.v);
	}

	//operator overload >
	bool operator > (const operator_overload &t3) const
	{
		return (v > t3.v);
	}

	//the object is object
	bool operator == (const operator_overload &t4) const
	{
		return (v == t4.v);
	}

	//the object is int
	bool operator == (const int &t5) const
	{
		return (v == t5);
	}

	//operator overload +
	//the object is int
	operator_overload operator + (const int& a)
	{
		operator_overload oo;
		oo.v = v + a;
		return oo;
	}

	//the object is object
	operator_overload operator + (const operator_overload &b)
	{
		operator_overload oo1;
		oo1.v = v + b.v;

		return oo1;
	}

	//operator overload +=
	// object + object
	operator_overload &operator += (const operator_overload &c)
	{
		v += c.v;
		return *this;
	}

	//object + int
	operator_overload& operator += (const int& d)
	{
		v += d;
		return *this;
	}
};

#endif // !OPERATOR_H

