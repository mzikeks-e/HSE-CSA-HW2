//------------------------------------------------------------------------------
// main.cpp - содержит главную функцию, 
// обеспечивающую тестирование
//------------------------------------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <ctime>
#include <cstring>
#include "container.h"

void PrintError() {
    printf("Incorrect command!\n"
        "Waited:\n"
        "-f infile outfile01 outfile02\n"
        "Or:\n"
        "-n number outfile01 outfile02\n");
}

//------------------------------------------------------------------------------
int main(int argc, char* argv[]) {
    if (argc != 5) {
        PrintError();
        return 1;
    }

    printf("Start. Please, check, that all spaces in content of storehouse replaced with _.");
    container c;
    Init(c);

    if (!strcmp(argv[1], "-f")) {
        FILE* file;
        file = fopen(argv[2], "r");
        In(c, file);
    }
    else if (!strcmp(argv[1], "-n")) {
        auto size = atoi(argv[2]);
        if (size < 1 || size > 10000) {
            printf("Incorrect number of storehouse of wisdom = %d. Enter 0 < number <= 10000\n", size);
            return 3;
        }
        srand(static_cast<unsigned int>(time(0)));
        InRnd(c, size);
    }
    else {
        PrintError();
        return 2;
    }

    // Вывод содержимого контейнера в файл
    FILE* file1;
    file1 = fopen(argv[3], "w");
    fprintf(file1, "Filled container:\n");
    Out(c, file1);

    // Вывод 2
    FILE* file2;
    file2 = fopen(argv[4], "w");
    ProcessingV22(c, file2);

    Clear(c);
    printf("\nFinished");
    return 0;
}