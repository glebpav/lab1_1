#include "inputHelper.h"
#include "stdlib.h"
#include "stdio.h"

int getInt(int *num) {
    int response;
    do {
        response = scanf("%d", num);
        if (response < 0) {
            printf("Good bye!");
            exit(0);
        }
        if (response == 0) {
            printf("Incorrect symbol, try again: \n");
            response = scanf("%*c", 0);
        }
    } while (response == 0);
    return 1;
}

void readArray(MatrixWrapper *matrixWrapper) {

    int countOfRows, lenOfThisRow;

    printf("Please, enter count of rows: \n");
    getInt(&countOfRows);

    matrixWrapper->matrixLen = countOfRows;
    matrixWrapper->matrix = calloc(countOfRows, sizeof(RowWrapper));

    for (int i = 0; i < countOfRows; ++i) {
        printf("Please, enter len of [%d] row: \n", i);
        getInt(&lenOfThisRow);

        matrixWrapper->matrix[i].lenOfRow = lenOfThisRow;
        matrixWrapper->matrix[i].row = calloc(lenOfThisRow, sizeof(RowWrapper));

        for (int j = 0; j < lenOfThisRow; ++j) {
            printf("[%d] - ", j);
            getInt(&(matrixWrapper->matrix[i].row[j]));
            printf("\n");
        }
    }
}

