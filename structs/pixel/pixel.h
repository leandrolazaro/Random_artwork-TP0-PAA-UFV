#ifndef PIXEL_H
#define PIXEL_H

#include <stdio.h>
#include <stdlib.h>

typedef struct pixel{
    int filled;
    char* content;
}pixel;

int getFilled(pixel *pixel);
void setFilled(pixel *pixel, int filled);
char* getContent(pixel *pixel);
void setContent(pixel *pixel, char* content);

#endif