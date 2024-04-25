#ifndef SERPENT_H
#define SERPENT_H
#include "positionxy.h"

class Serpent
{
public:

    // Attributs - variables de classe
    positionXY carEffacement;
    positionXY corps[100];
    positionXY direction;
    int longueur;
    positionXY tete;

    // Méthodes ou fonction de classe
    Serpent();

    void afficheSerpent();
    void allongeSerpent();
    void deplaceSerpent();
    void initSerpent();
    bool mortSerpent();
};

#endif // SERPENT_H
