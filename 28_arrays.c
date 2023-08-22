#include <stdio.h>

int main()
{
  // normal process :

  // int marks1, marks2, marks3, marks4;
  // marks1 = 34;
  // marks2 = 45;
  // marks3 = 67;
  // marks4 = 87;
  // arryas:
  int marks[4];

  marks[0] = 34;
  marks[1] = 45;
  marks[2] = 34;
  marks[3] = 67;

  printf("%d\n", marks[0]);
  printf("%d\n", marks[1]);
  printf("%d\n", marks[2]);
  printf("%d\n", marks[3]);

  printf("%d", (marks[0] + marks[1])); 


  return 0;
}
