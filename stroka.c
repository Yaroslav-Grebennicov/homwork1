#include <stdio.h> 
#include <locale.h> 

void name() {
    setlocale(LC_ALL, "RUS");

    puts("******************************************");
    puts("*                                        *");
    puts("*тема: Исследование алгоритмов сортировки*");
    puts("*     Выполнил Гребенников Я.А.          *");
    puts("*     Группа: бИПТ-251                   *");
    puts("*                                        *");
    puts("******************************************");

    return 0;
}

void date() {
    puts("  _   _     _   _      ");
    puts("  _| |_| |  _| | | |_| ");
    puts(" |_   /  | |_  |_|   | ");
    return 0;
}
int main() {
    name();
    date();
    return 0;
}