// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_ NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

void tokenizing()
{
  /* Version 1 */
  printf("*** Start of Tokenizing Words Demo ***\n");
  char words[BUFFER_SIZE]; // sets the array size of words variable acordly with buzzer size that is equal to 300
  char *nextWord = NULL;   // nextWord sends its input to null
  int wordsCounter;        // declaration of the variable wordsCounter

  do
  {
    printf("Type a few words separated by space (q - to quit):\n"); // message asking for a input
    fgets(words, BUFFER_SIZE, stdin);                               // Read input from the user
    words[strlen(words) - 1] = '\0';
    if (strcmp(words, "q") != 0)
    {
      nextWord = strtok(words, " ");
      wordsCounter = 1;
      while (nextWord)
      {
        printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord); // the final ouput, seprated by words, and says to the user how much words are written
        nextWord = strtok(NULL, " ");
      }
    }
  } while (strcmp(words, "q") != 0); // condition to make the loop working, that means until the input be "q"
  printf("*** End of rokenizing Words Demo ***\n\n"); // message indicating the end of the module

  /* Version 2 */
  printf("*** Start of Tokenizing Phrases Demo ***\n"); // Print a message indicating the start of the tokenizing phrases demo
  char phrases[BUFFER_SIZE];                            // Declare an array to hold the input phrases from the user
  char *nextPhrase = NULL;                              // Initialize a pointer for the next token/phrase to be extracted
  int phrasesCounter;                                   // Declare a counter for tracking the number of phrases processed
  do
  {
    printf("Type a few phrases separated by comma(q - to quit):\n"); // Prompt the user to enter phrases separated by commas; provide an option to quit by entering 'q'
    fgets(phrases, BUFFER_SIZE, stdin);                              // Read a line of input into the phrases buffer, ensuring it does not exceed BUFFER_SIZE
    phrases[strlen(phrases) - 1] = '\0';                             // Replace the newline character at the end of the input with a null terminator
    if ((strcmp(phrases, "q") != 0))
    {                                    // Check if the input string is not equal to "q" (the quit command)
      nextPhrase = strtok(phrases, ","); // Tokenize the input string using strtok, starting with the first token
      phrasesCounter = 1;                // Initialize the counter for the phrases to 1
      while (nextPhrase)
      {                                                               // Loop through all phrases returned by strtok until there are no more tokens
        printf("Phrase #%d is '%s'\n", phrasesCounter++, nextPhrase); // Print the current phrase along with its corresponding counter
        nextPhrase = strtok(NULL, ",");                               // Get the next token (phrase) from the input string
      }
    }
  } while (strcmp(phrases, "q") != 0); // Continue looping until the input is "q"
  printf("*** End of Tokenizing Phrases Demo ***\n"); // Print a message indicating the end of the tokenizing phrases demo

  /* Version 3 */
}
