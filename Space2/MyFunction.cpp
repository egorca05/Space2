#include "MyFunction.h"
#include "header.h"

using namespace std;

void SetColor(short int pnTextColor, short int pnBGColor) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((pnBGColor & 0x000F) << 4) | (pnTextColor & 0x000F));
}

void SetColor() {
	SetColor(DefTextColor, DefBGColor);
}

void SetColor(short pnColorA) {
	SetColor(pnColorA, pnColorA);
}

void SetTextColor(short int pnTextColor) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO ConBuf;
	GetConsoleScreenBufferInfo(hStdOut, &ConBuf);
	ConBuf.wAttributes = (ConBuf.wAttributes & 0x00f0) | (pnTextColor & 0x000F);
	SetConsoleTextAttribute(hStdOut, ConBuf.wAttributes);
}
void SetCursor(short pnRow, short pnCol)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetCursorPos(pnCol, pnRow);
	COORD position{ pnCol, pnRow };
	SetConsoleCursorPosition(hStdOut, position);
}