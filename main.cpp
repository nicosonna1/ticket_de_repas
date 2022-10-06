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


    cout << "Combien de boissons?" <<;
    cin >> nbBoissons >>;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (nbBoissons >= 0 && nbBoissons <= 10) {
        cout << "Merci de votre "
    }
    else {
        cout << "";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }



    return 0;
}
