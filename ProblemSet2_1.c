#include <stdio.h>

int main()
{
  char charInput;
  int isLower;
  int isHigher;

  //Request user input and assigns charInput
  printf("Enter a letter\n");
  scanf("%c", &charInput);

  //Uses ternary operator to assign values for isLower and isHigher
  isLower = (charInput >= 97) ? 1 : 0;
  isHigher = (isLower == 0) ? 1 : 0;

  //Prints result
  printf("%c is Lowercase: %d\n", charInput, isLower);
  printf("%c is Uppercase: %d\n", charInput, isHigher);

  return 0;
}
