#include <xc.h>
#include <stdint.h>
#include <stdbool.h>

void digitalInit(const char pin[]);
void digitalHigh(const char pin[]);
void digitalLow(const char pin[]);
void digitalFlip(const char pin[]);
bit digitalRead(const char pin[]);