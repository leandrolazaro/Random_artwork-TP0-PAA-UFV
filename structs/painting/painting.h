#ifndef PAINTING_H
#define PAINTING_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "../pixel/pixel.h"
#include "../figure/figure.h"
#include "../generic/generic.h"

typedef struct painting{
    int width;
    int height;
    pixel **coordinate;
}painting;

void initializePainting(painting *painting, int width, int height);
void paintWithFigure(painting *painting, figure *figure, int frequence);
void paintWithRandomFigures(painting *painting, figure *figure, int quantityFigures, int frequence);
void showPainting(painting *painting);

#endif