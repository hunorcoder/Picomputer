#ifndef PICOMPUTER_GFX_LIB
#define PICOMPUTER_GFX_LIB

#include "pico/stdlib.h"
#include "hardware/pio.h"
#include "hardware/dma.h"
#include "rgb.pio.h"
#include "hsync.pio.h"
#include "vsync.pio.h"

#include "font.h"

bool gfx_init();

#endif
