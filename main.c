#include <stdio.h>
#include <stdlib.h>

#define N_STUDENT 5

int main(int argc, char *argv[])
{
  int i;
  int grade[N_STUDENT];
  printf("5���� ������ �Է��ϼ���.\n");
  
  for (i=0; i<N_STUDENT; i++)
      scanf("%d", &grade[i]);
  
  
  for (i=0; i<N_STUDENT; i++)
  {
      printf("grade[%i] = %i\n", i, grade[i]);
  }
  
  system("PAUSE");	
  return 0;
}
