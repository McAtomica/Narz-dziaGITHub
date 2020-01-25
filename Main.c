#include <stdio.h> //operacje I/O
#include <string.h> //Funkcja strlen()
#include <stdlib.h> //funkcja atoi()
#include <conio.h> // funkcja getch()

#include "silnia.h"
#include "silnia2.h"
#include "silnia3.h"

int main(){
     int n = komunikacja();
    printf("Silnia obliczana iteracyjnie to %d.\nSilnia rekurencyjnie to %d",średnia(n),Metraż(n));
    return 0;
}
