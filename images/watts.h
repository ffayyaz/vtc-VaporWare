#include <stdint.h>

#ifndef WATTS_H
#define WATTS_H

uint8_t watts[] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00,
		0x00, 0xE0, 0x03, 0x00, 0xE0, 0x3F, 0x00, 0x00,
		0xFE, 0x03, 0x00, 0xE0, 0x07, 0x00, 0x80, 0x07,
		0x00, 0xF8, 0x07, 0x00, 0x7F, 0x00, 0xE0, 0x0F,
		0x00, 0xE0, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x80,
		0x3F, 0x00, 0x00, 0xFC, 0x03, 0x00, 0xC0, 0x07,
		0x00, 0xC0, 0x07, 0x00, 0xFC, 0x07, 0xC0, 0x7F,
		0x00, 0xE0, 0x07, 0x00, 0x60, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

int watts_width  = 24;
int watts_height = 24;

#endif
