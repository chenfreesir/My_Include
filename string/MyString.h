#include <stdlib.h>

/*------------------------------------------------------------------*
*--- Function: myStrlen                                          ---*
*--- Des: Calculate the input string's length                    ---*
*--- Input                                                       ---*
*------ str: input string                                     ------*
*--- Output: the length of the string                            ---*
*------------------------------------------------------------------*/
int myStrlen(const char* str);

/*-------------------------------------------------------------------------------------*
*--- Function: myStrstr                                                             ---*
*--- Des: Find the first address which destination string find in the source string ---*
*--- Input                                                                          ---*
*------ sour: using to find destination string                                   ------*
*------ dest: string which need find in the source string                        ------*
*--- Output: The first matching address in the str-sour                             ---*
*-------------------------------------------------------------------------------------*/
int myStrstr(const char* sour, const char* dest);