
#include<stdio.h>
int main()
{
	int b=2,i,n1,n2;
	scanf("%d%d",&n1,&n2);
     for( i=n1;i<n2;i++)
    {
    while(b<i)
	   {
          if(i%b==0)
		  {

	       break;
		  }
	      else
		  {
			 if(b==i-1)
			 {
			 printf("%d ",i);
		     }
		  }
		     b++;
	   }
	         b=2;
    }
}
