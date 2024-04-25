#include "serpent.h"

Serpent::Serpent()
{

}

void Serpent::afficheSerpent()
{

// Afficher le corps du serpent
        for (int i = 0; i < longueur; i++) {
            gotoxy(corps[i].posX + offsetX,corps[i].posY + offsetY);

            cout << char(3000);
            // Afficher la tête du serpent
                   gotoxy(tete.posX + offsetX, tete.posY + offsetY);
                   cout << char(1);
          }



// donne les coordonnées de fin de serpent pour gerer l'affacement lors du deplacement
      gotoxy(carEffacement.posX + offsetX ,carEffacement.posY + offsetY );
      cout <<  " " << endl;


}
void Serpent::deplaceSerpent()
{
    // Enregistrer les coordonnées de fin de serpent pour effacement plus tard
    carEffacement.posX = corps[longueur - 1].posX ;
    carEffacement.posY = corps[longueur - 1].posY ;

    // Déplacer la tête du serpent

     tete.posX += direction.posX;
     tete.posY += direction.posY ;

     // Déplacer le corps du serpent en suivant la tete
     for (int i = longueur - 1; i > 0; i--) {
        corps[i].posX = corps[i - 1].posX;
        corps[i].posY = corps[i - 1].posY;

     }

    // Mettre à jour la position du premier élément du corps
     corps[0].posX = tete.posX;
     corps[0].posY = tete.posY;

}


void Serpent::allongeSerpent()
{

    corps[longueur].posX = corps[longueur -1].posX;
    corps[longueur].posY = corps[longueur-1].posY;
    gotoxy(8,15);
    cout << "Votre score est : " <<longueur++ ;
}



void Serpent::initSerpent()
{
 // Initialiser la longueur du serpent à 1
    longueur = 1;

 // Initialiser la position de la tête du serpent
      tete.posX = 15;
      tete.posY = 5;

 // Initialiser la direction du serpent à droite
      direction.posX = 1;
      direction.posY = 0;

  // initialiser le corp du serpent
      for (int i = 0 ; i <longueur; i++)
      {
          corps[i].posX = tete.posX;
          corps[i].posY = tete.posY +i ;

      }




}

bool Serpent::mortSerpent()
{

    // Vérifier si la tête du serpent est en dehors des limites du plateau

    if (tete.posX < 1 || tete.posX >= offsetX + offsetX || tete.posY < 1 || tete.posY >= offsetY + offsetY )
    {
      return false;
    }


        // Vérifier si la tête du serpent entre en collision avec son propre corps
        for (int i = 0; i < longueur; i++) {
          if (tete.posX + offsetX + offsetX  == corps[i].posX && tete.posY  +offsetY + offsetY == corps[i].posY)
          {
            cout << "vous avez perdu" << endl;
            return false;
          }

    }



}




