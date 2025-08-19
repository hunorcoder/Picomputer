#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/clocks.h"

#include "cl.h"
#include "gfx.h"
#include "usb.h"

int main() {
    set_sys_clokc_khz(125000, true);
    stdio_init_all();
    gpio_init(25);
    gpio_set_dir(25, GPIO_OUT);

    gfx_init();

    while (1) {

    }
}
