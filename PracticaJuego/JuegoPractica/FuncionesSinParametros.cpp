#include <iostream>
#include <cstdlib>


using namespace std;

int ataqueAliado(int& vidaEnemy) {
    int damage = rand() % 5 ;  
    cout << "You have made " << damage << " points of damage to the enemy!" << endl;
    vidaEnemy -= damage;
    return damage;
}

int ataqueEnemigo(int& vidaHero) {
    int damage = rand() % 5;  
    cout << "The enemy has made " << damage << " points of damage to you, keep alert!" << endl;
    vidaHero -= damage;
    return damage;
}

void mostrarEstado(int vidaHero, int vidaEnemy) {
    cout << "Your life: " << vidaHero << " | Enemy life: " << vidaEnemy << endl;
}

void juegoPractica() {
    int vidaHero = 10;
    int vidaEnemy = 10;
    char ataque;

    srand(static_cast<unsigned>(time(0)));

    while (vidaHero > 0 && vidaEnemy > 0) {
        mostrarEstado(vidaHero, vidaEnemy);

        cout << "It's your turn, do you want to attack the enemy? (Y/N)" << endl;
        cin >> ataque;

        if (ataque == 'Y' || ataque == 'y') {
            ataqueAliado(vidaEnemy);
        }
        else if (ataque == 'N' || ataque == 'n') {
            cout << "Bad decision, now the enemy can defeat you!" << endl;
        }
        else {
            cout << "Invalid input! You lose your turn." << endl;
        }

        if (vidaEnemy <= 0) {
            cout << "Congratulations, you defeated the enemy!" << endl;
            return;
        }

        cout << "Keep alert, now it's the enemy's turn!" << endl;

        ataqueEnemigo(vidaHero);

        if (vidaHero <= 0) {
            cout << "The enemy defeated you, try another time!" << endl;
            return;
        }
    }
}

int main() {
    juegoPractica();
    return 0;
}