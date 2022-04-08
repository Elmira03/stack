#pragma once
struct elem
{
    char value;
    elem* next = nullptr;
};
void push(elem*& stack, int val);
bool pop(elem*& stack, int& value);
char* peek(elem* stack);
void clear(elem*& stack);
