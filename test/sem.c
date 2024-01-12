#include "syscall.h"

int main() {
    int spaceId;
    int semVal;
    semVal = CreateSemaphore("mutex", 0);
    spaceId = Exec("thread1");
    semVal = Wait("mutex");
    Join(spaceId);

    Exit(0);
}