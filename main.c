#include <stdio.h>
#include "dataHelper.h"
#include "inputHelper.h"

int main() {
    printf("Hello, dear user!\n");

    MatrixWrapper matrixWrapper;
    readArray(&matrixWrapper);

    return 0;
}
