#include <string.h>                                                            //Serkan Can EYVAZ 02210224021  
#include <stdlib.h>
#include <stdio.h>
int main()
{
    char dosyaAdi[255];
    printf("dosya adini giriniz:");
    gets(dosyaAdi);

    char dizi[255];
    char token[255];
    char son[255];
    FILE *dosya = fopen(dosyaAdi, "r");
    int i = 0;
    printf("kaynak kod:\n");
    while (!feof(dosya))
    {
        fscanf(dosya, "%c", &dizi[i]);
        printf("%c", dizi[i]);
        i++;
    }
    fclose(dosya);
    int j = 0;
    printf("\n \nkelimelistirme islemi: \n");
    while (j < i)
    {
        if (dizi[j] != (int)10)
        {
            token[j] = dizi[j];

            if (token[j] == (int)32 || token[j] == (int)44 || token[j] == (int)91 || token[j] == (int)93)
            {
                token[j] = token[j + 1];
            }
            else
            {
                son[j] = token[j];
                printf("%c", son[j]);
            }
        }
        else
        {
            dizi[j] = dizi[j + 1];
        }
        j++;
    }
}
