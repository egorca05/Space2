#include "header.h"
#include "Labyrint.h"
#include "MyFunction.h"

using namespace std;

const int nL = 32;   //колво строк
const int nC = 32;   //колво столбцов лабиринта

UINT map[nL] = {
    0b1101'1111'1111'1111'1111'1111'1111'1111,
    0b1000'0000'0000'0000'0000'0100'0000'0001,
    0b1010'1101'1011'1111'1111'0101'1110'1111,
    0b1010'1101'1011'0000'0001'0101'1000'0001,
    0b1000'0001'1011'0111'1101'0101'1011'1101, //5
    0b1011'1101'1011'0000'0100'0100'1011'0001,
    0b1000'0101'1011'1110'1101'0001'1010'0101,//7
    0b1011'0001'1011'0110'1101'1111'1010'1101,
    0b1011'0100'0000'0000'0101'0000'0010'0101,//9
    0b1000'0111'1111'1111'1101'0111'1111'0101,
    0b1101'0100'0100'0000'0001'0000'0000'0101,//11
    0b1001'0101'0101'1111'1101'0101'1110'1101,
    0b1011'0101'0100'0100'0101'0101'0000'0001,//13
    0b1011'0101'0101'0101'0101'0101'0110'1101,
    0b1000'0101'0101'0101'0101'0101'0110'1101,//15
    0b1011'0001'0101'0001'0001'0101'0110'0101,
    0b1001'0101'0101'1111'1111'0101'0110'1101,//17
    0b1101'0101'0100'0000'0000'0101'0010'1101,
    0b1000'0101'0101'1111'1111'1101'1110'1101,//19
    0b1101'0101'0101'0001'0001'0000'1110'1101,
    0b1101'0101'0100'0100'0100'0110'0000'0101,//21
    0b1101'0101'0111'1111'1111'1111'1111'1101,
    0b1001'0101'0110'0000'0000'0000'0000'0001,//23
    0b1101'0101'0110'1111'1111'1111'1111'1101,
    0b1101'0001'0000'1000'0000'0000'0000'0001,//25
    0b1101'1101'1111'1111'1111'1111'1101'1111,
    0b1001'0001'0000'0000'0000'0000'0100'0001,//27
    0b1011'0111'1111'0111'1111'1111'0111'1101,
    0b1001'0000'0000'0000'0000'0001'0000'1111,//29
    0b1101'1111'1111'1101'0111'1101'1110'0000,
    0b1111'1111'1111'1111'1111'1111'1111'1111,
};

UINT nbit = 0b1000'0000'0000'0000'0000'0000'0000'0000;
COLORS nCLRS = CL_LIGHT_CYAN, nCLRE = CL_LIGHT_GREEN;
UINT nSRow = 0, nSCol = 2;                             //Старт, вход в лабиринт, координата
UINT nERow = 29, nECol = 31;                           //Выход из лабиринта, координата
UINT nRow = nSRow, nCol = nSCol;                       //Текущая позиция жука в лабиринте

void MenuLabyrint() {
    Uchar ch = 0;
    do {
        CLS;
        SetTextColor(CL_LIGHT_RED);
        cout << "Меню Лабиринта:\n";
        SetColor();
        cout << "1 - Лабиринт\n";
        cout << "ESC - Выход из программы\n";
        SetTextColor(CL_LIGHT_YELLOW);
        cout << "Выберите пункт меню\n";
        SetColor();

        ch = _getch();
        switch (ch) {
        case '1': Labyrint(); break;
        case '2':  break;
        }
    } while (ch != 27);
}

void Labyrint() {
    UCHAR ch = 0;
    CLS;
    for (int i = 0; i < nL; i++) {
        for (int j = 0; j < nC; j++) {
            if (map[i] & (nbit >> j)) {            //стена
                SetColor(СВ_БЕЛЫЙ);
                cout << "ШШ";
            }
            else                                  //проход
            {
                if ((i == nSRow) && (j == nSCol)) SetColor(nCLRS);
                else if ((i == nERow) && (j == nECol))SetColor(nCLRE);
                else DefColor;

                //if ((i == nRow) && (j == nCol)) {
                 //SetColor(CL_LIGHT_RED);
                 //cout << "ЖЖ";
                //}
                //else 
                cout << "  ";
            }
        }
        cout << endl;
    }
    do {
        SetCursor(nRow, nCol * 2);
        SetColor(CL_LIGHT_RED);
        cout << "ЖЖ";

        ch = _getch();

        SetCursor(nRow, nCol * 2);
        SetColor();
        cout << "  ";

        switch (ch) {
            //case 0:
        case 224:
            ch = _getch();
            switch (ch) {
            case 72: if ((nRow == 0) || (map[nRow - 1] & (nbit >> nCol))) SONG; else nRow--; break; //вверх
            case 75: if ((nCol == 0) || (map[nRow] & (nbit >> (nCol - 1)))) SONG; else nCol--; break; //влево
            case 77: if (((nCol + 1) == nC) || (map[nRow] & (nbit >> (nCol + 1)))) SONG; else nCol++; break; //вправо
            case 80: if (((nRow + 1) == nL) || (map[nRow + 1] & (nbit >> nCol))) SONG; else nRow++; break; //вниз
            }
        }
    } while (!((nRow == nERow) && (nCol == nECol)) && (ch != 27));

    PAUSE;
}