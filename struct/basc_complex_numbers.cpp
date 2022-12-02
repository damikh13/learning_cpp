#include <iostream>

struct complex
{
    double real_part;
    double imaginary_part;
}i , A; // ';' обязательна

// передача по ссылке (&) быстрее, т.к. не происходит копирования
// если хотим защититься от изменения, то передаем по константной ссылке
complex sum_complex_numbers(const complex &a, const complex &b)
{
    complex c;
    c.real_part = a.real_part + b.real_part;
    c.imaginary_part = a.imaginary_part + b.imaginary_part;
    return c;
}

inline void print_complex_nubmer(complex number)
{
    std::cout << number.real_part << " + " << number.imaginary_part << "i" << std::endl;
}

int main()
{
    // первый способ инициализации
    complex a; 
    a.real_part = 1;
    a.imaginary_part = -1;

    // второй способ инициализации (крутой)
    complex b = {2.5, 3.5};

    // сумма комплексных чисел
    complex c = sum_complex_numbers(a, b);
    print_complex_nubmer(c);

    return 0;
}