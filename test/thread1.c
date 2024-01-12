#include "syscall.h"

int main() {
    int semVal = Signal("mutex");
    Exit(0);
}