#pragma once

#include "header.h"

typedef
enum enColor {
	CL_BLACK,
	CL_BLUE,
	CL_GREEN,
	CL_CYAN,
	CL_RED,
	CL_PURPLE,
	CL_YELLOW,
	CL_WHITE,
	CL_LIGHT_BLACK,
	CL_LIGHT_BLUE,
	CL_LIGHT_GREEN,
	CL_LIGHT_CYAN,
	CL_LIGHT_RED,
	CL_LIGHT_PURPLE,
	CL_LIGHT_YELLOW,
	CL_LIGHT_WHITE,
	������ = 0,
	�����,
	��˨���,
	�������,
	�������,
	����������,
	������,
	�����,
	�����,
	��_�����,
	��_��˨���,
	��_�������,
	��_�������,
	��_����������,
	��_������,
	��_�����,
}COLORS, �����;

#define DefColor SetColor()
static COLORS DefBGColor = CL_BLACK;
static COLORS DefTextColor = CL_LIGHT_WHITE;

void SetColor(short int pnTextColor, short int pnBGColor);
void SetTextColor(short int pnTextColor);
void SetColor(short pnColor);
void SetColor();
void SetCursor(short pnRow, short pnCol);