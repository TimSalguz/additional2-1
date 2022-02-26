// Задача №1
// «Рекурсия»

// Задачи во всех вариантах следует выполнять с применением рекурсии. Циклы использовать нельзя.

// Вариант 1.
// Дано натуральное число N<10^9. Проверить, является ли оно точной степенью двойки. Не используйте операцию возведения в степень.


#include <iostream>

bool isStepen2(int number, long digit) {
    if (number == digit)
        return 1;
    if(number <= digit)
    {
        number *= 2;
        isStepen2(number, digit);
    }
    else
        return 0;
}

int main() {
    std::cout << isStepen2(2, 1024);
}