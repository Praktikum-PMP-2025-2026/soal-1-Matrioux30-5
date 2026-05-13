/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 5 – Foundation of Algorithm
 *   Hari dan Tanggal    : Rabu, 12 mei 2026
 *   Nama (NIM)          : Yudhi Tsabit Izhharul Mulki
 *   Nama File           : Rabu1.c
 *   Deskripsi           : Membuat suatu susunan parntheses () dengan jumlah keseimbangan yang sama
 * 
 */

#include <stdio.h>
#define MAX_SIZE 100

int N=0;
 
void _printParenthesis(int pos, int n, int open, int close);

void printParenthesis(int n)
{
    if (n > 0)
        _printParenthesis(0, n, 0, 0);
    return;
}
 
void _printParenthesis(int pos, int n, int open, int close)
{
    static char str[MAX_SIZE];


    if (close == n) {
        printf("%s\n", str);
        N++;
        return;
    }
    else {
        if (open < n) {
            str[pos] = '(';
            _printParenthesis(pos + 1, n, open + 1, close);
        }

        if (open > close) {
            str[pos] = ')';
            _printParenthesis(pos + 1, n, open, close + 1);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    if(n == 0){
        printf("TOTAL 1");
        return 0;
    }
    printParenthesis(n);

    printf("TOTAL %d", N);

    getchar();
    return 0;
}


//REFERENCE CODE https://prepinsta.com/c-program/generate-all-combinations-of-balanced-parentheses/
