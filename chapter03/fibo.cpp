// Генерирование чисел Фибоначчи с помощью цикла while
#include <iostream>
using namespace std;

int main()
{
    const unsigned long limit = 4294967295;
    unsigned long next = 0;     // предпоследний член
    unsigned long last = 1;     // последний член
    while (next < limit / 2)    // результат не должен быть слишком большим
    {
        cout << last << " ";    // вывод последнего члена
        long sum = next + last; // сложение двух последних членов
        next = last;            // обновление предпоследнего
        last = sum;             // и последнего членов
    }
    cout << endl;
    return 0;
}
