#include <stdio.h>

int main()
{
    char inputString[100];

    printf("Masukkan string: ");
    scanf("%[^\n]s", &inputString);

    printf("Karakter unik dari string: ");

    for (int i = 0; inputString[i] != '\0'; i++)
    {
        // Jika inputtan (spasi) Tidak
        if (inputString[i] == ' ')
        {
            continue;
        }

        int isDuplicate = 0;
        for (int j = 0; j < i; j++)
        {
            if (inputString[j] == inputString[i])
            {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate)
        {
            printf("%c ", inputString[i]);
        }
    }

    printf("\n");

    return 0;
}
