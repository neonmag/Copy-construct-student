#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    Student::GetCounter(); // Вызов static method
    cout << endl;
    Student student1; // Инициализация объекта класса
    student1.Input(); // Вызов метода ввода
    student1.Print(); // Вызов метода вывода
    student1.SetName("Boris"); // Вызов метода Set для поля name
    cout << student1.GetName() << endl; // Вывод метода Get для поля name
    cout << "Counter = " << student1.GetCounter() << endl; // вывод static method
    Student student2 = student1; // Realising copy construct
    student2.Print();
}