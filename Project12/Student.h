#pragma once
class Student // ���������� ������
{
    char* number; // �������� ����� ������
    char* city;
    char* country;
    char* name;
    char* surname;
    char* fathername;
    char* birthday;
    char* group;
    char* university;
    static int counter;
public:
    Student(); // Constructor by default
    Student(const char* number, const char* city,
        const char* country, const char* name, const char* surname, const char* fathername,
        const char* birthday, const char* group, const char* university); // Constructor
    Student(const Student& obj); // Copy construct
    void Input(); // ����� ��� ����� ������ � ���� ������ ������� � ���������� this
    void Print(); // ����� ������ ����� � ���������� this
    static int GetCounter(); // ����������� ����� ��� ������ �� ����������� �����
    const char* GetName(); // ������ set and get
    void SetName(const char* name);
    const char* GetSurname();
    void SetSurname(const char* surname);
    const char* GetFathername();
    void SetFathername(const char* fathername);
    const char* GetNumber();
    void SetNumber(const char* number);
    const char* GetBirthday();
    void SetBirthday(const char* birthday);
    const char* GetCity();
    void SetCity(const char* city);
    const char* GetCountry();
    void SetCountry(const char* country);
    const char* GetGroup();
    void SetGroup(const char* group);
    const char* GetUniversity();
    void SetUniversity(const char* university);
    ~Student(); // Destructor
};
