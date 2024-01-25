Catsay
// A blatant ripoff of cowsay
// Created by Ascended Skid
// 1-23-2024

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
        int i;
        int s;
        for (i = 1; i < argc; i++) {
                s += strlen(argv[i]) + 1;
        }
        char *concat = malloc(s);
        for (i = 1; i < argc; i++) {
                strcat(concat, argv[i]);
                strcat(concat, " ");
        }
        char b11[] = "/--";
        char b12[] = "--\\";
        char b21[] = "|  ";
        char b22[] = "  |";
        char b31[] = "\\--";
        char b32[] = "--/";

        char *dash = malloc(strlen(concat));
        for (i = 1; i < strlen(concat); i++) {
                strcat(dash, "-");
        }

        printf("\n%s%s%s\n%s%s%s\n%s%s%s\n", b11, dash, b12, b21, concat, b22, b31, dash, b32);
        printf("     |/\n\n");
        printf(" |\\__/,|   (`\\\n");
        printf(" |_ _  |.--.) )\n");
        printf(" ( T   )     /\n");                             
        printf(" (((^_(((/(((_/\n\n");

        return EXIT_SUCCESS;
}
