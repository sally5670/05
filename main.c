#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a;
  
  printf("���� �ϳ��� �Է��Ͻÿ�: ");
  scanf("%d", &a);
  
  if(a>0)
       printf("����Դϴ�.");
  else if(a<0)
       printf("�����Դϴ�.");
  else
      printf("0�Դϴ�.");
  
  system("PAUSE");   
  return 0;
}
