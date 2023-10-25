 #include<stdio.h>
 void increase();
 int main()
 {
     increase();
     increase();
     increase();
}
void increase()
{
 static int x=1;
 x++;
  printf("%d\n",x);
}
