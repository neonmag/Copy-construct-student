#pragma once
class Student // Объявление класса
{
    char* number; // Создание полей класса
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
    void Input(); // Метод для ввода данных в поля класса вручную с указателем this
    void Print(); // Метод вывода полей с указателем this
    static int GetCounter(); // Статический метод для работы со статическим полем
    const char* GetName(); // Методы set and get
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
