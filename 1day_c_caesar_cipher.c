#include <stdio.h>

int main()
{
    char caesar[10000];
    int i, cnt, k;
    printf("シーザー暗号を入力してください。\n");
    scanf("%s", caesar);
    for (i = 0; caesar[i] != '\0'; i++)
        ; //文字数のカウント
    printf("%d文字が入力されました。\n", i);
    for (cnt = 1; cnt < 26; cnt++)
    {
        for (k = 0; k < i; k++)
        {
            if (caesar[k] == 'z')
            {
                caesar[k] = 'a';
                printf("%c", caesar[k]);
                continue;
            }
            else if (caesar[k] == 'Z')
            {
                caesar[k] = 'A';
                printf("%c", caesar[k]);
                continue;
            }
            if ('a' <= caesar[k] && 'z' > caesar[k])
            {
                caesar[k] = caesar[k] + 1;
                printf("%c", caesar[k]);
            }
            else if ('A' <= caesar[k] && 'Z' > caesar[k])
            {
                caesar[k] = caesar[k] + 1;
                printf("%c", caesar[k]);
            }
            else
            {
                printf("%c", caesar[k]);
                continue;
            }
        }
        printf("\n");
    }
    printf("%s", caesar);
}
