#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by CPlusPlus
    Modified For Learn by RK
    I.D.E : VS2019
*/

char mybuffer[80];

int main() {
    FILE* pFile;
    pFile = fopen("example.txt", "r+");

    if (pFile == NULL) {
        perror("Error opening file");
    } else {
        fputs("test", pFile);
        fflush(pFile);
        fgets(mybuffer, 80, pFile);
        puts(mybuffer);
        fclose(pFile);
        return 0;
    }

    _getch();
    return 0;
}