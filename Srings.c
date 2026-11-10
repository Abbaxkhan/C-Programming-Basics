#include <stdio.h>

int main()
{

    char name[20], line[80], ch, c = 0;
    scanf("%s", name);
    scanf("%10s", &name);
    printf("%s\n", name);

    fgets(name, 10, stdin);
    puts(name);

    scanf("%[^\n]s", line);
    printf("%s\n", line);

    gets(line);
    printf("%s\n", line);

    do

    {
        ch = getchar();
        line[c] = ch;
        c++;
    } while (ch != '\n');

    for (c = 0; c != '\n'; c++)
        scanf("%c", &line[c]);
    for (c = 0; c != '\n'; c++)
        printf("%c", line[c]);
    printf("\n Enter String: ");
    fgets(line,  sizeof(line), stdin);
}
