#include <stdio.h>

int main(void) 
{
  int pin;
  int pin_confirm;

  do{
  printf(" Welcome, create your pin:   ");
  scanf("%d", &pin);

  printf("Great now you re-enter to confirm password: \n");
  scanf("%d", &pin_confirm);
  
                   //printf("incorrect pin: please re-enter: \n");
                    if (pin == pin_confirm)
                            printf("Congratulations, Signed up successfully\n ");
  }while (pin != pin_confirm);
}