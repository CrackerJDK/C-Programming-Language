#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int top = -1;

bool IsFull(int capacity)
{
    if (top >= capacity - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool IsEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Push(char stack[], char c, int capacity)
{
    if (IsFull(capacity) == true)
    {
        printf("\nStack is full. Overflow condition!");
    }
    else
    {
        top += 1;
        stack[top] = c;
    }
}

void Pop()
{
    if (IsEmpty() == true)
    {
        printf("\nStack is empty. Underflow condition!");
    }
    else
    {
        top -= 1;
    }
}

int Peek(int stack[])
{
    return stack[top];
}

int Size()
{
    return top + 1;
}

int main()
{
    int capacity;
    
    int i;
    char a[30] = {'E', 'A', 'S', '*', 'Y', '*', 'Q', 'U', 'E', '*', '*', '*', 'S', 'T', '*', '*', '*', 'I', 'O', '*', 'N', '*', '*', '*'};
    int count = 0;
    int length = strlen(a);
    for (i = 0; i < length; i++)
    {
        if (a[i] != '*')
        {
            count += 1;
        }
    }
    capacity = count;
    char stack[capacity];
    // đẩy các phần tử đc lọc vào stack
    int j;
    for (i = 0; i < length; i++)
    {
        if (a[i] != '*')
        {                
            Push(stack, a[i], capacity);
        }
    }

    // Push các phần tử vào mảng stack

    printf("The string after removing the asterisks '*' : %s", stack);
}
