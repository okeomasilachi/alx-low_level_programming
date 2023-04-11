#include <stdint.h>

int get_endianness(void) {
    uint16_t value = 0x0001;
    uint8_t* ptr = (uint8_t*)&value;
    return (int)*ptr;
}

