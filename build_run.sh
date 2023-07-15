#!/usr/bin/bash
gcc *.c -o DEMO_ST7735 -I./ST7735 ./ST7735/*.c -lwiringPi -lpthread
./DEMO_ST7735
