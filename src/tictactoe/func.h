#include <stdbool.h>

#ifndef LOGIC_H
#define LOGIC_H

// Validation Prototype
bool chooseValidation(char);
bool placeValidation(int ***,char *,int *,int *);
void place(int **,char *,int *,int *,int *);
int winValidation(char fieldArr[3][3], int *);

// Logic
void fieldRender(char fieldArr[3][3]);
void move(char *, char , int *, int *, int *, int *);
#endif
