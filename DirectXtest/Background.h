#pragma once
#ifndef __BACKGROUND
#define __BACKGROUND
#define BITMAP_PICTURE "fox.bmp"
#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1080
void SetError(TCHAR*, ...);
HRESULT RestoreGraphics();
#endif