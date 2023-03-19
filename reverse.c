/* K&R 1-19 */
#include <stdio.h>
#define MAXLINE 1000 /* max input line size */

int getl(char line[], int maxline);
void reverse(char to[], char from[], int from_len);

int main()
{
    int len, max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getl(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            reverse(longest, line, len);
        }
    if (max > 0)
        printf("%s", longest);
    return 0;
}
int getl(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}
void reverse(char to[], char from[], int from_len)
{
    int i, j;

    i = 0, j = from_len - 2;
    while (to[i] = from[j]) {
        ++i, --j;
    }
    to[i] = '\0';
}
