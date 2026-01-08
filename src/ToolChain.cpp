#include "types.h"

extern "C" int system(const char*);

int main() {
    const char* cmd = "cat test.txt";
    int32_t result = system(cmd);
    return result == -1;
}