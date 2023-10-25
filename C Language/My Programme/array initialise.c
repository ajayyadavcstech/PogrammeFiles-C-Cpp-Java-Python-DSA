#include<stdio.h>
  int main()
  {
      int a[5]={12,34,56};
      //a[0]=12,a[1]=34,a[2]=56,a[3]=0
      ,a[4]=0
      int i;
      printf("Array elements are\n");
      for(i=0;i<=4;i++)
        printf("%d ",a[i]);
  }
