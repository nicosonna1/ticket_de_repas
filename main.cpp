#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    //Définition des variables
    const float PRIXENTREE  = 4.50,
                PRIXPLAT    = 12.50,
                PRIXBOISSON = 3.00,
                PRIXDESSERT = 6.00,
                PRIXCAFE    = 2.80;

    int     nbEntree,
            nbPlat,
            nbBoissons,
            nbDessert,
            nbCafe;

    float   coutEntree,
            coutPlat,
            coutBoisson,
            coutDessert,
            coutCafe,
            coutTotal;

    int width = 25;

    //Salutations et sortie du menu
    cout << "Bonjour je suis votre serveur, voici le menu: " << endl << "=============================" << endl;

    cout << fixed << setprecision(2);
    cout << left  << setw(width) << "Entree : "         << PRIXENTREE  << endl
                  << setw(width) << "Plat principal : " << PRIXPLAT    << endl
                  << setw(width) << "Boisson : "        << PRIXBOISSON << endl
                  << setw(width) << "Dessert : "        << PRIXDESSERT << endl
                  << setw(width) << "Cafe : "           << PRIXCAFE    << endl;

    //Définition des restrictions de saisie
    cout << endl << "Si vous etes pret on peut passer a la commande, je dois juste signaler qu'il ne nous reste plus que 10 fois chaque element." << endl;

    //Première saisie
    cout << "Combien voulez-vous d'entrees?";
    cin >> nbEntree;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    //Contrôle de la première saisie
    if (nbEntree >= 0 && nbEntree <= 10) {

        //Deuxième saisie
        cout << "Combien voulez-vous de plats principaux?";
        cin >> nbPlat;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (nbPlat >= 0 && nbPlat <= 10) {

            //Troisième saisie
            cout << "Combien voulez-vous de boissons?";
            cin >> nbBoissons;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            if (nbBoissons >= 0 && nbBoissons <= 10) {

                //Quatrième saisie
                cout << "Combien voulez-vous de desserts? gvj tfjzv vztvj vh hvjv jhv jhv jcrhyxjzcktfvjhtfrd  eyxjhfcvkjgj tdhtrdkgk suzg iutfjtdthsd jfrdjfhghg zfjgtkzg kj";
                cin >> nbDessert;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                if (nbDessert >= 0 && nbDessert <= 10) {

                    //Cinquième saisie
                    cout << "Combien voulez-vous de cafes?";
                    cin >> nbCafe;
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    if (nbCafe >= 0 && nbCafe <= 10) {
                        cout << endl << "Merci pour votre commande, en voici un resume: " << endl;
                    }
                    else {
                        cout << "Vous avez commander une quantite impossible, merci de vous en aller.";
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        return 0;
                    }

                }
                else {
                    cout << "Vous avez commander une quantite impossible, merci de vous en aller.";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    return 0;
                }

            }
            else {
                cout << "Vous avez commander une quantite impossible, merci de vous en aller.";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return 0;
            }

        }
        else {
            cout << "Vous avez commander une quantite impossible, merci de vous en aller.";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return 0;
        }

    }
    else {
        cout << "Vous avez commander une quantite impossible, merci de vous en aller.";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }

    cout << "=============================" << endl;

    cout << fixed << setprecision(2);
    cout << left  << setw(width) << "Nb d'entrees : "   << nbEntree   << endl
                  << setw(width) << "Nb de plats : "    << nbPlat     << endl
                  << setw(width) << "Nb de boissons : " << nbBoissons << endl
                  << setw(width) << "Nb de desserts : " << nbDessert  << endl
                  << setw(width) << "Nb de cafes : "    << nbCafe     << endl;


    return 0;
}
