//Варіант 4
#include <iostream>
using namespace std;
#include "Tasks.h"
#include "Examples.h"
#include <conio.h>
void MenuTask()
{
    cout << "     Menu Task   \n";
    cout << "    1.  Calculation of expressions using bitwise operations  \n";
    cout << "    2.  Data encryption using bitwise operations \n";
    cout << "    3.  Data encryption using structures with bit fields \n";
    cout << "    4.  The problem of using bitwise operations \n";
    cout << "    5.  Exit \n";
}
void task1() {
    // Обчислення виразів з використанням побітових операцій
    // Calculation of expressions using bitwise operations 
    cout << " Calculation of expressions using bitwise operations  \n";
    int a, b, c, d;
    cout << "Enter values of numbers (a, b, c, d)" << endl;
    cin >> a >> b >> c >> d;
    int part1 = (b << 5) + b; //33 * b
    int part2 = (d << 3) + (d << 2) + (d << 1) + d; //d * 15
    int part3 = (a << 3) + (a << 2); //12 * a
    int resultOfDivision = (part2 + part3) >> 9; // (d * 15 + 12 * a)/512
    int part4 = (c << 6) + c; //65 * c
    int part5 = (d << 3) + (d << 2) + (d << 1); //d * 14
    int result = part1 + resultOfDivision - part4 + part5;
    cout << "Result: " << result << endl; 
}

void task2()
{
    // Шифрування даних з використання побітових операцій 
    cout << " Data encryption using bitwise operations  \n";

}

void task3()
{
    // Шифрування даних з використання стуктур з бітовими полями 
    // Data encryption using structures with bit fields
    cout << "  Data encryption using structures with bit fields \n";
}


void task4()
{   // Задача із використання побітових операцій
    // The problem of using bitwise operations
    cout << " Data encryption using structures with bit fields \n";

}

int main()
{
    //Вибір завдання
    MenuTask();
    char task = _getch();
    switch (task)
    {
    case '1':
        system("cls");
        task1();
        break;
    case '2':
        system("cls");
        task2();
        break;
    case '3':
        system("cls");
        task3();
        break;
    case '4':
        system("cls");
        task4();
        break;
    case '5':
        system("cls");
        return 0;
    default:
        cout << "Invalid task number";
        return 1;
    }
}