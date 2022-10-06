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
int main() {
    // Déclaration des constantes

    // taille des colones
    const int W =25;


    // Accueil de l'utilisateur

    cout    << "bonjour, ce programme ..." << endl
            << "voici les conditions" << endl
            << "================================" << endl
            << left << setw(W) << " - Prise en charge " << ":  " << "5.00" << endl
            << left << setw(W) << " - supp par bagage " << ":  " << "2.50" << endl
            << left << setw(W) << " - tarif/minute " << ":  " << "1.20" << endl
            << left << setw(W) <<endl << endl;
    // Demande des infos à l'utilisateur
    cout    << "votre commande" << endl
            << "================================" << endl;

    cout    << left << setw(W) << "  - nbr de bagage" << ": ";

    // Demandes du nombre de bagage
    cin >> nbBagages;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout    << left << setw(W) << " - distance [km]" << ": ";
    cin >> distanceTotale;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout    << left << setw(W) << " - vitesse [km/h]" << ": ";
    cin >> vitesseMoyenne;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Calcul de la surtaxe des bagages
    float surtaxeBagage = (float) nbBagages * SURTAXE_PAR_BAGAGE;

    // Calcul du temps de la course ( Distance / Vitesse moyenne * 60)
    float tempsCourse = distanceTotale / vitesseMoyenne * 60;

    // Calcul du prix de la course (Tarif par minute * Temps de la course)
    float prixCourse = tempsCourse * TARIF_PAR_MINUTE;

    // Impression du ticket final à l'utilisateur
    cout    << fixed << setprecision(2);
    cout    << "votre ticket" << endl
            << "==================================" << endl
            << left << setw(W) <<  " - prise en charge" << ": " << TAXE_BASE << endl
            << setw(W) <<  " - supp bagage" << ": " << surtaxeBagage << endl
            << setw(W) <<  " - prix de la course" << ": "  << prixCourse << endl
            << setw(W) <<  "  TOTAL" << ": " << prixCourse + surtaxeBagage + TAXE_BASE << endl << endl
            << setw(W) <<  "presser ENTER pour quitter";

    // Cin et attente du enter de l'utilisateur pour quitter le programme
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return 0;
}