#include <iostream>
#include <windows.h>
#include "Vector.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "������ ������� �������� �������: "; cin >> n;
    Vector a(n), b(n), t(n);
    cin >> a;
    cin >> b;
    cout << a;
    cout << b;

    t = Subtract(a, b, n);
    cout << "(a - b) = " << endl;
    cout << t;

    if (Compare(a, b, n))
        cout << "������� ���" << endl;
    else
        cout << "������� �� ���" << endl;

    cout << "����� ������� ������� ������� = " << a.NormOfVector(n) << endl;
    cout << "����� ������� ������� ������� = " << b.NormOfVector(n) << endl;
}