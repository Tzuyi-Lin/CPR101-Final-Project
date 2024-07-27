// CONVERTING MODULE SOURCE
#include "converting.h"

void converting() {
/* Version 1 */
// >> insert here
    printf("*** Start of Converting Strings to int Demo ***\n");

    char intString[BUFFER_SIZE];
    int intNumber;

    do
    {
        printf("Type an numeric string (q - to quit):\n");

        fgets(intString, BUFFER_SIZE, stdin);
        intString[strlen(intString) - 1] = '\0';

        if (strcmp(intString, "q") != 0)
        {
            intNumber = atoi(intString);
            printf("Converted number is %d\n", intNumber);
        }

    } while (strcmp(intString, "q") != 0);

    printf("*** End of Converting String to int Demo ***\n\n");


/* Version 2 */
// >> insert here


/* Version 3 */
// >> insert here


}
