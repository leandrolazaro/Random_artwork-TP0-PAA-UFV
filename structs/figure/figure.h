#ifndef FIGURE_H
#define FIGURE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../pixel/pixel.h"
#include "../generic/generic.h"

typedef struct figure{
    int width;
    int height;
    pixel **coordinate;
}figure;

void initializeFigure(figure *figure, char *fileName);
int getWidth(figure *figure);
void setWidth(figure *figure, int width);
int getHeight(figure *figure);
void setHeight(figure *figure, int height);
pixel* getPixel(figure *figure, int x, int y);
void showFigure(figure *figure);


#endif