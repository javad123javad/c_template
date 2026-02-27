#include <stdio.h>
#include <assert.h>
#include "c_template.h"

int main(void) {
    /* simple unit tests for add() */
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    assert(add(0, 0) == 0);

    printf("add() tests passed\n");
    return 0;
}
