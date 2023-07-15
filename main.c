#include <stdio.h>
#include <wiringPi.h>
#include <unistd.h>
#include "ST7735/st7735.h"

extern const unsigned char gImage_test_image[32768];

int main()
{
    ST7735_Init();
    //ST7735_FillScreen(ST7735_BLACK);
    ST7735_DrawImage(0, 0, 128, 128, gImage_test_image);
}
