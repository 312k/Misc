#include <stdio.h>

int main()
{
    char caesar[10000];
    char input[2];
    int i, cnt, k;
    printf("シーザー暗号を入力してください。\n");
    scanf("%s", caesar);
    for (i = 0; caesar[i] != '\0'; i++)
        ; //文字数のカウント
    printf("%d文字が入力されました。\n", i);
    printf("Flagの先頭の文字を入力してください。\n");
    scanf("%s", input);
    for (cnt = 1; cnt < 26; cnt++)
    {
        for (k = 0; k < i; k++)
        {
            if (caesar[k] == 'z' || caesar[k] == 'Z')
            {
                if (input[0] == caesar[k] && k == 0)
                {
                    printf("Flagはこれです: ");
                }
                caesar[k] = caesar[k] - 25;
                printf("%c", caesar[k]);
            }
            else if ('a' <= caesar[k] && 'z' > caesar[k] || 'A' <= caesar[k] && 'Z' > caesar[k])
            {
                if (input[0] == caesar[k] + 1 && k == 0)
                {
                    printf("Flagはこれです: ");
                }
                caesar[k] = caesar[k] + 1;
                printf("%c", caesar[k]);
            }
            else
            {
                printf("%c", caesar[k]);
            }
        }
        printf("\n");
    }
}
