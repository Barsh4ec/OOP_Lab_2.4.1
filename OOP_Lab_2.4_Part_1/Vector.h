#pragma once
#include <sstream>
#include <string>
using namespace std;

class Vector
{
	int size;
	int* m;
public:
	Vector(int);
	Vector(int, int);
	Vector(const Vector&);
	~Vector();

	Vector& operator = (const Vector& a);
	operator string () const;

	int& operator [] (const int i);
	const int& operator [] (const int i) const;

	friend ostream& operator << (ostream& out, const Vector& a);
	friend istream& operator >> (istream& in, Vector& a);

	friend Vector Subtract(Vector, Vector, int);
	friend bool Compare(Vector, Vector, int);
	double NormOfVector(int);
};

