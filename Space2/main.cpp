#include "header.h"
#include "Labyrint.h"
#include "MyFunction.h"
#include "system.h"
using namespace std;

int main() {
    SetConsoleTitle(L"������� ��������� �� ���������� \"���������� ����������������\"");
    //system("color F0");
    setlocale(LC_ALL, "Russian");
    UN char ch = 0;
    do {
        system("cls");
        cout << "   ���� ����������. \n";
        cout << "0 - ��������� \n";
        cout << "1 - ������ ������� ��������: \n";
        cout << "2 - �����. \n";
        cout << "3 -  ��������\n";
        cout << "4 -  ��������\n";
        cout << "������� Escape ��� ������ �� ����������. \n\n";
        SetColor(CL_LIGHT_YELLOW, CL_BLACK);
        cout << "������� ������� ��� ���������� �������\n\n\n";
        SetColor();
        ch = _getch();
        switch (ch) {
        case '0': Creater(); break;
        case '1': FirstMenu(); break;
        case '2': MenuMaskaMacros(); break;
        case '3': MenuLabyrint();
        case '4': MenuLabyrint();
        default:
            cout << "������ �������==>" << ch << " � ����� =>" << int(ch) << endl;
            Sleep(1000);
        }
    } while (ch != 27);
    return 0;
}

