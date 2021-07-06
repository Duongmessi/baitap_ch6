#include<stdio.h>
#include<string.h>

typedef struct {
    char nameThuoc[20];
    int yearHetHan;
    int soLuong;
    int donGia;
}THUOC;

int main()
{
    THUOC ds[100];
    char tmp[20];
    int n, i, count = 0, namhientai, k, d, S = 0;
    i = 0;
    do
    {
        printf("\nNhap ten thuoc: ");
        fflush(stdin);
        gets(ds[i].nameThuoc);

        if ( strcmp(ds[i].nameThuoc, "***") == 0 )
        {
            break;
        }
        
        printf("\nNam het han: ");
        scanf("%d", &ds[i].yearHetHan);

        printf("\nSo luong con: ");
        scanf("%d", &ds[i].soLuong);

        printf("\nDon gia (VND/sanpham): ");
        scanf("%d", &ds[i].donGia);

        i++;
        count++;
    } while (1);
    printf("\nDanh sach thuoc: ");
    for ( i = 0; i < count; i++)
    {
        printf("\n%d. %s",i+1, ds[i].nameThuoc);
    }
    
    printf("\nNhap nam hien tai: ");
    scanf("%d", &namhientai);
    //Danh sach thuoc chua het han.
    k=0;
    printf("\nDanh sach thuoc chua het han: ");
    for (i = 0; i < count; i++)
    {
        if(ds[i].yearHetHan >= namhientai)
        {
            printf("\n%d. %s", k+1, ds[i].nameThuoc);
        }

    }
    //tinh tong gia tri thuoc da het han.
    for (i = 0; i < count; i++)
    {
        if(ds[i].yearHetHan <= namhientai)
        {
            S = S + ds[i].soLuong * ds[i].donGia;
        }

    }
    //xoa thuoc da het han.
    d = 0; 
    for (i = 0; i < count ; i++)
    {
        if(ds[i].yearHetHan >= namhientai)
        {
            strcpy(tmp, ds[i].nameThuoc);
            strcpy(ds[d].nameThuoc, ds[i].nameThuoc); //gan xau ky tu thu i thanh thu 0.
            strcpy(ds[i].nameThuoc, tmp);
            d++; //gap duoc cai nao la tang cai day
        }
       

    }
    //count = d; // gan count = d.
    printf("\nDanh sach thuoc moi sau khi loc: ");
    for ( i = 0; i < d; i++)
    {
        printf("\n%d. %s",i+1, ds[i].nameThuoc);
    }

    //Dua ra danh sach thuoc duoc sap xep theo nam het han.
    printf("\nDanh sach thuoc het han: ");
    for (i = count-1 ; i >= count - d; i--)
    {
        printf("\n%d. %s",i+1, ds[i].nameThuoc);

    }

}

