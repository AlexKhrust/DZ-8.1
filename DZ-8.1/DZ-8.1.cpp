#include <iostream>
using namespace std;

int Divider(int a, int b) {
    
    if (a % b == 0)
        return b;
    if (b % a == 0)
        return a;
    if (a > b)
        return Divider (a % b, b);
    return Divider (a, b % a);
        
}

int main()
{
    setlocale(LC_ALL, "rus");
    int num1, num2;
    cout << "Поиск наибольшего общего делителя двух целых чисел." << endl;
    cout << "Введите первое целое число: ";
    cin >> num1;
    cout << endl;
    cout << "Введите второе целое число: ";
    cin >> num2;
    cout << endl;
    cout << "Результат = " << Divider(num1, num2);
}
/*Задание
Написать рекурсивную функцию нахождения наибольшего общего делителя двух целых чисел.*/