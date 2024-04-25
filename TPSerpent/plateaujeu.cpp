#include "plateaujeu.h"

PlateauJeu::PlateauJeu()
{

}

void PlateauJeu::afficherPlateau()
{
    for (int i = 0; i < 61; i++) {
      // Horizontale
      gotoxy(offsetX + i, offsetY);
      cout << char(209);
      gotoxy(offsetX + i, offsetY + 20);
      cout << char(209);
    }

    for (int i = 0; i < 21; i++) {
      // Verticale
      gotoxy(offsetX + 60, offsetY + i);
      cout << char(186);
      gotoxy(offsetX, offsetY + i);
      cout << char(186);
    }

}

