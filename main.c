#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "structs/pixel/pixel.h"
#include "structs/figure/figure.h"
#include "structs/painting/painting.h"

int main(){

    figure **figure=malloc(4*sizeof(*figure));

    for (int i = 0; i < 4; i++){
        figure[i]=malloc(sizeof(figure));
    }

    // pixel *teste=malloc(sizeof(pixel));

    // char *content=malloc(sizeof(char));

    // *content='2';

    // teste->filled=1;

    // teste->content=content;

    // printf("%c", *(teste->content));

    painting *painting=malloc(sizeof(painting));

    initializePainting(painting, 20, 80);

    //showPainting(painting);

    char fileName[20]="x.txt";
    initializeFigure(figure[0], fileName);

    strcpy(fileName, "sum.txt");
    initializeFigure(figure[1], fileName);

    strcpy(fileName, "ponter.txt");
    initializeFigure(figure[2], fileName);

    strcpy(fileName, "cabeca.txt");
    initializeFigure(figure[3], fileName);

    //pixel *teste=getPixel(figure[0], 0, 0);

    //printf("%c\n", *(teste->content));

    //showFigure(figure);

    paintWithFigure(painting, figure[1], -100);

    //paintWithRandomFigures(painting, figure, 3, -5);

    showPainting(painting);

    showFigure(figure[3]);
    

    return 0;
}
