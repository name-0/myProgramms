#include <stdio.h>
#define MAXLINE 1000 /* max input line size */
#define MINIMUM 80 /* min output line size */

int getl(char line[], int maxline);

int main()
{
    int len;
    char line[MAXLINE];
	    
    while ((len = getl(line, MAXLINE)) > 0) {
        if (len > MINIMUM)
            printf("%s", line);
    }
    
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
