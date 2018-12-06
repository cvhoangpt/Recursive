#include <stdio.h>

int tinhgiaithua(unsigned int i)
{
   if(i <= 1)
   {
      return 1;
   }
   return i * tinhgiaithua(i - 1);
}
int  main()
{
    int i;
    printf("Nhap gia tri cua i: ");scanf("%d",&i);
    printf("Gia tri giai thua cua %d la %d\n", i, tinhgiaithua(i));
    
    printf("\n===========================\n");
    printf("VietJack chuc cac ban hoc tot! \n");
    return 0;
}
