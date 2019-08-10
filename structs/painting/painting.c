#include "painting.h"

void initializePainting(painting *painting, int height, int width){
    int i=0;

    setCoordinate(&(painting->coordinate), width, height);
    painting->height=height;
    painting->width=width;

    for(i=0;i<width;i++){
        painting->coordinate[0][i].filled=1;
        (*painting->coordinate[0][i].content)='-';
    }
    for(i=1;i<height-1;i++){
        painting->coordinate[i][width-1].filled=1;
        (*painting->coordinate[i][width-1].content)='|';
    }
    for(i=0;i<width;i++){
        painting->coordinate[height-1][i].filled=1;
        (*painting->coordinate[height-1][i].content)='-';
    }
    for(i=1;i<height-1;i++){
        painting->coordinate[i][0].filled=1;
        (*painting->coordinate[i][0].content)='|';
    }
}

void paintWithFigure(painting *painting, figure *figure, int frequence){
    srand(time(NULL));
    int painted=0;
    int x=0;
    int y=0;
    if(frequence<1){
        frequence=rand()%(100+1-1)+1;
    }else if(frequence>100){
        frequence=100;
    }

    for(int f=0; f<frequence; f++){
        painted=0;
        while(!painted){

            int free=1;
            x=rand()%(((painting->width)-0)+1-1)+1;
            y=rand()%(((painting->height)-0)+1-1)+1;

            if(((painting->width-1)-x)>=figure->width && ((painting->height-1)-y)>=figure->height){
                for(int i=0; i<figure->height;i++){
                    for(int j=0; j<figure->width;j++){
                        if(painting->coordinate[y+i][x+j].filled==1 && figure->coordinate[i][j].filled==1){
                            i=figure->height;
                            j=figure->width;
                            free=0;
                        }
                    }    
                }

                if(free){
                    painted=1;
                    for(int i=0; i<figure->height;i++){
                        for(int j=0; j<figure->width;j++){
                            if((*figure->coordinate[i][j].content)!=' '){
                                painting->coordinate[y+i][x+j]=figure->coordinate[i][j];
                            }
                        }    
                    }
                }
            }
        }
    }

}
void paintWithRandomFigures(painting *painting, figure *figure, int quantityFigures, int frequence){

    printf("%d\n", painting->width);
    srand(time(NULL));
    int painted=0;
    int randomFigure=0;
    int x=0;
    int y=0;
    if(frequence<1){
        frequence=rand()%(100+1-1)+1;
    }else if(frequence>100){
        frequence=100;
    }

    for(int f=0; f<frequence; f++){
        randomFigure=rand()%((quantityFigures-1)+1-0)+0;
        
        painted=0;
        while(!painted){
            
            int free=1;
            x=rand()%(((painting->width)-0)+1-1)+1;
            y=rand()%(((painting->height)-0)+1-1)+1;

            //printf("%d\n", painting->width);

            if(((painting->width-1)-x)>=figure[randomFigure].width && ((painting->height-1)-y)>=figure[randomFigure].height){
                
                for(int i=0; i<figure[randomFigure].height;i++){
                    for(int j=0; j<figure[randomFigure].width;j++){
                        if(painting->coordinate[y+i][x+j].filled==1 && figure[randomFigure].coordinate[i][j].filled==1){
                            i=figure[randomFigure].height;
                            j=figure[randomFigure].width;
                            free=0;
                        }
                    }    
                }

                if(free){
                    painted=1;
                    for(int i=0; i<figure[randomFigure].height;i++){
                        for(int j=0; j<figure[randomFigure].width;j++){
                            if((*figure[randomFigure].coordinate[i][j].content)!=' '){
                                painting->coordinate[y+i][x+j]=figure[randomFigure].coordinate[i][j];
                            }
                        }    
                    }
                }
            }
            
        }
    }
}
void showPainting(painting *painting){
    for(int i=0; i<painting->height; i++){
        for(int j=0; j<painting->width;j++){
            printf("%c", (*painting->coordinate[i][j].content));
        }
        printf("\n");
    }
}