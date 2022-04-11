#include <iostream>
#include <windows.h>
#include "Vector.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Введіть кількість елементів вектору: "; cin >> n;
    Vector a(n), b(n), t(n);
    cin >> a;
    cin >> b;
    cout << a;
    cout << b;

    t = Subtract(a, b, n);
    cout << "(a - b) = " << endl;
    cout << t;

    if (Compare(a, b, n))
        cout << "Вектори рівні" << endl;
    else
        cout << "Вектори не рівні" << endl;

    cout << "Норма вектора першого вектора = " << a.NormOfVector(n) << endl;
    cout << "Норма вектора другого вектора = " << b.NormOfVector(n) << endl;
}