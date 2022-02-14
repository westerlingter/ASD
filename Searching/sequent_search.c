
#include <stdio.h>

int main()
{
    int n, i, Data[10], cari; //jumlah=0;
    printf("mau input brp data?");
    scanf("%d",&n);
    printf("masukan %d integer(s) \n",n);
    for (i=0; i<n; i++)
        scanf("%d",&Data[i]);

    printf("cari anggka berapa? ");
    scanf("%d",&cari);
    for(i=0; i<n; i++)
    {
        if(Data[i]==cari)
        {
            printf("angka %d ketemu, dan tersimpan di index %d \n", cari, i);
            //break;
            //jumlah ++;
        }
    }
        if (cari!=Data)
        printf("Angka %d tidak ditemukan! ",cari);




    return 0;
}

