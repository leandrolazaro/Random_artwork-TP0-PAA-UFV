#include "pixel.h"

int getFilled(pixel *pixel){
    return pixel->filled;
}
void setFilled(pixel *pixel, int filled){
    pixel->filled=filled;
}
char* getContent(pixel *pixel){
    return pixel->content;
}
void setContent(pixel *pixel, char* content){
    pixel->content=content;
}