// zap280_Práctica9
//Por Gerardo Vera Villarreal estudiante en Amerike

#include <iostream>
#include <random>
#include <time.h>
#include <string>

using namespace std;
//Crear la clase de donde se van a estar tomando sus variables
class personaje
{
public:
    int intelligence;
    int strenght;
    int charisma;
    int agility;
    string name;
    personaje* next;
};

//Prototipos de funciones con parametros definidos, no son necesarios pero muestran claridad a la hora de desarrollarlos
void build_personaje(personaje*& stats, personaje* stats2);
void string_all(personaje* p);
string to_string(personaje* n);
int suma(personaje* s);
personaje* winner(personaje* w);



int main()
{
    personaje* prota1;  //Asignar punteros para crear nuevos guardados de memoria 
    personaje* prota2;  //para ser utilizados por medio de invocaciones
    personaje* prota3;

    prota1 = new personaje();
    prota2 = new personaje();
    prota3 = new personaje();

    //Llenado de valores de cada personaje para que esté pasando de un en uno hasta llegar a NULL
    build_personaje(prota1, prota2);
    build_personaje(prota2, prota3);
    build_personaje(prota3, NULL);

    string_all(prota1);

    cout << endl;
    cout << "El ganador es: " << endl;
    cout << to_string(winner(prota1));
}

//Crear función de los personajes para asignarles valores generados al azar y esten almacenados en un puntero
void build_personaje(personaje*& stats, personaje* stats2) //Ampersand para permitir la modificación del puntero
{
    stats->intelligence = rand() % 11;
    stats->strenght = rand() % 11;
    stats->charisma = rand() % 11;
    stats->agility = rand() % 11;

    stats->next = stats2;  //Para que termine con el llenado de los valores y pase a llenar a otra persona
    cout << "Proporcione un nombre: ";
    getline(cin, stats->name); //Para escribir los nombres correspondientes
}

//Crear función para definir la cantidad de personas permitidas para el llenado de valores y terminar hasta que se detecté NULL
void string_all(personaje* n)
{
    while (n != NULL)
    {
        cout << to_string(n);
        n = n->next;
    }
}

//Función que nos arroje datos de tipo string, no de números, conformando el texto que se imprime en pantalla
string to_string(personaje* p)
{
    string resultado;

    resultado += p->name + "\n";  
    resultado += "Tiene " + to_string(p->intelligence) + " puntos de inteligencia" + "\n"; //Los endl no están permitidos porque necesitan los operadores << 
    resultado += "Tiene " + to_string(p->strenght) + " puntos de fuerza" + "\n";           //pero queremos que arroje un string de vuelta, no números,
    resultado += "Tiene " + to_string(p->charisma) + " puntos de carisma" + "\n";          // optamos por los "\n" para el acomodo
    resultado += "Tiene " + to_string(p->agility) + " puntos de agilidad" + "\n";
    return resultado;
}

//Crear función para que sume los valores asignados al azar de cada personaje 
int suma(personaje* s)
{
    if (s == NULL)
    {
        return 0;
    }
    int resultado = s->intelligence + s->strenght + s->charisma + s->agility;
    return resultado;
}

//Crear función para que esté comparando las cantidades de los personajes y determine ganador
personaje* winner(personaje* w)
{
    personaje* winner = w;
    while (w != NULL)
    {
        if (!(suma(winner) > suma(w->next)))
        {
            winner = w->next;
        }

        w = w->next;

    }
    return winner;
}
