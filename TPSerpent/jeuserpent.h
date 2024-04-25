#ifndef JEUSERPENT_H
#define JEUSERPENT_H
#include "plateaujeu.h"
#include "serpent.h"
#include "vitamine.h"




class JeuSerpent
{
public:
    // attributs ou variable de classe
    JeuSerpent();
    void jouerJeuSerpent();

private:
    int vitesse;
    PlateauJeu plateau;
    Serpent boa;
    Vitamine appat;









};

#endif // JEUSERPENT_H
