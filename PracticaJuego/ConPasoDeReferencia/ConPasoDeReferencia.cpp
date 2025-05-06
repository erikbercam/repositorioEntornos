#include <iostream>
#include <cstdlib>

using namespace std;

// Estructura para representar a un personaje (héroe o enemigo)
struct Personaje {
    string nombre;
    int vida;
};

// Función para que el héroe ataque al enemigo
void ataqueAliado(Personaje& enemigo) {
    int damage = rand() % 5;  // Daño aleatorio entre 0 y 4
    cout << "You have made " << damage << " points of damage to " << enemigo.nombre << "!" << endl;
    enemigo.vida -= damage;
}

// Función para que el enemigo ataque al héroe
void ataqueEnemigo(Personaje& heroe) {
    int damage = rand() % 5;  // Daño aleatorio entre 0 y 4
    cout << heroe.nombre << " has taken " << damage << " points of damage!" << endl;
    heroe.vida -= damage;
}

// Función para mostrar el estado actual del combate
void mostrarEstado(const Personaje& heroe, const Personaje& enemigo) {
    cout << heroe.nombre << "'s life: " << heroe.vida << " | "
        << enemigo.nombre << "'s life: " << enemigo.vida << endl;
}

// Función principal del juego
void juegoPractica() {
    // Inicialización de los personajes
    Personaje heroe = { "Hero", 10 };
    Personaje enemigo = { "Enemy", 10 };
    char ataque;

    srand(static_cast<unsigned>(time(0)));  // Inicialización del generador aleatorio

    while (heroe.vida > 0 && enemigo.vida > 0) {
        mostrarEstado(heroe, enemigo);

        cout << "It's your turn, do you want to attack the enemy? (Y/N)" << endl;
        cin >> ataque;

        if (ataque == 'Y' || ataque == 'y') {
            ataqueAliado(enemigo);  // Héroe ataca al enemigo
        }
        else if (ataque == 'N' || ataque == 'n') {
            cout << "Bad decision, now the enemy can defeat you!" << endl;
        }
        else {
            cout << "Invalid input! You lose your turn." << endl;
        }

        if (enemigo.vida <= 0) {
            cout << "Congratulations, you defeated the enemy!" << endl;
            return;
        }

        cout << "Keep alert, now it's the enemy's turn!" << endl;

        ataqueEnemigo(heroe);  // Enemigo ataca al héroe

        if (heroe.vida <= 0) {
            cout << "The enemy defeated you, try another time!" << endl;
            return;
        }
    }
}

int main() {
    juegoPractica();
    return 0;
}
