// pr3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    //1 задание
    //double x, y;
    //cout << "X\t   Y\n";
    //for (int i = -4; i <= 4; ++i) {
    //    x = i * 0.5;
    //    y = -2.4 * x * x + 5 * x - 3;

    //    printf("%g\t%.2f\n", x, y);
    //}

    //2 задание
    //int num;

    //cout << "Преобразование десятичного числа в двоичное.\n";
    //cout << "Введите целое число от 0 до 255 и нажмите <Enter> -> ";
    //cin >> num;

    //if (num >= 0 && num <= 255) {
    //    cout << "Десятичному числу " << num << " соответствует двоичное ";

    //    int temp = num;
    //    for (int bit = 128; bit >= 1; bit /= 2) {
    //        if (temp >= bit) {
    //            cout << 1;
    //            temp -= bit;
    //        }
    //        else {
    //            cout << 0;
    //        }
    //    }
    //    cout << "\n";
    //}
    //else {
    //    cout << "Ошибка: число должно быть в диапазоне от 0 до 255.\n";
    //}

    //cout << "Для завершения работы программы нажмите <Enter>.";
    //cin.ignore();
    //cin.get();

    ////3 задание
    //int n;
    //double num;
    //cout << "Введите количество чисел N: ";
    //cin >> n;

    //int last_neg_index = 0;
    //for (int i = 1; i <= n; ++i) {
    //    cout << "Введите " << i << "-е число: ";
    //    cin >> num;
    //    if (num < 0) {
    //        last_neg_index = i;
    //    }
    //}

    //if (last_neg_index > 0) {
    //    cout << "Последний отрицательный элемент был введен " << last_neg_index << "-м\n";
    //}
    //else {
    //    cout << "Отрицательные элементы не вводились\n";
    //}

    ////4 задание
    //int n, k;
    //cout << "Введите количество цифр n: ";
    //cin >> n;
    //cout << "Введите заданную сумму цифр k: ";
    //cin >> k;

    //int start = 1;
    //for (int i = 1; i < n; ++i) {
    //    start *= 10;
    //}
    //if (n == 1) {
    //    start = 0;
    //}

    //int end = 1;
    //for (int i = 0; i < n; ++i) {
    //    end *= 10;
    //}

    //cout << n << "-значные числа с суммой цифр " << k << ":\n";
    //int temp;
    //int digit_sum;
    //for (int num = start; num < end; ++num) {
    //    temp = num;
    //    digit_sum = 0;

    //    if (temp == 0) {
    //        digit_sum = 0;
    //    }
    //    else {
    //        while (temp > 0) {
    //            digit_sum += temp % 10;
    //            temp /= 10;
    //        }
    //    }
    //    if (digit_sum == k) {
    //        cout << num << " ";
    //    }
    //}
    //cout << "\n";

    ////5 задание
    int sum, kub_num;
    for (int k = 1; k <= 9; ++k) {
        for (int u = 0; u <= 9; ++u) {
            for (int b = 0; b <= 9; ++b) {
                if (k != u && k != b && u != b) {
                    sum = k + u + b;
                    kub_num = k * 100 + u * 10 + b;

                    if (sum * sum * sum == kub_num) {
                        cout << "Решение: К=" << k << ", У=" << u << ", Б=" << b
                            << " -> (" << k << "+" << u << "+" << b << ")^3 = " << kub_num << "\n";
                    }
                }
            }
        }
    }
}
