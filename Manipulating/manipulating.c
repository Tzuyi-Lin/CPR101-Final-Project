// header file
#include "manipulating.h"
// standard input library
#include <stdio.h>
// string library
#include <string.h>

void manipulating()
{
  /* Version 1 */
  printf("*** Start of Concatenating String Demo ***\n");
  // 2 strings of size 80
  char string1[BUFFER_SIZE];
  char string2[BUFFER_SIZE];
  do
  {
    printf("Type the first string (q - to quit):\n");
    fgets(string1, BUFFER_SIZE, stdin);
    // make the last element of the entered string the NULL terminator to signify the end of the string
    string1[strlen(string1) - 1] = '\0';
    // if statement to check whether the user decides to quit with command q
    if ((strcmp(string1, "q") != 0))
    {
      printf("Type the second string:\n");
      fgets(string2, BUFFER_SIZE, stdin);
      // make the last element of the entered string the NULL terminator to signify the end of the string
      string2[strlen(string2) - 1] = '\0';
      // append string2 to string1
      strcat(string1, string2);
      // result of the manipulation
      printf("Concatenated string is \'%s\'\n", string1);
    }
    // iterate only if user did not enter q for the first string
  } while ((strcmp(string1, "q") != 0));

  /* Version 2 */
  printf("*** Start of Comparing Strings Demo ***\n");
  char compare1[80];
  char compare2[80];
  int result;

  printf("Type the 1st string to compare (q - to quit):\n");
  gets(compare1);
  while (strcmp(compare1, "q") != 0)
  {
    printf("Type the 2nd string to compare:\n");
    
    gets(compare2);
    result = strcmp(compare1, compare2);
    if (result < 0)
      printf("1st string is less than 2nd\n");
    else if (result == 0)
      printf("1st string is equal than 2nd\n");
    else
      printf("1st string is greater than 2nd\n");

    printf("Type the 1st string to compare (q - to quit):\n");

    gets(compare1);
  }

  printf("*** End of Comparing Strings Demo ***\n\n");

  /* Version 3 */
}