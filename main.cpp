// Fichier     main.cpp
// Auteur      Quinn Calum - Nicolas Sonnard
// Date        29.09.2022
//
// But         Calculer le prix d'un repas
//
// Remarque
//
// Modifs      Date / Auteur / Raison
//
// Compilateur Bundled MinGW - Version w64 9.0


#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

// define

#define CLEAR_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define EXIT_PROGRAMME 0
#define TICKET_OK  1
#define TICKET_KO  0
#define RETOUR_LIGNE cout << endl


int main() {

    // constante pour le controle de la saisie        
    const int QTE_MIN = 0;
    const int QTE_MAX = 10;

    // largeur des collones du tableau 
    const int LARG_COL = 25;
    //largeur du ":"
    const int LARG_COL_P = 3;


    //Définition des variables
    const float PRIXENTREE = 4.50,
            PRIXPLAT = 12.50,
            PRIXBOISSON = 3.00,
            PRIXDESSERT = 6.00,
            PRIXCAFE = 2.80;

    int     nbEntree,
            nbPlat,
            nbBoissons,
            nbDessert,
            nbCafe;


    bool ticketStatut = TICKET_KO;


    //Salutations et sortie du menu
    cout << "Bonjour je suis votre serveur, voici le menu: " << endl
         << "===============================" << endl;

    cout << fixed << setprecision(2);
    cout << left << setw(LARG_COL) << "Entree" << setw(LARG_COL_P) << ":" << PRIXENTREE << endl
         << setw(LARG_COL) << "Plat principal" << setw(LARG_COL_P) << ":" << PRIXPLAT << endl
         << setw(LARG_COL) << "Boisson" << setw(LARG_COL_P) << ":" << PRIXBOISSON << endl
         << setw(LARG_COL) << "Dessert" << setw(LARG_COL_P) << ":" << PRIXDESSERT << endl
         << setw(LARG_COL) << "Cafe" << setw(LARG_COL_P) << ":" << PRIXCAFE << endl;


    //Définition des restrictions de saisie
    cout << endl
         << "Si vous etes pret on peut passer a la commande, je dois juste signaler qu'il ne nous reste plus que 10 fois chaque element."
         << endl;

    //Première saisie
    cout << left << setw(LARG_COL) << "Combien voulez-vous d'entrees?";
    cin >> nbEntree;
    CLEAR_BUFFER;

    //Contrôle de la première saisie
    if (nbEntree >= QTE_MIN && nbEntree <= QTE_MAX) {

        //Deuxième saisie
        cout << left << setw(LARG_COL) << "Combien voulez-vous de plats principaux?" << endl;
        cin >> nbPlat;
        CLEAR_BUFFER;

        if (nbPlat >= QTE_MIN && nbPlat <= QTE_MAX) {

            //Troisième saisie
            cout << left << setw(LARG_COL) << "Combien voulez-vous de boissons?" << endl;
            cin >> nbBoissons;
            CLEAR_BUFFER;

            if (nbBoissons >= QTE_MIN && nbBoissons <= QTE_MAX) {

                //Quatrième saisie
                cout << left << setw(LARG_COL) << "Combien voulez-vous de desserts?" << endl;
                cin >> nbDessert;
                CLEAR_BUFFER;

                if (nbDessert >= QTE_MIN && nbDessert <= QTE_MAX) {

                    //Cinquième saisie
                    cout << left << setw(LARG_COL) << "Combien voulez-vous de cafes?" << endl;
                    cin >> nbCafe;
                    CLEAR_BUFFER;


                    if (nbCafe >= QTE_MIN && nbCafe <= QTE_MAX) {
                        ticketStatut = TICKET_OK;
                    }
                }
            }
        }
    }

    if (ticketStatut) {
        cout << endl << "Merci pour votre commande, en voici un resume: " << endl;

        cout << "=============================" << endl;

        cout << fixed << setprecision(2);
        cout << left << setw(LARG_COL) << "Nb d'entrees" << setw(LARG_COL_P) << ":" << nbEntree << endl
             << setw(LARG_COL) << "Nb de plats" << setw(LARG_COL_P) << ":" << nbPlat << endl
             << setw(LARG_COL) << "Nb de boissons" << setw(LARG_COL_P) << ":" << nbBoissons << endl
             << setw(LARG_COL) << "Nb de desserts" << setw(LARG_COL_P) << ":" << nbDessert << endl
             << setw(LARG_COL) << "Nb de cafes" << setw(LARG_COL_P) << ":" << nbCafe << endl;
        RETOUR_LIGNE;
        RETOUR_LIGNE;
        cout << left << setw(LARG_COL) << "Votre ticket " << endl
             << "===============================" << endl;

        cout << fixed << setprecision(2);
        cout << nbEntree  << setw(LARG_COL)         << (nbEntree<=1 ?    " Entree"  :" Entrees")       << setw(LARG_COL_P) << ":" << (float)nbEntree*PRIXENTREE << endl
             << nbPlat << setw(LARG_COL)            << (nbPlat<=1      ?    " Plat"    :" Plats")      << setw(LARG_COL_P) << ":" << (float)nbPlat*PRIXPLAT << endl
             << nbBoissons << setw(LARG_COL)        << (nbBoissons<=1  ?    " Boisson" :" Boissons")   << setw(LARG_COL_P) << ":" << (float)nbBoissons*PRIXBOISSON << endl
             << nbDessert << setw(LARG_COL)         << (nbDessert<=1   ?    " Dessert" :" Desserts")   << setw(LARG_COL_P) << ":" << (float)nbDessert*PRIXDESSERT << endl
             << nbCafe << setw(LARG_COL)            << (nbCafe<=1      ?    " Cafe"    :" Cafes")      << setw(LARG_COL_P) << ":" << (float)nbCafe*PRIXCAFE << endl
             << setw(LARG_COL) << "   Total"                                                           << setw(LARG_COL_P) << ":"<< setw(LARG_COL_P) << (float)nbEntree*PRIXENTREE+(float)nbPlat*PRIXPLAT+(float)nbBoissons*PRIXBOISSON+(float)nbDessert*PRIXDESSERT+(float)nbCafe*PRIXCAFE  << endl;

    } else {
        cout << "Vous avez saisi une quantite impossible, merci de vous en aller.";
    }

    // pause pour lecture du resultat et nettoyage du buffer
    CLEAR_BUFFER;
    return EXIT_PROGRAMME;
}
