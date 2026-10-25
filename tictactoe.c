#include <stdio.h>

int cekPemenang(char b[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (b[i][0] != '-' && b[i][0] == b[i][1] && b[i][1] == b[i][2])
            return 1;
    }
    for (int i = 0; i < 3; i++) {
        if (b[0][i] != '-' && b[0][i] == b[1][i] && b[1][i] == b[2][i])
            return 1;
    }
    if (b[0][0] != '-' && b[0][0] == b[1][1] && b[1][1] == b[2][2])
        return 1;
    if (b[0][2] != '-' && b[0][2] == b[1][1] && b[1][1] == b[2][0])
        return 1;
        
    return 0;
}

int main() {
    char board[3][3] = {
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'}
    };
    
    int baris, kolom;
    int giliran = 0;

    printf("=== GAME TIC-TAC-TOE ===\n");

    while (giliran < 9) {
        
        // Tampilkan papan Tic-Tac-Toe
        printf("\nPapan Saat Ini:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%c ", board[i][j]);
            }
            printf("\n");
        }

        char tanda = (giliran % 2 == 0) ? 'X' : 'O';
        printf("\nGiliran Player [%c]\n", tanda);

        printf("Pilih Baris (0, 1, atau 2): ");
        scanf("%d", &baris);
        printf("Pilih Kolom (0, 1, atau 2): ");
        scanf("%d", &kolom);

        if (baris >= 0 && baris < 3 && kolom >= 0 && kolom < 3) {
            if (board[baris][kolom] == '-') {
                board[baris][kolom] = tanda;
                
                if (cekPemenang(board)) {
                    // Tampilkan papan akhir
                    printf("\nPapan Akhir:\n");
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            printf("%c ", board[i][j]);
                        }
                        printf("\n");
                    }
                    printf("\nSELAMAT! Player [%c] MENANG!\n", tanda);
                    break; 
                }
                
                giliran++;
            } else {
                printf("\n[INFO] Kotak tersebut sudah diisi! Pilih kotak lain.\n");
            }
        } else {
            printf("\n[ERROR] Pilihan salah! Masukkan angka antara 0 sampai 2 saja.\n");
        }
    }

    if (giliran == 9) {
        printf("\nPermainan SERI (Draw)! Tidak ada yang menang.\n");
    }

    return 0;
}