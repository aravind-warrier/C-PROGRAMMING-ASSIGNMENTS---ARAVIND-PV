#include <stdio.h>
void main()
{
  int num, i=0, x, d;
  char * train_no [20];
  printf ("Enter an integer value: \n");
  scanf ("%d", &num);
  while (num)
  {
    d = num %10;
    num = num /10;
    switch(d)
    {
      case 0: train_no[i++] = "zero";
      break;
      case 1: train_no[i++] = "one"; 
      break;
      case 2: train_no[i++] = "two"; 
      break;
      case 3: train_no[i++] = "three"; 
      break;
      case 4: train_no [i++] = "four"; 
      break;
      case 5: train_no [i++] = "five"; 
      break;
      case 6: train_no [i++] = "six"; 
      break;
      case 7: train_no [i++] = "seven"; 
      break;
      case 8: train_no [i++] = "eight"; 
      break;
      case 9: train_no[i++] = "nine"; 
      break;
    }
  }
  for(x=i-1; x>=0; x--){
  printf ("%s ",train_no[x]);
  }
}
