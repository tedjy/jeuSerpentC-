#include "jeuserpent.h"


JeuSerpent::JeuSerpent()
{


}

void JeuSerpent::jouerJeuSerpent()
{
system("color 20");

//variables
    char choix;

system("cls");
    do
    {
system("cls");

        plateau.afficherPlateau(); //methode de la classe PlateauJeu qui affiche la presentation
        boa.initSerpent(); // méthode de la classe Serpent initialisant les attributs de cette classe
        appat.deplaceVitamine(); // méthode de la classe Vitamine calculant les paramètres vit.posX
        // et vit.posY de façon aléatoire sur le plateau du jeu
        vitesse = 150; // vitesse à 150
        boa.afficheSerpent(); // méthode de la classe Serpent qui affiche le serpent sur le plateau
        gotoxy(35, 5);
         cout << "Appuyez sur une touche pour demarrer la partie." << endl;
        cout << "Jeux du serpent by teddy" << endl;

        cin.get();

            //afficher la longueur du seprent

            do {
              appat.afficheVitamine();
              if (boa.tete.posX == appat.vit.posX && boa.tete.posY == appat.vit.posY) {
                boa.allongeSerpent();

                appat.deplaceVitamine();
              }

              if (kbhit()) {
                         char choix = getch();
                         switch (choix) {
                         case 72:
                             boa.direction.posX = 0;
                             boa.direction.posY = -1;
                             break;
                         case 80:
                             boa.direction.posX = 0;
                             boa.direction.posY = 1;
                             break;
                         case 75:
                             boa.direction.posX = -1;
                             boa.direction.posY = 0;
                             break;
                         case 77:
                             boa.direction.posX = 1;
                             boa.direction.posY = 0;
                             break;
                         }
                     }

              boa.deplaceSerpent();
              boa.afficheSerpent();


                  Sleep(vitesse);
            } while (boa.mortSerpent() == 1);
                   gotoxy(45, 20);
            cout << "Perdu !" ;
        cout << "Voulez-vous recommencer (o/n) ? ";

           cin >> choix;
          } while (choix != 'n' && choix != 'N');

          return;
system("cls");
}







