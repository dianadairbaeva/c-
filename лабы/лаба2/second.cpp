#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int zadanie;

    cout << "Выберите задание:" << endl;
    cout << "1 - Пирамида из X" << endl;
    cout << "2 - Факториал" << endl;
    cout << "3 - Вклад" << endl;
    cout << "4 - Ипотека" << endl;
    cout << "5 - Фунты, шиллинги и пенсы" << endl;
    cout << "Введите номер задания: ";
    cin >> zadanie;

    if (zadanie == 1)
    {
        for (int i = 1; i <= 20; i++)
        {
            for (int j = 1; j <= 2 * (20 - i); j++)
            {
                cout << " ";
            }

            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "X";
            }

            cout << endl;
        }
    }
    else if (zadanie == 2)
    {
        int number;

        while (true)
        {
            cout << "Введите число: ";
            cin >> number;

            if (number == 0)
            {
                break;
            }

            long long factorial = 1;

            for (int i = 1; i <= number; i++)
            {
                factorial *= i;
            }

            cout << "Факториал: " << factorial << endl;
        }
    }
    else if (zadanie == 3)
    {
        double deposit;
        int years;
        double rate;

        cout << "Введите начальный вклад: ";
        cin >> deposit;

        cout << "Введите число лет: ";
        cin >> years;

        cout << "Введите процентную ставку: ";
        cin >> rate;

        for (int year = 1; year <= years; year++)
        {
            deposit += deposit * rate / 100;
        }

        cout << fixed << setprecision(2);

        cout << "Через " << years << " лет вы получите "
             << deposit << " долларов." << endl;
    }
    else if (zadanie == 4)
    {
        double stoimostKvartiry;
        double nachalnyVznos;
        int goda;
        double stavka;

        cout << "Введите стоимость квартиры: ";
        cin >> stoimostKvartiry;

        cout << "Введите начальный взнос: ";
        cin >> nachalnyVznos;

        cout << "Введите число лет ипотеки: ";
        cin >> goda;

        cout << "Введите процентную ставку: ";
        cin >> stavka;

        double dolg = stoimostKvartiry - nachalnyVznos;
        double obshayaSumma = nachalnyVznos;

        cout << fixed << setprecision(2);

        cout << "\nНачальный долг: " << dolg << endl;

        for (int god = 1; god <= goda; god++)
        {
            double procenty = dolg * stavka / 100;

            dolg += procenty;
            obshayaSumma += procenty;

            cout << "Год " << god
                 << ": долг = " << dolg
                 << ", проценты = " << procenty << endl;
        }

        obshayaSumma += stoimostKvartiry - nachalnyVznos;

        cout << "\nОбщая сумма выплат: "
             << obshayaSumma << endl;
    }
    else if (zadanie == 5)
    {
        int pounds1, shillings1, pence1;
        int pounds2, shillings2, pence2;
        char answer;

        do
        {
            cout << "Введите первую сумму (фунты шиллинги пенсы): ";
            cin >> pounds1 >> shillings1 >> pence1;

            cout << "Введите вторую сумму (фунты шиллинги пенсы): ";
            cin >> pounds2 >> shillings2 >> pence2;

            int pence = pence1 + pence2;
            int shillings = shillings1 + shillings2;
            int pounds = pounds1 + pounds2;

            if (pence >= 12)
            {
                pence -= 12;
                shillings++;
            }

            if (shillings >= 20)
            {
                shillings -= 20;
                pounds++;
            }

            cout << "Всего: £"
                 << pounds << " "
                 << shillings << " "
                 << pence << endl;

            cout << "Продолжить (y/n)? ";
            cin >> answer;

        } while (answer == 'y' || answer == 'Y');
    }
    else
    {
        cout << "Такого задания нет." << endl;
    }

    return 0;
}
