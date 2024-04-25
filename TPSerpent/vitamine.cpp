#include "vitamine.h"

Vitamine::Vitamine()
{

}

void Vitamine::afficheVitamine()
{
    gotoxy(offsetX + vit.posX ,offsetY +  vit.posY);
    cout << "O";

}

void Vitamine::deplaceVitamine()
{
    vit.posX = rand() % offsetX +1;
    vit.posY = rand() % offsetY +1;
}
