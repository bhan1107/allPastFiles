//
//  main.c
//  ProcessPrep
//
//  Created by Ben Han on 2017-11-22.
//  Copyright © 2017 Ben Han. All rights reserved.
//


/*
 * This function pushes an integer onto the top of a stack.
 * Parameters:
 *    1. a stack (NULL or a pointer to the top node)
 *    2. an integer value to push onto the top of the stack
 * Returns a pointer to the start of the modified stack.
 */
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top = -1;
/*
 * Parameter: a stack
 * Returns TRUE if the stack is empty and FALSE if it's not.
 * Does not change the stack.
 */
int isEmpty(Stack *stack) {
    // Note: TRUE and FALSE are constants for 1 and 0, defined
    // in the C standard libraries.
    if (top == -1)
        return TRUE;
    else
        return FALSE;
} // isEmpty


Stack *pushInt(Stack *stack, int value) {
    Stack *modifiedStack = malloc(sizeof(stack));
    modifiedStack->intTop = 1;
    modifiedStack->data.intValue = value;
    modifiedStack->next = stack;
    stack = modifiedStack;
    return stack;
} // end pushInt

/*
 * Parameter: a stack
 * Prints the stack to the standard output from top to bottom,
 * in a format like this:
 *    [1,2,"apple","computer",17,"Queens"]
 * The values are enclosed in square brackets and separated
 * by commas, with no spaces.  There are quotes around the
 * string values so that the user can tell the difference between
 * the number 42 and the string "42".
 * The stack is printed on one line, followed by an end-of-line
 * character.  If the stack is empty the output is "[]", followed
 * by an end of line character.
 */
void printStack(Stack *stack) {
    Stack *on = stack;
    printf("[]");
    
} // end printList

/*
 * This function pushes a string onto the top of a stack.
 * If the string would need more than MAX_STRING_LENGTH
 * characters (including the '\0' at the end) it is
 * truncated.  For example, since MAX_STRING_LENGTH is 11,
 * if we try to put the string "ABCDEFGHIJKLMNOP" into the
 * stack this function will copy only "ABCDEFGHIJ" (plus
 * an ending '\0') into the new stack node.
 *
 * Parameters:
 *    1. a stack (NULL or a pointer to the top node)
 *    2. a string value to push onto the top of the stack
 * Returns a pointer to the start of the modified stack.
 * The string is copied into the stack; the stack will not
 * contain a pointer to the original parameter.
 */
Stack *pushString(Stack *stack, char *value) {
    Stack *modifiedStack = malloc(sizeof(Stack));
    modifiedStack->intTop = 0;
    int i;
    for(i=0; i < 100 ; i++){
        modifiedStack->data.stringValue[i] = value[i];
    }
    modifiedStack->next = stack;
    stack = modifiedStack;
    return stack;
} // end pushString

/*
 * Should not be called with an empty string.
 * Takes a stack as a parameter and returns TRUE
 * if its top element is an integer, false if
 * it's a string.
 */
int topIsInt(Stack *stack) {
    if(stack->intTop){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

/*
 * This function returns the value of the "top" element of a
 * stack if that value is an integer.  Does not change the stack.
 * If this function is called when the stack is empty or when the
 * top element is a string, it writes an error message and returns
 * 0.
 */
int topInt(Stack *stack) {
    
    return stack->intTop;
} // end topInt

/*
 * This function copies the "top" string of a stack into a
 * string supplied by the caller.  The supplied string MUST
 * have enough room for MAX_STRING_LEN characters plus the
 * ending '\0'.  Does not change the stack.
 *
 * If this function is called when the stack is empty or when
 * the top element is an integer, it writes an error message and
 * puts an empty string into the result parameter.
 */
void topString(Stack *stack, char *result) {
} // end topString

/*
* the modified stack.  If called for an empty stack, writes an
* error message and returns the empty stack without changing it.
* Besides changing the stack, it frees the heap space used by
* the popped element.
*/
Stack* pop(Stack *stack) {
    return NULL;
} // end pop

/*
 * This function returns the number of integers in a stack.
 */
int countInts(Stack *stack) {
    return 0;
} // end countInts

/*
 * This function returns the number of strings in a stack.
 */
int countStrings(Stack *stack) {
    return 0;
} // end countStrings

