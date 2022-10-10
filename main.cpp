// Fichier     main.cpp
// Auteur      Quinn Calum - Nicolas Sonnard
// Date        6.10.2022
//
// But         Calculer le prix d'un repas
//
// Remarque    Les saisies sont évaluées pour l'appartenance à l'intervalle [0-10] et pas plus
//
// Modifs      Date / Auteur / Raison
//
// Compilateur Bundled MinGW - Version w64 9.0


#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

// define
#define CLEAR_BUFFER    cin.ignore(numeric_limits<streamsize>::max(), '\n')
// exit selon la constante EXIT_SUCCESS
#define EXIT_PROGRAMME  0
#define RETOUR_LIGNE    cout << endl


int main() {

    // constante pour le controle de la saisie        
    const int QTE_MIN = 0;
    const int QTE_MAX = 10;

    // largeur des collones du tableau 
    const int LARG_COL = 25;
    //largeur du ":"
    const int LARG_COL_P = 7;


    //Définition des variables
    const float PRIXENTREE = 4.50,
                PRIXPLAT = 12.50,
                PRIXBOISSON = 3.00,
                PRIXDESSERT = 6.00,
                PRIXCAFE = 2.80;

    int         nbEntree,
                nbPlat,
                nbBoissons,
                nbDessert,
                nbCafe;

    float       prixTotal;

    /*  ici on doit initialiser car on part du principe que le ticket est non valide tant que
        l'utilisateur à pas saisi de valeurs */

    bool ticketStatut = false;


    //Salutations et sortie du menu
    cout << "Bonjour je suis votre serveur, voici le menu: " << endl

         << "===================================" << endl;

    cout    << fixed   << setprecision(2);
    cout    << left    << setw(LARG_COL) << "Entree"           << ":" << right   << setw(LARG_COL_P) << PRIXENTREE  << endl
            << left    << setw(LARG_COL) << "Plat principal"   << ":" << right   << setw(LARG_COL_P) << PRIXPLAT    << endl
            << left    << setw(LARG_COL) << "Boisson"          << ":" << right   << setw(LARG_COL_P) << PRIXBOISSON << endl
            << left    << setw(LARG_COL) << "Dessert"          << ":" << right   << setw(LARG_COL_P) << PRIXDESSERT << endl
            << left    << setw(LARG_COL) << "Cafe"             << ":" << right   << setw(LARG_COL_P) << PRIXCAFE    << endl;


    //Définition des restrictions de saisie
    cout << endl
         << "Si vous etes pret on peut passer a la commande, je dois juste signaler qu'il ne nous reste plus que 10 fois chaque element."
         << endl;

    //Première saisie
    cout << left << setw(LARG_COL) << "Combien voulez-vous d'entrees?" << endl;
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
                        ticketStatut = true;
                    }
                }
            }
        }
    }

    //Résumé de la commande seulement si ticket valide
    if (ticketStatut) {
        cout << endl << "Merci pour votre commande, en voici un resume: " << endl;

        cout << "===================================" << endl;

        cout << fixed << setprecision(2);
        cout    << setw(LARG_COL)           << "Nb d'entrees"   << ":" << right  << setw(LARG_COL_P)   << nbEntree    << endl
                << left << setw(LARG_COL)   << "Nb de plats"    << ":" << right  << setw(LARG_COL_P)   << nbPlat      << endl
                << left << setw(LARG_COL)   << "Nb de boissons" << ":" << right  << setw(LARG_COL_P)   << nbBoissons  << endl
                << left << setw(LARG_COL)   << "Nb de desserts" << ":" << right  << setw(LARG_COL_P)   <<  nbDessert  << endl
                << left << setw(LARG_COL)   << "Nb de cafes"    << ":" << right  << setw(LARG_COL_P)   <<  nbCafe     << endl;
        RETOUR_LIGNE;
        RETOUR_LIGNE;

        //Ticket final avec couts
        prixTotal = (float)nbEntree*PRIXENTREE+(float)nbPlat*PRIXPLAT+(float)nbBoissons*PRIXBOISSON+(float)nbDessert*PRIXDESSERT+(float)nbCafe*PRIXCAFE;
        cout << left << setw(LARG_COL) << "Votre ticket " << endl

             << "===================================" << endl;

        cout << fixed << setprecision(2);
        cout << nbEntree              << setw(LARG_COL) << (nbEntree<=1    ?    " Entree"  :" Entrees")     << ":"  << right    << setw(LARG_COL_P) << (float)nbEntree*PRIXENTREE    << endl
                << left << nbPlat     << setw(LARG_COL) << (nbPlat<=1      ?    " Plat"    :" Plats")       << ":"  << right    << setw(LARG_COL_P) << (float)nbPlat*PRIXPLAT        << endl
                << left << nbBoissons << setw(LARG_COL) << (nbBoissons<=1  ?    " Boisson" :" Boissons")    << ":"  << right    << setw(LARG_COL_P) << (float)nbBoissons*PRIXBOISSON << endl
                << left << nbDessert  << setw(LARG_COL) << (nbDessert<=1   ?    " Dessert" :" Desserts")    << ":"  << right    << setw(LARG_COL_P) << (float)nbDessert*PRIXDESSERT  << endl
                << left << nbCafe     << setw(LARG_COL) << (nbCafe<=1      ?    " Cafe"    :" Cafes")       << ":"  << right    << setw(LARG_COL_P) << (float)nbCafe*PRIXCAFE        << endl
                << left               << setw(LARG_COL) << "   Total"   << " :" << right << setw(LARG_COL_P) << prixTotal                                                            << endl;
        cout << "Merci beaucoup de votre visite!" << endl;
    }
    // message d'erreur saisie invalide
    else {
        cout << "Vous avez saisi une quantite impossible, merci de vous en aller." << endl;
    }

    // pause pour lecture du resultat
    cout << "Pressez enter pour quitter le programme." << endl;
    CLEAR_BUFFER;
    return EXIT_PROGRAMME;
}