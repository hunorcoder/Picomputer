cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(picomputer C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(picomputer
	picomputer.c
	cl.c
	gfx.c
	usb.c
)

target_include_directories(picomputer PUBLIC ${CMAKE_CURRENT_LIST_DIR})

pico_generate_pio_header(picomputer ${CMAKE_CURRENT_LIST_DIR}/rgb.pio)
pico_generate_pio_header(picomputer ${CMAKE_CURRENT_LIST_DIR}/vsync.pio)
pico_generate_pio_header(picomputer ${CMAKE_CURRENT_LIST_DIR}/hsync.pio)

pico_enable_stdio_usb(picomputer 0)
pico_enable_stdio_uart(picomputer 1)

target_link_libraries(picomputer
	pico_stdlib
	tinyusb_board
	tinyusb_host
	hardware_pio
	hardware_dma
	hardware_clocks
)

pico_add_extra_outputs(picomputer)
