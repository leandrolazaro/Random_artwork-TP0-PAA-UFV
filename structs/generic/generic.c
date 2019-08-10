#include "generic.h"


void setCoordinate(pixel ***coordinate, int width, int height){
    char *espace=NULL;
    (*coordinate)=malloc(height*sizeof(pixel*));
    for (int i=0; i < height; i++){
       (*coordinate)[i] =malloc(width*sizeof(pixel)); 
       for (int j = 0; j < width; j++){ 
            espace=malloc(sizeof(char));
            *espace=' ';
            (*coordinate)[i][j].filled=0; 
            (*coordinate)[i][j].content=espace; 
       }
    } 
}