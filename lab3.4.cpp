// Lab_03_4.cpp
// <Пелещишин Катерина>
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 19

#include <iostream>
using namespace std;

int main()
{
    double x, y, R;
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // Прямокутник у I квадранті
    if (x >= 0 && x <= 2 * R && y >= 0 && y <= 2 * R)
        cout << "yes" << endl;
    // Чверть кола у I квадранті
    else if (x >= 0 && y >= 0 && x * x + y * y <= R * R)
        cout << "yes" << endl;
    // Трикутник у III квадранті
    else if (x >= -2 * R && x <= 0 && y >= -2 * R && y <= 0 && y >= -x - 2 * R)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    return 0;
}