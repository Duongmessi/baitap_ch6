#include<stdio.h>
#include<string.h>
#include<ctype.h>


typedef struct {
    char name[30];
    float toan;
    float ly;
    float hoa;
} THISINH;

int main()
{
    THISINH ds[100];
    int i, n = 0, k, count = 0;
    float diemChuan, max;
    
    i = 0;
    while(1)
    {
       
        printf("\nNhap vao thi sinh thu %d ", n+1);

        printf("\nVui long nhap ho ten: "); 
        fflush(stdin);
        gets(ds[i].name);

        if(strlen(ds[i].name) == 0 ) break; //neu do dai cua chuoi nhap vao = 0 thi dung.
        
        printf("\nNhap diem toan: "); 
        scanf("%f", &ds[i].toan);

        printf("\nNhap diem ly: "); 
        scanf("%f", &ds[i].ly);

        printf("\nNhap diem hoa: "); 
        scanf("%f", &ds[i].hoa);
        i++;
        n++;
        

    }
    
    printf("\nNhap vao diem chuan: ");
    scanf("%f", &diemChuan);
    //danh sach trung tuyen.
    printf("\nDanh sach thi sinh trung tuyen:");
    printf("\n%4s %-32s  %-5s", "STT", "Ho va Ten", "So Diem");
    k = 1;
    for ( i = 0; i < n; i++)
    {
        if ( ds[i].toan + ds[i].ly + ds[i].hoa >= diemChuan )
        {
            printf("\n%4d %-32s %-4.2f", k, ds[i].name, ds[i].toan + ds[i].ly + ds[i].hoa);
            k++;
        }
         
    }
    printf("\n");  
    //Tim thi sinh co diem cao nhat.
    max = ds[0].toan + ds[0].ly + ds[0].hoa;
    
    for ( i = 0; i < n; i++)
    {
        if ( ds[i].toan + ds[i].ly + ds[i].hoa > max )
        {
            max = ds[i].toan + ds[i].ly + ds[i].hoa; // gan max bang chi so nguoi cao diem nhat
            count = i;
        }
         
    }

    // for( i = 0; i < n; i++)
    // {
    //     if(i == max)
    //     {
    //         printf("\nThi Sinh co diem thi cao nhat la: %s voi %.2f diem", ds[i].name, ds[i].toan + ds[i].ly + ds[i].hoa );
    //     }
    // }
    printf("\nThi Sinh co diem thi cao nhat la: %s voi %.2f diem", ds[count].name, ds[count].toan + ds[count].ly + ds[count].hoa );
    

    
    
    



}