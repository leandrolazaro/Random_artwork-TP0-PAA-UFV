#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "structs/pixel/pixel.h"
#include "structs/figure/figure.h"
#include "structs/painting/painting.h"

void setOption(int *option, int *figuresQuantity){
    printf("Digite outra opção ou 9 para retornar ao menu:\n");
    scanf("%d", option);
    printf("\n");
    if((*option)>0 && (*option)<6){
        printf("Digite a quantidade de figuras (menor ou igual a zero para aleatorio):\n");
        scanf("%d", figuresQuantity);
        printf("\n");
    }
}

int main(){

    int option=9;
    int figuresQuantity=0;

    figure **figure=malloc(13*sizeof(*figure));

    for (int i = 0; i < 13; i++){
        figure[i]=malloc(sizeof(figure));
    }

    painting *painting=malloc(sizeof(painting));

    initializePainting(painting, 20, 80);

    char fileName[100]="ponter.txt";
    initializeFigure(figure[0], fileName);

    strcpy(fileName, "sum.txt");
    initializeFigure(figure[1], fileName);

    strcpy(fileName, "x.txt");
    initializeFigure(figure[2], fileName);

    strcpy(fileName, "coracao.txt");
    initializeFigure(figure[3], fileName);

    strcpy(fileName, "pcdob.txt");
    initializeFigure(figure[4], fileName);

    strcpy(fileName, "pco.txt");
    initializeFigure(figure[5], fileName);

    strcpy(fileName, "psol.txt");
    initializeFigure(figure[6], fileName);

    strcpy(fileName, "pt.txt");
    initializeFigure(figure[7], fileName);

    strcpy(fileName, "urss.txt");
    initializeFigure(figure[8], fileName);

    strcpy(fileName, "ak47.txt");
    initializeFigure(figure[9], fileName);

    strcpy(fileName, "impostoehroubo.txt");
    initializeFigure(figure[10], fileName);

    strcpy(fileName, "democraciatbehditadura.txt");
    initializeFigure(figure[11], fileName);

    strcpy(fileName, "donttreadonme.txt");
    initializeFigure(figure[12], fileName);


    while(option!=0){
        int paint=1;
        if(option==9){
            printf("PROGRAMA GERADOR DE OBRA DE ARTE:\n");
            printf("=================================\n");
            printf("Escolha o tipo de figura basica a ser usada para criar a obra:\n");
            printf("1 - asterisco simples\n");
            printf("2 - simbolo de soma com asteriscos.\n");
            printf("3 - letra X com asteriscos.\n");
            printf("4 - figuras aleatorias.\n");
            printf("5 - opcao de obra de arte criada pelo aluno.\n");
            printf("9 - retornar para este menu\n");
            printf("0 - sair\n");
            scanf("%d", &option);
            printf("\n");
            if((option)>0 && (option)<6){
                printf("Digite a quantidade de figuras (menor ou igual a zero para aleatorio):\n");
                scanf("%d", &figuresQuantity);
                printf("\n");
            }
        }else if(option==1){
            while(paint){
                paintWithFigure(painting, figure[0], figuresQuantity);
                showPainting(painting);
                printf("Selecione uma das opcoes:\n");
                printf("=========================\n");
                printf("1 - Para refazer este quadro\n");
                printf("0 - Selecionar outras opcoees\n");
                scanf("%d", &paint);
                printf("\n");
                if(paint){
                    paintWithFigure(painting, figure[0], figuresQuantity);
                    showPainting(painting);
                }
            }
            setOption(&option, &figuresQuantity);
        }else if(option==2){
            while(paint){
                paintWithFigure(painting, figure[1], figuresQuantity);
                showPainting(painting);
                printf("Selecione uma das opcoes:\n");
                printf("=========================\n");
                printf("1 - Para refazer este quadro\n");
                printf("0 - Selecionar outras opcoees\n");
                scanf("%d", &paint);
                printf("\n");
                if(paint){
                    paintWithFigure(painting, figure[1], figuresQuantity);
                    showPainting(painting);
                }
            }
            setOption(&option, &figuresQuantity);
        }else if(option==3){
            while(paint){
                paintWithFigure(painting, figure[2], figuresQuantity);
                showPainting(painting);
                printf("Selecione uma das opcoes:\n");
                printf("=========================\n");
                printf("1 - Para refazer este quadro\n");
                printf("0 - Selecionar outras opcoees\n");
                scanf("%d", &paint);
                printf("\n");
                if(paint){
                    paintWithFigure(painting, figure[2], figuresQuantity);
                    showPainting(painting);
                }
            }
            setOption(&option, &figuresQuantity);
        }else if(option==4){
            while(paint){
                paintWithRandomFigures(painting, figure, 0, 2, figuresQuantity);
                showPainting(painting);
                printf("Selecione uma das opcoes:\n");
                printf("=========================\n");
                printf("1 - Para refazer este quadro\n");
                printf("0 - Selecionar outras opcoees\n");
                scanf("%d", &paint);
                printf("\n");
                if(paint){
                    paintWithRandomFigures(painting, figure, 0, 2, figuresQuantity);
                    showPainting(painting);
                }
            }
            setOption(&option, &figuresQuantity);
        }else if (option==5){
            while(paint){
                paintWithRandomFigures(painting, figure, 9, 12, figuresQuantity);
                //paintWithFigure(painting, figure[3], figuresQuantity);
                showPainting(painting);
                printf("Selecione uma das opcoes:\n");
                printf("=========================\n");
                printf("1 - Para refazer este quadro\n");
                printf("0 - Selecionar outras opcoees\n");
                scanf("%d", &paint);
                printf("\n");
                if(paint){
                    paintWithRandomFigures(painting, figure, 9, 12, figuresQuantity);
                    showPainting(painting);
                }
            }
            setOption(&option, &figuresQuantity);
        }
        
    }



    

    // pixel *teste=malloc(sizeof(pixel));

    // char *content=malloc(sizeof(char));

    // *content='2';

    // teste->filled=1;

    // teste->content=content;

    // printf("%c", *(teste->content));

    

    //showPainting(painting);

    
    //pixel *teste=getPixel(figure[0], 0, 0);

    //printf("%c\n", *(teste->content));

    //showFigure(figure);

    //paintWithFigure(painting, figure[1], -100);

    //paintWithRandomFigures(painting, figure, 3, -5);

    //showPainting(painting);

    //showFigure(figure[3]);
    

    return 0;
}
