#include <stdio.h>

int main() {
    char amessage[] = "now is the time";     // Array — characters are stored in stack.
    char *pmessage = "now is the time";      // Pointer — points to string literal.

    amessage[0] = 'H';  // ✅ VALID: array elements can be modified.
    printf("amessage: %s\n", amessage);

    // pmessage[0] = 'H';  // ❌ UNDEFINED: modifying string constant — don't do this.

    pmessage = amessage;  // ✅ VALID: pointer can point to another string.

    printf("pmessage: %s\n", pmessage);

    return 0;
}
