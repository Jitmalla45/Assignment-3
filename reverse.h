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
reverse_substring: Declares the function for reversing a substring of a given string.
find_next_start: Declares the function to find the start index of the next word in the string.
find_next_end: Declares the function to find the end index of the current word in the string.
reverse_words: Declares the function to reverse all words in the given string.*/