#pragma once
#pragma comment (lib, "winmm.lib")
#define BEEP Beep(750,300)
#define SONG PlaySound(TEXT("BMW.wav"), NULL, SND_FILENAME | SND_ASYNC)
void MenuLabyrint();
void Labyrint();