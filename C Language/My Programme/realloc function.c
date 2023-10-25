 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     int *a,i,n1,n2;
     printf("Enter the number of elements\n");
     scanf("%d",&n1);
     a=(int*)malloc(n1*sizeof(int));
     printf("Enter the %d number of elements\n",n1);
     for(i=0;i<=n1-1;i++)
       {
         scanf("%d",&a[i]);
       } printf("\nEntered number of elements\n");
    for(i=0;i<=n1-1;i++)
      {
        printf("%d ",a[i]);
      }
    printf("\nEnter the new number of elements\n");
    scanf("%d",&n2);
    realloc(a,n2*sizeof(int));
    printf("Enter the %d number of elements\n",n2);
    for(i=0;i<=n2-1;i++)
      {
        scanf("%d",&a[i]);
      }
    printf("Entered number of elements\n");
    for(i=0;i<=n2-1;i++)
      {
        printf("%d ",a[i]);
      }
    printf("\n%d\n",a[1]);//realloc use to re allocate the allocated memory

}                        //in this previous memory updated with new allocated memory
