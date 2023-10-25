
 #include<stdio.h>
 void modify_array(int a[]);
 int main()
 {
     int a[]={12,34,56,78,90},i;
     modify_array(a);// passing entire array
     for(i=0;i<=4;i++)
        {
            printf("%d ",a[i]);
         }
}
void modify_array(int a[])
{
    int i;
    for(i=0;i<=4;i++)
        a[i]=a[i]+1;
}
