#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector(int n)
	: size(n)
{
	m = new int[size];
	for (int i = 0; i < size; i++)
		m[i] = 0;
}
Vector::Vector(int n, int a)
	: size(n)
{
	m = new int[size];
	for (int i = 0; i < size; i++)
		m[i] = a;
}
Vector::Vector(const Vector& a)
	: size(a.size)
{
	m = new int[size];
	for (int i = 0; i < size; i++)
		m[i] = a.m[i];
}
Vector::~Vector()
{
	delete[] m;
}
Vector& Vector::operator = (const Vector& a) {
	if (&a == this) return *this;
	size = a.size;
	delete[] m;
	m = new int[size];
	for (int i = 0; i < size; i++)
		m[i] = a.m[i];
	return *this;
}
int& Vector::operator [] (const int i)
{
	return m[i];
}
const int& Vector::operator [] (const int i) const
{
	return m[i];
}
ostream& operator << (ostream& out, const Vector& a)
{
	out << string(a);
	out << endl;
	return out;
}
istream& operator >> (istream& in, Vector& a)
{
	for (int i = 0; i < a.size; i++)
	{
		cout << "array[ " << i + 1 << " ] = "; in >> a[i];
	}
	cout << endl;
	return in;
}
Vector::operator string () const
{
	stringstream ss;
	ss << "array[" << size << "] = ( ";
	for (int i = 0; i < size; i++)
		ss << m[i] << ", ";
	ss << ")" << endl;
	return ss.str();
}
Vector Subtract(Vector l, Vector r, int n) {
	Vector t(n);
	for (int i = 0; i < n; i++)
	{
		t[i] = l[i] - r[i];
	}
	return t;
}
bool Compare(Vector l, Vector r, int n) {
	for (int i = 0; i < n; i++)
	{
		if (l[i] != r[i])
			return false;
	}
	return true;
}
double Vector::NormOfVector(int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (m[i] * m[i]);
	}
	return sqrt(sum);
}