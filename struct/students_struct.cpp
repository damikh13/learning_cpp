#include <iostream>

struct student
{
    /*
        Помним о порядке размещения переменных, чтобы не было пустующих мест
        можно посчиать через sizeof(struct_name);
        массивы одного типа данных будут храниться в ячейках память подряд, не раздлеляясь по байтам
    */
    int number;
    //int age;
    char surname[32];
    //int age; <-- такое написание было бы хуже, потому что пришлось бы разорвать два массива одного типа
    char name[16];
    unsigned char marks[5];
    //complex age; <-- можно использовать уже ранее созданные струкрутры 
};

int main()
{

    std::cout << sizeof(student) << std::endl; // можем посчитать размер структуры

    student X = {1,"Ivanov", "Ivan", {4, 5, 3, 2, 2} };
    return 0;
}