#include<stdio.h>
#include<string.h>

typedef struct {
    char hoten[30];
    int namsinh;

} SINHVIEN;

int main()
{
    SINHVIEN ds[100], sv;
    char findName[30];
    int n, i, j, d, k = 0;

    //nhap du lieu cho sinh vien
    printf("\nNhap so luong sinh vien: "); scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("\nNhap du lieu cho sinh vien thu %d. ", i+1);
        
        printf("\nNhap Ho va Ten: ");
        fflush(stdin);
        gets(ds[i].hoten);

        printf("\nNhap nam sinh: ");
        scanf("%d", &ds[i].namsinh);

        printf("\n");
    }
    //a.dua ra DS sinh vien sinh nam 1990
    printf("\nNhung sinh vien sinh nam 1990 la: \n");
    for ( i = 0; i < n; i++)
    {
        
        if (ds[i].namsinh == 1990)
        {
            k++;
            printf("\n%d. %s", k, ds[i].hoten);
        }
        
    }
    //b.nhap ten sinh vien cho biet nam sinh neu tim thay.
    printf("\nNhap ten sinh vien muon tim: ");
    fflush(stdin);
    gets(findName);

    for ( i = 0; i < n; i++)
    {
        if (strcmp(ds[i].hoten, findName) == 0)
        {
            printf("\nSinh vien: %s, sinh nam: %d.\n", ds[i].hoten, ds[i].namsinh);
            d = d + 1;
        }
    }
    if (d == 0)
    {
        printf("\nKhong tim thay.\n");
    }
    
    //c.Dua ra danh sach sinh vien theo thu tu ho va ten.
    printf("\nDanh sach sinh vien da sap xep: \n");
    printf("%4s %-30s  %-5s\n", "STT", "Ho ten", "Nam Sinh");
    for ( i = 0; i < n - 1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (strcmp(ds[i].hoten, ds[j].hoten) > 0)
            {
                sv = ds[i];
                ds[i] = ds[j];
                ds[j] = sv;

            }
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        printf("%4d. %-30s  %5d\n", i+1, ds[i].hoten, ds[i].namsinh);
    }
    



}
