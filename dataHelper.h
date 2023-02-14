
typedef struct RowWrapper {
    int lenOfRow;
    int *row;
} RowWrapper;

typedef struct MatrixWrapper {
    int matrixLen;
    RowWrapper *matrix;
} MatrixWrapper;

