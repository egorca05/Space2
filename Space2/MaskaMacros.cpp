#include "header.h"
#include "MyFunction.h"
using namespace std;
void maska();
void MenuMacros();

void MenuMaskaMacros() {
    char ch1 = 0;
    do {
        system("cls");
        cout << "   Меню для решения задачи с маской и макросы:\n";
        cout << "1) Маска" << endl;
        cout << "2) Макросы" << endl;
        //cout << "3) задание 3.1" << endl;
        //cout << "4) задание 3.2" << endl;
        //cout << "5) задание 4" << endl;
        cout << "Esc для того чтобы вернуться\n" << endl;
        cout << "Выберите пункт меню" << endl;

        ch1 = _getch();
        switch (ch1) {
        case '1': system("cls"); maska(); cout << endl; break;
        case '2': MenuMacros(); break;
            //case '8': CLEAR; cout << sizeof(m); PAUSE; break;
        case '9': CLS;
            //Test();
            PAUSE; break;
        }
    } while (ch1 != 27);

}

void MenuMacros() {
    Uchar ch = 0;
    unsigned long long x = 0;
    int a = 345, b = 2;
    //float f;
    enColor color = CL_BLACK;
    do {
        system("cls");
        cout << "   Меню макросы:\n";
        cout << "1) Старшие байты" << endl;
        cout << "2) Младшие байты" << endl;
        cout << "3) Перестановка байт" << endl;
        cout << "4) Максимум и Минимум" << endl;
        //cout << "5) задание 4" << endl;
        cout << "Esc для завершения программы\n" << endl;
        cout << "Выберите пункт меню" << endl;

        ch = _getch();
        switch (ch) {
        case '0': CLS;
            for (int i = 0; i < 16; i++) {
                switch (i) {
                case 0: SetColor(CL_LIGHT_WHITE, CL_BLACK); cout << "CL_BLACK"; break;
                case 1: cout << "CL_BLUE"; break;
                case 2: cout << "CL_GREEN"; break;
                    //CL_CYAN,
                    //CL_RED,
                    //CL_PURPLE,
                    //CL_YELLOW,
                    //CL_WHITE,
                case 8:cout << "CL_LIGHT_BLACK"; break;
                    //CL_LIGHT_BLUE,
                    //CL_LIGHT_GREEN,
                    //CL_LIGHT_CYAN,
                    //CL_LIGHT_RED,
                    //CL_LIGHT_PURPLE,
                case 14: cout << "CL_LIGHT_YELLOW"; break;
                case 15: cout << "CL_LIGHT_WHITE"; break;
                default:
                    cout << "Неопределнный цвет"; break;
                }
                LINES(1);
            }
            PAUSE; break;
        case '1': system("cls");
            cout << "Введите число в  формате hex: "; cin >> hex >> x;
            cout << hex << "\n\nHIGH long = " << HIGH(x) << endl;
            cout << "HIGH int = " << HIGH((unsigned int)x) << endl;
            cout << "HIGH short = " << HIGH((unsigned short)x) << endl;
            //ch = 27;
            system("pause");
            break;
        case '2':
            break;
            //case '3':system("cls");lab3_1();cout << endl; break;
            //case '4':system("cls");lab3_2();cout << endl; break;
            //case '5':system("cls");lab4();cout << endl; break;
            //case '0':
            break;
        }
    } while (ch != 27);

}

void maska() {
    system("cls");

    cout << "Вывести на экран те числа из случайного набора 20 чисел в диапозоне от 500 до 32000, которые удовлетворяет маске\n\n";
    short int* mas = 0, maska;
    mas = new short int [20] { 0 };

    cout << "Сгенерированный массив:\n";
    for (BYTE n = 0; n < 20; ++n) {
        *(mas + n) = rand() % 31500 + 501;
        cout << mas[n] << " ";

    }
    cout << "\n\nВведите маску: ";
    cin >> maska;
    cout << "\nЧисла, удовлетворяющие маске\n";
    for (BYTE i = 0; i < 20; ++i) {
        if ((mas[i] & maska) == maska) cout << mas[i] << " ";
    }
    cout << "\n\n\n";

    delete[] mas;
    system("pause");

}