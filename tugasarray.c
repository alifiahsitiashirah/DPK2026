//array 2D
#include <stdio.h>
#include <stdlib.h>

char C[3][3] = {{'X','O','X'},{'O','X','O'},{'X','O','X'}}; 

int main(int argc, char *argv[]) {

    for(int baris=0; baris<3; baris++)
    {
        for(int kolom=0; kolom<3; kolom++)
            printf("%c ", C[baris][kolom]);
        printf("\n");
    }
}

//tugas, bikin game tic tac toe, 2 player, 3x3, player 1 A, player 2 B, input baris dan kolom, cek menang atau seri