#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    Student::GetCounter(); // ����� static method
    cout << endl;
    Student student1; // ������������� ������� ������
    student1.Input(); // ����� ������ �����
    student1.Print(); // ����� ������ ������
    student1.SetName("Boris"); // ����� ������ Set ��� ���� name
    cout << student1.GetName() << endl; // ����� ������ Get ��� ���� name
    cout << "Counter = " << student1.GetCounter() << endl; // ����� static method
    Student student2 = student1; // Realising copy construct
    student2.Print();
}