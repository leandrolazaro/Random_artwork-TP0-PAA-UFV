#include "figure.h"


void initializeFigure(figure *figure, char *fileName){

    char path[100]="././standard_files/";
    int tempWidth=0;
    int width=0;
    int height=1;
    char ch;
    
    strcat(path, fileName);
    FILE *file_ptr=fopen(path, "r");

    while((ch=fgetc(file_ptr))!=EOF){
        if(ch=='\n'){
            if(tempWidth>width){
                width=tempWidth;
            }
            tempWidth=0;
            height++;
        }else{
            tempWidth++;
        }
        // putchar(ch);
    }
    if(tempWidth>width){
        width=tempWidth;
    }

    //printf("%d, %d\n", height, width);

    fclose(file_ptr);

    setCoordinate(&(figure->coordinate), width, height);
    setWidth(figure, width);
    setHeight(figure, height);

    file_ptr=fopen(path, "r");

    height=1;
    width=0;
    tempWidth=0;

    while((ch=fgetc(file_ptr))!=EOF){
        if(ch=='\n'){
            if(tempWidth>width){
                width=tempWidth;
            }
            tempWidth=0;
            height++;
        }else{
            tempWidth++;
            if(ch!=' '){
                // printf("%d, %d\n", height-1, tempWidth-1);
                figure->coordinate[height-1][tempWidth-1].filled=1; 
                (*figure->coordinate[height-1][tempWidth-1].content)=ch; 
            }
        }
    }

    fclose(file_ptr);

}

int getWidth(figure *figure){
    return figure->width;
}

void setWidth(figure *figure, int width){
    figure->width=width;
}

int getHeight(figure *figure){
    return figure->height;
}

void setHeight(figure *figure, int height){
    figure->height=height;
}

pixel* getPixel(figure *figure, int x, int y){
    return &(figure->coordinate[x][y]);
}

void showFigure(figure *figure){
    for(int i=0; i<figure->height; i++){
        for(int j=0; j<figure->width;j++){
            printf("%c", (*figure->coordinate[i][j].content));
        }
        printf("\n");
    }
}