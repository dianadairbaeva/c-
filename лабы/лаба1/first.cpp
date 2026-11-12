#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int choice;

    while (true)
    {
        cout << "Лабораторная работа №1\n";
        cout << "Выберите задание:\n";
        cout << "1 - Любимое стихотворение\n";
        cout << "2 - Если вам необходимо перевести темп. по Цельсию в темп. по Фаренгейту\n";
        cout << "3 - Если вы хотите сложить две дроби\n";
        cout << "4 - Если хотите перевести сумму из устаревшей денежной системы Великобритании в новую\n";
        cout << "5 - Если хотите перевести сумму из новой денежной системы Великобритании в старую\n";
        cout << "0 - Выход\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        if (choice == 0)
        {
            break;
        }

        if (choice == 1)
        {
            cout << "\nМороз и солнце; день чудесный!\n";
            cout << "Еще ты дремлешь, друг прелестный —\n";
            cout << "Пора, красавица, проснись:\n";
            cout << "Открой сомкнуты негой взоры\n";
            cout << "Навстречу северной Авроры,\n";
            cout << "Звездою севера явись!\n";
        }
        else if (choice == 2)
        {
            float celsius;
            float fahrenheit;

            cout << "\nВведите температуру в градусах Цельсия: ";
            cin >> celsius;

            fahrenheit = celsius * 9 / 5 + 32;

            cout << "Температура по Фаренгейту: " << fahrenheit << endl;
        }
        else if (choice == 3)
        {
            int a, b, c, d;
            int chislitel;
            int znamenat;

            cout << "\nВведите числитель первой дроби: ";
            cin >> a;

            cout << "Введите знаменатель первой дроби: ";
            cin >> b;

            cout << "Введите числитель второй дроби: ";
            cin >> c;

            cout << "Введите знаменатель второй дроби: ";
            cin >> d;

            if (d == 0 || b == 0)
            {
                cout << "Ошибка! Знаменатель не может быть равен нулю.\n";
            }
            else
            {
                chislitel = a * d + b * c;
                znamenat = b * d;
                cout << "Результат: " << chislitel << "/" << znamenat << "\n";
            }
        }
        else if (choice == 4)
        {
            int pounds;
            int shillings;
            int pens;

            int totalPence;
            double decimalPounds;

            cout << "\nВведите фунты: ";
            cin >> pounds;

            cout << "Введите шиллинги: ";
            cin >> shillings;

            cout << "Введите пенсы: ";
            cin >> pens;

            if (shillings >= 20 && pens >= 12)
            {
                cout << "Ошибка! Шиллинги не могут превышать значения 20, а пенсы 12" << endl;
            }
            else if (shillings >= 20)
            {
                cout << "Ошибка! Шиллинги не могут превышать значения 20" << endl;
            }
            else if (pens >= 12)
            {
                cout << "Ошибка! Пенсы не могут превышать значения 12" << endl;
            }
            else
            {
                totalPence = pounds * 20 * 12 + shillings * 12 + pens;

                decimalPounds = totalPence / 240.0;

                cout << "Сумма в новой системе: £" << decimalPounds << endl;
            }
        }
        else if (choice == 5)
        {
            double decimalPounds;

            int totalOldPence;
            int pounds;
            int shillings;
            int pens;
            int remainder;

            cout << "\nВведите сумму в десятичных фунтах: £";
            cin >> decimalPounds;

            if (decimalPounds < 0)
            {
                cout << "Ошибка! Сумма не может быть отрицательной." << endl;
            }
            else
            {
                totalOldPence = static_cast<int>(decimalPounds * 240 + 0.5);

                pounds = totalOldPence / 240;

                remainder = totalOldPence % 240;

                shillings = remainder / 12;

                pens = remainder % 12;

                cout << "Сумма в старой системе: £"
                     << pounds << "." << shillings << "." << pens << endl;
            }
        }
    }

    return 0;
}
