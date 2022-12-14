#include <iostream>

/*
 * Урок 14, cout, cin & endl
 */

int main() {

    // как уже говорилось, объект std::cout (который находится в библиотеке iostream) используется для вывода
    // данных на экран (в консольное окно)
    std::cout << "Hello, World!" << std::endl;

    // для вывода нескольких предложений на одной строке оператор вывода << нужно использовать несколько раз
    int a = 7;
    std::cout << "a is " << a << std::endl;

    // выводится на одной строке
    std::cout << "Hi! ";
    std::cout << "My name is Nik." << std::endl;

    // для перемещения на новую строку используется - std::endl (символ новой строки)
    std::cout << "Hi" << std::endl;
    std::cout << "My name is Nik." << std::endl;

    // std::cin >> - оператор ввода, он получает данные от пользователя
    // просим пользователя ввести целое число
    std::cout << "Введите целое число: ";
    int  b = 0;
    // получаем пользоваетельское число и сохраняем его в переменную a
    std::cin >> a;
    // выводим число
    std::cout << "Ваше число: " << a << std::endl;

    return 0;
}
