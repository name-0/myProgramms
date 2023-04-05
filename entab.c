#include <stdio.h>
#define TABSTOP 4

int main() {
    int c, i;
    int count_sp, zalishok;

    count_sp = 1, zalishok = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            while (((c = getchar()) == ' ') && c != EOF)
                ++count_sp;
            if (count_sp > TABSTOP) {
                zalishok = count_sp % TABSTOP;
                for (i = 0; i < (count_sp - zalishok); ++i)
                    printf("%c", '*');
                while (zalishok > 0) {
                    printf("%c", ' ');
                    --zalishok;
                }
            }
            if (count_sp <= TABSTOP) {
                for (i = count_sp; i > 0; --i)
                    printf("%c", ' ');
            }
            count_sp = 1, zalishok = 0;
        }
        printf("%c", c);
    }
    return 0;
}
