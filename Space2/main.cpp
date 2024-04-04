#include "header.h"
#include "Labyrint.h"
#include "MyFunction.h"
#include "system.h"
using namespace std;

int main() {
    SetConsoleTitle(L"Учебная программа по дисциплине \"Технология программирования\"");
    //system("color F0");
    setlocale(LC_ALL, "Russian");
    UN char ch = 0;
    do {
        system("cls");
        cout << "   Меню приложения. \n";
        cout << "0 - Создатель \n";
        cout << "1 - Работы первого семестра: \n";
        cout << "2 - Маска. \n";
        cout << "3 -  Лабиринт\n";
        cout << "4 -  Шифровка\n";
        cout << "Нажмите Escape для выхода из приложения. \n\n";
        SetColor(CL_LIGHT_YELLOW, CL_BLACK);
        cout << "Нажмите клавишу для выполнения функции\n\n\n";
        SetColor();
        ch = _getch();
        switch (ch) {
        case '0': Creater(); break;
        case '1': FirstMenu(); break;
        case '2': MenuMaskaMacros(); break;
        case '3': MenuLabyrint();
        case '4': MenuLabyrint();
        default:
            cout << "Нажата клавиша==>" << ch << " с кодом =>" << int(ch) << endl;
            Sleep(1000);
        }
    } while (ch != 27);
    return 0;
}

