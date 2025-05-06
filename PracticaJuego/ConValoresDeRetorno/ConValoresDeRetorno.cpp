#include <iostream>
#include <cstdlib>

using namespace std;

// Función para que el héroe ataque al enemigo
int ataqueAliado(int vidaEnemy) {
    int damage = rand() % 5;  // Daño aleatorio entre 0 y 4
    cout << "You have made " << damage << " points of damage to the enemy!" << endl;
    return vidaEnemy - damage;  // Devuelve la vida restante del enemigo
}

// Función para que el enemigo ataque al héroe
int ataqueEnemigo(int vidaHero) {
    int damage = rand() % 5;  // Daño aleatorio entre 0 y 4
    cout << "The enemy has made " << damage << " points of damage to you, keep alert!" << endl;
    return vidaHero - damage;  // Devuelve la vida restante del héroe
}

// Función para mostrar el estado actual del combate
void mostrarEstado(int vidaHero, int vidaEnemy) {
    cout << "Your life: " << vidaHero << " | Enemy life: " << vidaEnemy << endl;
}

// Función principal del juego
void juegoPractica() {
    int vidaHero = 10;       // Vida inicial del héroe
    int vidaEnemy = 10;      // Vida inicial del enemigo
    char ataque;

    srand(static_cast<unsigned>(time(0)));  // Inicialización del generador aleatorio

    while (vidaHero > 0 && vidaEnemy > 0) {
        mostrarEstado(vidaHero, vidaEnemy);

        cout << "It's your turn, do you want to attack the enemy? (Y/N)" << endl;
        cin >> ataque;

        if (ataque == 'Y' || ataque == 'y') {
            vidaEnemy = ataqueAliado(vidaEnemy);  // Actualizamos la vida del enemigo
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

        vidaHero = ataqueEnemigo(vidaHero);  // Actualizamos la vida del héroe

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
