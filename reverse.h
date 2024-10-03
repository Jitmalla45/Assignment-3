#ifndef REVERSE_H
#define REVERSE_H

// Include necessary libraries
#include <ctype.h>  // For isalpha function
#include <string.h> // For strlen function

// Function prototypes
void reverse_substring(char ss[], int start, int end);
int find_next_start(char ss[], int len, int i);
int find_next_end(char ss[], int len, int i);
void reverse_words(char ss[]);

#endif // REVERSE_H

/* 
Explanation of reverse.h
Include Guards:
#ifndef REVERSE_H and #define REVERSE_H prevent multiple inclusions of this header
file in a single compilation unit, which can lead to errors.

Necessary Includes:
<ctype.h>: Provides the isalpha function used to check if a character is alphabetic.
<string.h>: Provides the strlen function used to calculate the length of the string.

Function Prototypes:
Explanation:
reverse_substring: Reverses a substring of the input string.
find_next_start: Finds the index of the start of the next word.
find_next_end: Finds the index past the end of the current word.
reverse_words: Iterates through the string, reverses each word individually, and skips over non-alphabetic characters.*/
