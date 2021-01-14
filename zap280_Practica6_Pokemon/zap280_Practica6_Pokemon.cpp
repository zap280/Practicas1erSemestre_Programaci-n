// zap280_Practica6_Pokemon.cpp 
//Creado por Gerardo Vera Villarreal Estudiante de Amerike

#include<iostream>
#include<windows.h>
#include<string>
#include<stdio.h>
#include<locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "spanish");


	char nombre[15];
	int pokemon, eleccion, mov1, mov2, mov3, mov4, mov5, mov6, mov7;

	//Presentación (Profesor Oak, nombre de jugador y elección de pokemon)

	cout << "¡Bienvenido al mundo de Pokémon!" << endl; Sleep(2000);
	cout << " Soy el profesor Oak." << endl; Sleep(2000);
	cout << "Este mundo está habitado por unas criaturas fantásticas llamadas Pokémon."; Sleep(2000);
	cout << " Hoy vas a iniciar tu propia aventura como entrenador de Pokemones." << endl; Sleep(2000);
	cout << "Antes que nada dime:"; Sleep(1000);
	cout << " ¿Cuál es tu nombre?: "; cin >> nombre; Sleep(500);
	cout << "\nAsí que te llamas " << nombre << ", un placer conocerte." << endl; Sleep(2000);
	cout << "¡Muy bien, ahora vas a elegir a tu primer Pokémon!" << endl; Sleep(2000);
	cout << "1. Bulbasaur el Pokémon tipo Planta" << endl; Sleep(2000);
	cout << "2. Charmander el Pokémon tipo Fuego" << endl; Sleep(2000);
	cout << "3. Squirtle el Pokémon tipo Agua" << endl; Sleep(2000);
	cout << "Porfavor elige el número correspondiente de tu Pokémon: "; cin >> pokemon; Sleep(2000);


	//Se elige el pokemon

	switch (pokemon)
	{
	case 1:
		cout << "\n¡Así que Bulbasaur! resulta fácil criarlo y puede hacer muy buen equipo con otros pokemones." << endl; Sleep(2000);
		cout << "Su HP (puntos de vida) es de 100, su ataque es de 35 y sus movimientos son Placaje (golpe) y Gruñido (reduce el ataque)." << endl; Sleep(2000);
		cout << "¡Ahora tendrás una batalla contra mí para prácticar!" << endl << endl; Sleep(2000);
		cout << "¡El Profesor Oak te desafia a una batalla!" << endl; Sleep(2000);
		cout << "¡Profesor Oak envia a Charmander!" << endl; Sleep(2000);
		cout << nombre << " ¡Invoca a Bulbasaur!" << endl << endl;; Sleep(2000);
		break;

	case 2:
		cout << "\n¡Así que Charmander! tenle paciencia pero su evolución vale la pena." << endl; Sleep(2000);
		cout << "Su HP (puntos de vida) es de 100, su ataque es de 35 y sus movimientos son Placaje (golpe) y Gruñido (reduce el ataque)." << endl; Sleep(2000);
		cout << "¡Ahora tendrás una batalla contra mí para prácticar!" << endl << endl; Sleep(2000);
		cout << "¡El Profesor Oak te desafia a una batalla!" << endl; Sleep(2000);
		cout << "¡Profesor Oak envia a Squirtle!" << endl; Sleep(2000);
		cout << nombre << " ¡Invoca a Charmander!" << endl << endl; Sleep(2000);
		break;

	case 3:
		cout << "\n¡Así que Squirtle! vale la pena, se puede adaptar ante cualquier situación." << endl; Sleep(2000);
		cout << "Su HP (puntos de vida) es de 100, su ataque es de 35 y sus movimientos son Placaje (golpe) y Gruñido (reduce el ataque)." << endl; Sleep(2000);
		cout << "¡Ahora tendrás una batalla contra mí para prácticar!" << endl << endl; Sleep(2000);
		cout << "¡El Profesor Oak te desafia a una batalla!" << endl; Sleep(2000);
		cout << "¡Profesor Oak envia a Bulbasaur!" << endl; Sleep(2000);
		cout << nombre << " ¡Invoca a Squirtle!" << endl << endl;; Sleep(2000);
		break;

	default:
		cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
		return main();
		break;
	}

	cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1: Placaje y 2: Gruñido: "; cin >> mov1;

	//Aqui comienza la parte de las batallas

	switch (mov1)
	{
	case 1: //(1) pasos
		cout << "Elegiste Placaje." << endl; Sleep(1000);
		cout << "Los HP del rival han diminuido a 65." << endl; Sleep(1000);
		cout << "El rival usó Gruñido." << endl; Sleep(1000);
		cout << "Tu ataque ha disminuido a 30." << endl << endl; Sleep(1000);
		cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov2;
		switch (mov2)
		{
		case 1: //(1 - 1) pasos
			cout << "Elegiste Placaje." << endl; Sleep(1000);
			cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
			cout << "El rival usó Gruñido." << endl; Sleep(1000);
			cout << "Tu ataque ha disminuido a 25." << endl << endl; Sleep(1000);
			cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov3;
			switch (mov3)
			{
			case 1: //(1 - 1 - 1) pasos
				cout << "Elegiste Placaje." << endl; Sleep(1000);
				cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
				cout << "El rival usó Placaje." << endl; Sleep(1000);
				cout << "Tus HP han disminuido a 65." << endl << endl; Sleep(1000);
				cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov4;
				switch (mov4)
				{
				case 1: //(1 - 1 - 1 - 1 = Victoria) pasos
					cout << "Elegiste Placaje." << endl; Sleep(1000);
					cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
					cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
					cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
					break;

				case 2: //(1 - 1 - 1 - 2) pasos
					cout << "Elegiste Gruñido." << endl; Sleep(1000);
					cout << "El ataque del rival ha disminuido a 30." << endl; Sleep(1000);
					cout << "El rival usó Placaje." << endl; Sleep(1000);
					cout << "Tus HP han disminuido a 35." << endl << endl; Sleep(1000);
					cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov5;
					switch (mov5)
					{
					case 1: //(1 - 1 - 1 - 2 - 1 = Victoria) pasos
						cout << "Elegiste Placaje." << endl; Sleep(1000);
						cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
						cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
						cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
						break;

					case 2: //(1 - 1 - 1 - 2 - 2) pasos
						cout << "Elegiste Gruñido." << endl; Sleep(1000);
						cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(1 - 1 - 1 - 2 - 2 - 1 = Victoria) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
							cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
							cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
							break;

						case 2: //(1 - 1 - 1 - 2 - 2 - 2 = Derrota) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					default:
						cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
					}
					break;

				default:
					cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
					return main();
					break;
				}
				break;

			case 2: //(1 - 1 - 2) pasos
				cout << "Elegiste Gruñido." << endl; Sleep(1000);
				cout << "El ataque del rival ha disminuido a 30." << endl; Sleep(1000);
				cout << "El rival usó Placaje." << endl; Sleep(1000);
				cout << "Tus HP han disminuido a 70." << endl << endl; Sleep(1000);
				cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov4;
				switch (mov4)
				{
				case 1: //(1 - 1 - 2 - 1) pasos
					cout << "Elegiste Placaje." << endl; Sleep(1000);
					cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
					cout << "El rival usó Placaje." << endl; Sleep(1000);
					cout << "Tus HP han disminuido a 40." << endl << endl; Sleep(1000);
					cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov5;
					switch (mov5)
					{
					case 1: //(1 - 1 - 2 - 1 - 1 = Victoria) pasos
						cout << "Elegiste Placaje." << endl; Sleep(1000);
						cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
						cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
						cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
						break;

					case 2: //(1 - 1 - 2 - 1 - 2) pasos
						cout << "Elegiste Gruñido." << endl; Sleep(1000);
						cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 15." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(1 - 1 - 2 - 1 - 2 - 1 = Victoria) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
							cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
							cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
							break;

						case 2: //(1 - 1 - 2 - 1 - 2 - 2 = Derrota) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					default:
						cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
					}
					break;

				case 2: //(1 - 1 - 2 - 2) pasos
					cout << "Elegiste Gruñido." << endl; Sleep(1000);
					cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
					cout << "El rival usó Placaje." << endl; Sleep(1000);
					cout << "Tus HP han disminuido a 45." << endl << endl; Sleep(1000);
					cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov5;
					switch (mov5)
					{
					case 1: //(1 - 1 - 2 - 2 - 1) pasos
						cout << "Elegiste Placaje." << endl; Sleep(1000);
						cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 20." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(1 - 1 - 2 - 2 - 1 - 1 = Victoria) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
							cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
							cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
							break;

						case 2: //(1 - 1 - 2 - 2 - 1 - 2 = Derrota) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					case 2: //(1 - 1 - 2 - 2 - 2) pasos
						cout << "Elegiste Gruñido." << endl; Sleep(1000);
						cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(1 - 1 - 2 - 2 - 2 - 1) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
							cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov7;
							switch (mov7)
							{
							case 1: //(1 - 1 - 2 - 2 - 2 - 1 - 1 = Victoria) pasos
								cout << "Elegiste Placaje." << endl; Sleep(1000);
								cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
								cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
								cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
								break;

							case 2: //(1 - 1 - 2 - 2 - 2 - 1 - 2 = Derrota) pasos
								cout << "Elegiste Gruñido." << endl; Sleep(1000);
								cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
								cout << "El rival usó Placaje." << endl; Sleep(1000);
								cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
								cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
								cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
								break;

							default:
								cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
								return main();
								break;
							}
							break;

						case 2: //(1 - 1 - 2 - 2 - 2 - 2) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
							cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov7;
							switch (mov7)
							{
							case 1: //(1 - 1 - 2 - 2 - 2 - 2 - 1 = Derrota) pasos
								cout << "Elegiste Placaje." << endl; Sleep(1000);
								cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
								cout << "El rival usó Placaje." << endl; Sleep(1000);
								cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
								cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
								cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
								break;

							case 2: //(1 - 1 - 2 - 2 - 2 - 2 - 2 = Derrota) pasos
								cout << "Elegiste Gruñido." << endl; Sleep(1000);
								cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
								cout << "El rival usó Placaje." << endl; Sleep(1000);
								cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
								cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
								cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
								break;

							default:
								cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
								return main();
								break;
							}
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					default:
						cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
					}
					break;

				default:
					cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
					return main();
					break;
				}
				break;

			default:
				cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
				return main();
				break;
			}
			break;

		case 2: //(1 - 2) pasos
			cout << "Elegiste Gruñido." << endl; Sleep(1000);
			cout << "El ataque del rival ha disminuido a 30." << endl; Sleep(1000);
			cout << "El rival usó Placaje." << endl; Sleep(1000);
			cout << "Tus HP han disminuido a 70." << endl << endl; Sleep(1000);
			cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov3;
			switch (mov3)
			{
			case 1: //(1 - 2 - 1) pasos
				cout << "Elegiste Placaje." << endl; Sleep(1000);
				cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
				cout << "El rival usó Gruñido." << endl; Sleep(1000);
				cout << "Tu ataque ha disminuido a 25." << endl << endl; Sleep(1000);
				cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov4;
				switch (mov4)
				{
				case 1: //(1 - 2 - 1 - 1) pasos
					cout << "Elegiste Placaje." << endl; Sleep(1000);
					cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
					cout << "El rival usó Placaje." << endl; Sleep(1000);
					cout << "Tus HP han disminuido a 40." << endl << endl; Sleep(1000);
					cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov5;
					switch (mov5)
					{
					case 1: //(1 - 2 - 1 - 1 - 1 = Victoria) pasos
						cout << "Elegiste Placaje." << endl; Sleep(1000);
						cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
						cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
						cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
						break;

					case 2: //(1 - 2 - 1 - 1 - 2) pasos
						cout << "Elegiste Gruñido." << endl; Sleep(1000);
						cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 15." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(1 - 2 - 1 - 1 - 2 - 1 = Victoria) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
							cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
							cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
							break;

						case 2: //(1 - 2 - 1 - 1 - 2 - 1 = Derrota) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					default:
						cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
					}
					break;

				case 2: //(1 - 2 - 1 - 2) pasos
					cout << "Elegiste Gruñido." << endl; Sleep(1000);
					cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
					cout << "El rival usó Placaje." << endl; Sleep(1000);
					cout << "Tus HP han disminuido a 45." << endl << endl; Sleep(1000);
					cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov5;
					switch (mov5)
					{
					case 1: //(1 - 2 - 1 - 2 - 1) pasos
						cout << "Elegiste Placaje." << endl; Sleep(1000);
						cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 20." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(1 - 2 - 1 - 2 - 1 - 1 = Victoria) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
							cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
							cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
							break;

						case 2: //(1 - 2 - 1 - 2 - 1 - 1 = Derrota) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					case 2: //(1 - 2 - 1 - 2 - 2) pasos
						cout << "Elegiste Gruñido." << endl; Sleep(1000);
						cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(1 - 2 - 1 - 2 - 2 - 1) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
							cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov7;
							switch (mov7)
							{
							case 1: //(1 - 2 - 1 - 2 - 2 - 1 - 1 = Victoria) pasos
								cout << "Elegiste Placaje." << endl; Sleep(1000);
								cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
								cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
								cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
								break;

							case 2: //(1 - 2 - 1 - 2 - 2 - 1 - 2 = Derrota) pasos
								cout << "Elegiste Gruñido." << endl; Sleep(1000);
								cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
								cout << "El rival usó Placaje." << endl; Sleep(1000);
								cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
								cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
								cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
								break;

							default:
								cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
								return main();
								break;

							}
							break;

						case 2: //(1 - 2 - 1 - 2 - 2 - 2) pasos 
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
							cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov7;
							switch (mov7)
							{
							case 1: //(1 - 2 - 1 - 2 - 2 - 2 - 1 = Derrota) pasos 
								cout << "Elegiste Placaje." << endl; Sleep(1000);
								cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
								cout << "El rival usó Placaje." << endl; Sleep(1000);
								cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
								cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
								cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
								break;

							case 2: //(1 - 2 - 1 - 2 - 2 - 2 - 2 = Derrota) pasos
								cout << "Elegiste Gruñido." << endl; Sleep(1000);
								cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
								cout << "El rival usó Placaje." << endl; Sleep(1000);
								cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
								cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
								cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
								break;

							default:
								cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
								return main();
								break;
							}
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					default:
						cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
					}
					break;

				default:
					cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
					return main();
					break;
				}
				break;

			case 2: //(1 - 2 - 2) pasos
				cout << "Elegiste Gruñido." << endl; Sleep(1000);
				cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
				cout << "El rival usó Placaje." << endl; Sleep(1000);
				cout << "Tus HP han disminuido a 45." << endl << endl; Sleep(1000);
				cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov4;
				switch (mov4)
				{
				case 1: //(1 - 2 - 2 - 1) pasos 
					cout << "Elegiste Placaje." << endl; Sleep(1000);
					cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
					cout << "El rival usó Gruñido." << endl; Sleep(1000);
					cout << "Tu ataque ha disminuido a 25." << endl << endl; Sleep(1000);
					cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov5;
					switch (mov5)
					{
					case 1: //(1 - 2 - 2 - 1 - 1) pasos
						cout << "Elegiste Placaje." << endl; Sleep(1000);
						cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 20." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(1 - 2 - 2 - 1 - 1 - 1 = Victoria) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
							cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
							cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
							break;

						case 2: //(1 - 2 - 2 - 1 - 1 - 2 = Derrota) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;
						}
						break;

					case 2: //(1 - 2 - 2 - 1 - 2) pasos
						cout << "Elegiste Gruñido." << endl; Sleep(1000);
						cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(1 - 2 - 2 - 1 - 2 - 1) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
							cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov7;
							switch (mov7)
							{
							case 1: //(1 - 2 - 2 - 1 - 2 - 1 - 1 = Victoria) pasos
								cout << "Elegiste Placaje." << endl; Sleep(1000);
								cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
								cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
								cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
								break;

							case 2: //(1 - 2 - 2 - 1 - 2 - 1 - 2 = Derrota) pasos
								cout << "Elegiste Gruñido." << endl; Sleep(1000);
								cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
								cout << "El rival usó Placaje." << endl; Sleep(1000);
								cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
								cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
								cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
								break;

							default:
								cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
								return main();
								break;
							}
							break;

						case 2: //(1 - 2 - 2 - 1 - 2 - 2) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
							cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov7;
							switch (mov7)
							{
							case 1: //(1 - 2 - 2 - 1 - 2 - 2 - 1 = Derrota) pasos
								cout << "Elegiste Placaje." << endl; Sleep(1000);
								cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
								cout << "El rival usó Placaje." << endl; Sleep(1000);
								cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
								cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
								cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
								break;

							case 2: //(1 - 2 - 2 - 1 - 2 - 2 - 2 = Derrota) pasos
								cout << "Elegiste Gruñido." << endl; Sleep(1000);
								cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
								cout << "El rival usó Placaje." << endl; Sleep(1000);
								cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
								cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
								cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
								break;

							default:
								cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
								return main();
								break;
							}
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					default:
						cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
					}
					break;

				case 2: //(1 - 2 - 2 - 2) pasos
					cout << "Elegiste Gruñido." << endl; Sleep(1000);
					cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
					cout << "El rival usó Placaje." << endl; Sleep(1000);
					cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
					cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov5;
					switch (mov5)
					{
					case 1: //(1 - 2 - 2 - 2 - 1) pasos
						cout << "Elegiste Placaje." << endl; Sleep(1000);
						cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(1 - 2 - 2 - 2 - 1 - 1 = Derrota) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						case 2: //(1 - 2 - 2 - 2 - 1 - 2 = Derrota) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;
						}
						break;

					case 2: //(1 - 2 - 2 - 2 - 2) pasos
						cout << "Elegiste Gruñido." << endl; Sleep(1000);
						cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(1 - 2 - 2 - 2 - 2 - 1 = Derrota) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						case 2: //(1 - 2 - 2 - 2 - 2 - 2 = Derrota) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					default:
						cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
					}
					break;

				default:
					cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
					return main();
					break;
				}
				break;

			default:
				cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
				return main();
				break;
			}
			break;

		default:
			cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
			return main();
			break;
		}
		break;

	case 2: //(2) pasos
		cout << "Elegiste Gruñido." << endl; Sleep(1000);
		cout << "El ataque del rival ha disminuido a 30." << endl; Sleep(1000);
		cout << "El rival usó Placaje." << endl; Sleep(1000);
		cout << "Tus HP han disminuido a 70." << endl << endl; Sleep(1000);
		cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov2;
		switch (mov2)
		{
		case 1: //(2 - 1) pasos
			cout << "Elegiste Placaje." << endl; Sleep(1000);
			cout << "Los HP del rival han diminuido a 65." << endl; Sleep(1000);
			cout << "El rival usó Gruñido." << endl; Sleep(1000);
			cout << "Tu ataque ha disminuido a 30." << endl << endl; Sleep(1000);
			cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov3;
			switch (mov3)
			{
			case 1: //(2 - 1 - 1) pasos
				cout << "Elegiste Placaje." << endl; Sleep(1000);
				cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
				cout << "El rival usó Placaje." << endl; Sleep(1000);
				cout << "Tus HP han disminuido a 40." << endl << endl; Sleep(1000);
				cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov4;
				switch (mov4)
				{
				case 1: //(2 - 1 - 1 - 1) pasos
					cout << "Elegiste Placaje." << endl; Sleep(1000);
					cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
					cout << "El rival usó Placaje." << endl; Sleep(1000);
					cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
					cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov5;
					switch (mov5)
					{
					case 1: //(2 - 1 - 1 - 1 - 1 = Victoria) pasos
						cout << "Elegiste Placaje." << endl; Sleep(1000);
						cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
						cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
						cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
						break;

					case 2: //(2 - 1 - 1 - 1 - 2 = Derrota) pasos
						cout << "Elegiste Gruñido." << endl; Sleep(1000);
						cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
						cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
						cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
						break;

					default:
						cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
					}
					break;

				case 2: //(2 - 1 - 1 - 2) pasos
					cout << "Elegiste Gruñido." << endl; Sleep(1000);
					cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
					cout << "El rival usó Placaje." << endl; Sleep(1000);
					cout << "Tus HP han disminuido a 45." << endl << endl; Sleep(1000);
					cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov5;
					switch (mov5)
					{
					case 1: //(2 - 1 - 1 - 2 - 1) pasos
						cout << "Elegiste Placaje." << endl; Sleep(1000);
						cout << "Los HP del rival han diminuido a 5." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 15." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(2 - 1 - 1 - 2 - 1 - 1 = Victoria) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
							cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
							cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
							break;

						case 2: //(2 - 1 - 1 - 2 - 1 - 2 = Derrota) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					case 2: //(2 - 1 - 1 - 2 - 2) pasos
						cout << "Elegiste Gruñido." << endl; Sleep(1000);
						cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(2 - 1 - 1 - 2 - 2 - 1) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 5." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
							cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov7;
							switch (mov7)
							{
							case 1: //(2 - 1 - 1 - 2 - 2 - 1 - 1 = Victoria) pasos
								cout << "Elegiste Placaje." << endl; Sleep(1000);
								cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
								cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
								cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
								break;

							case 2: //(2 - 1 - 1 - 2 - 2 - 1 - 2 = Derrota) pasos
								cout << "Elegiste Gruñido." << endl; Sleep(1000);
								cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
								cout << "El rival usó Placaje." << endl; Sleep(1000);
								cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
								cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
								cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
								break;

							default:
								cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
								return main();
								break;
							}
							break;

						case 2: //(2 - 1 - 1 - 2 - 2 - 2) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
							cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov7;
							switch (mov7)
							{
							case 1: //(2 - 1 - 1 - 2 - 2 - 2 - 1 = Derrota) pasos
								cout << "Elegiste Placaje." << endl; Sleep(1000);
								cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
								cout << "El rival usó Placaje." << endl; Sleep(1000);
								cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
								cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
								cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
								break;

							case 2: //(2 - 1 - 1 - 2 - 2 - 2 - 2 = Derrota) pasos
								cout << "Elegiste Gruñido." << endl; Sleep(1000);
								cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
								cout << "El rival usó Placaje." << endl; Sleep(1000);
								cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
								cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
								cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
								break;

							default:
								cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
								return main();
								break;
							}
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					default:
						cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
					}
					break;

				default:
					cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
					return main();
					break;
				}
				break;

			case 2: //(2 - 1 - 2) pasos
				cout << "Elegiste Gruñido." << endl; Sleep(1000);
				cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
				cout << "El rival usó Placaje." << endl; Sleep(1000);
				cout << "Tus HP han disminuido a 45." << endl << endl; Sleep(1000);
				cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov4;
				switch (mov4)
				{
				case 1: //(2 - 1 - 2 - 1) pasos
					cout << "Elegiste Placaje." << endl; Sleep(1000);
					cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
					cout << "El rival usó Gruñido." << endl; Sleep(1000);
					cout << "Tu ataque ha disminuido a 25." << endl << endl; Sleep(1000);
					cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov5;
					switch (mov5)
					{
					case 1: //(2 - 1 - 2 - 1 - 1) pasos
						cout << "Elegiste Placaje." << endl; Sleep(1000);
						cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 20." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(2 - 1 - 2 - 1 - 1 - 1 = Victoria) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
							cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
							cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
							break;

						case 2: //(2 - 1 - 2 - 1 - 1 - 2 = Derrota) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					case 2: //(2 - 1 - 2 - 1 - 2) pasos
						cout << "Elegiste Gruñido." << endl; Sleep(1000);
						cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(2 - 1 - 2 - 1 - 2 - 1) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
							cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov7;
							switch (mov7)
							{
							case 1: //(2 - 1 - 2 - 1 - 2 - 1 - 1 = Victoria) pasos
								cout << "Elegiste Placaje." << endl; Sleep(1000);
								cout << "Los HP del rival han diminuido a 0." << endl; Sleep(1000);
								cout << "¡Felicidades! ¡Has ganado!" << endl; Sleep(1000);
								cout << "¡Has ganado 120 XP y has subido de nivel!" << endl; Sleep(1000);
								break;

							case 2: //(2 - 1 - 2 - 1 - 2 - 1 - 2 = Derrota) pasos
								cout << "Elegiste Gruñido." << endl; Sleep(1000);
								cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
								cout << "El rival usó Placaje." << endl; Sleep(1000);
								cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
								cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
								cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
								break;

							default:
								cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
								return main();
								break;
							}
							break;

						case 2: //(2 - 1 - 2 - 1 - 2 - 2) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
							cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov7;
							switch (mov7)
							{
							case 1: //(2 - 1 - 2 - 1 - 2 - 2 - 1 = Derrota) pasos
								cout << "Elegiste Placaje." << endl; Sleep(1000);
								cout << "Los HP del rival han diminuido a 10." << endl; Sleep(1000);
								cout << "El rival usó Placaje." << endl; Sleep(1000);
								cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
								cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
								cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
								break;

							case 2: //(2 - 1 - 2 - 1 - 2 - 2 - 2 = Derrota) pasos
								cout << "Elegiste Gruñido." << endl; Sleep(1000);
								cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
								cout << "El rival usó Placaje." << endl; Sleep(1000);
								cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
								cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
								cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
								break;

							default:
								cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
								return main();
								break;
							}
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					default:
						cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
					}
					break;

				case 2: //(2 - 1 - 2 - 2) pasos
					cout << "Elegiste Gruñido." << endl; Sleep(1000);
					cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
					cout << "El rival usó Placaje." << endl; Sleep(1000);
					cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
					cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov5;
					switch (mov5)
					{
					case 1: //(2 - 1 - 2 - 2 - 1) pasos
						cout << "Elegiste Placaje." << endl; Sleep(1000);
						cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(2 - 1 - 2 - 2 - 1 - 1 = Derrota) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 5." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						case 2: //(2 - 1 - 2 - 2 - 1 - 2 = Derrota) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					case 2: //(2 - 1 - 2 - 2 - 2) pasos
						cout << "Elegiste Gruñido." << endl; Sleep(1000);
						cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(2 - 1 - 2 - 2 - 2 - 1 = Derrota) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						case 2: //(2 - 1 - 2 - 2 - 2 - 2 = Derrota) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					default:
						cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
					}
					break;

				default:
					cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
					return main();
					break;
				}
				break;

			default:
				cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
				return main();
				break;
			}
			break;

		case 2: //(2 - 2) pasos
			cout << "Elegiste Gruñido." << endl; Sleep(1000);
			cout << "El ataque del rival ha disminuido a 25." << endl; Sleep(1000);
			cout << "El rival usó Placaje." << endl; Sleep(1000);
			cout << "Tus HP han disminuido a 45." << endl << endl; Sleep(1000);
			cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov3;
			switch (mov3)
			{
			case 1: //(2 - 2 - 1) pasos
				cout << "Elegiste Placaje." << endl; Sleep(1000);
				cout << "Los HP del rival han diminuido a 65." << endl; Sleep(1000);
				cout << "El rival usó Gruñido." << endl; Sleep(1000);
				cout << "Tu ataque ha disminuido a 30." << endl << endl; Sleep(1000);
				cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov4;
				switch (mov4)
				{
				case 1: //(2 - 2 - 1 - 1) pasos
					cout << "Elegiste Placaje." << endl; Sleep(1000);
					cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
					cout << "El rival usó Placaje." << endl; Sleep(1000);
					cout << "Tus HP han disminuido a 20." << endl << endl; Sleep(1000);
					cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov5;
					switch (mov5)
					{
					case 1: //(2 - 2 - 1 - 1 - 1 = Derrota) pasos
						cout << "Elegiste Placaje." << endl; Sleep(1000);
						cout << "Los HP del rival han diminuido a 5." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
						cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
						cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
						break;

					case 2: //(2 - 2 - 1 - 1 - 2 = Derrota) pasos
						cout << "Elegiste Gruñido." << endl; Sleep(1000);
						cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
						cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
						cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
						break;

					default:
						cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
					}
					break;

				case 2: //(2 - 2 - 1 - 2) pasos
					cout << "Elegiste Gruñido." << endl; Sleep(1000);
					cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
					cout << "El rival usó Placaje." << endl; Sleep(1000);
					cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
					cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov5;
					switch (mov5)
					{
					case 1: //(2 - 2 - 1 - 2 - 1) pasos
						cout << "Elegiste Placaje." << endl; Sleep(1000);
						cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(2 - 2 - 1 - 2 - 1 - 1 = Derrota) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 5." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						case 2: //(2 - 2 - 1 - 2 - 1 - 2 = Derrota) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					case 2: //(2 - 2 - 1 - 2 - 2) pasos
						cout << "Elegiste Gruñido." << endl; Sleep(1000);
						cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(2 - 2 - 1 - 2 - 2 - 1 = Derrota) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						case 2: //(2 - 2 - 1 - 2 - 2 - 2 = Derrota) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					default:
						cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
					}
					break;

				default:
					cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
					return main();
					break;
				}
				break;

			case 2: //(2 - 2 - 2) pasos
				cout << "Elegiste Gruñido." << endl; Sleep(1000);
				cout << "El ataque del rival ha disminuido a 20." << endl; Sleep(1000);
				cout << "El rival usó Placaje." << endl; Sleep(1000);
				cout << "Tus HP han disminuido a 25." << endl << endl; Sleep(1000);
				cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov4;
				switch (mov4)
				{
				case 1: //(2 - 2 - 2 - 1) pasos
					cout << "Elegiste Placaje." << endl; Sleep(1000);
					cout << "Los HP del rival han diminuido a 65." << endl; Sleep(1000);
					cout << "El rival usó Gruñido." << endl; Sleep(1000);
					cout << "Tu ataque ha disminuido a 30." << endl << endl; Sleep(1000);
					cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov5;
					switch (mov5)
					{
					case 1: //(2 - 2 - 2 - 1 - 1) pasos
						cout << "Elegiste Placaje." << endl; Sleep(1000);
						cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 5." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(2 - 2 - 2 - 1 - 1 - 1 = Derrota) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 5." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						case 2: //(2 - 2 - 2 - 1 - 1 - 2 = Derrota) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					case 2: //(2 - 2 - 2 - 1 - 2) pasos
						cout << "Elegiste Gruñido." << endl; Sleep(1000);
						cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
						cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov6;
						switch (mov6)
						{
						case 1: //(2 - 2 - 2 - 1 - 2 - 1 = Derrota) pasos
							cout << "Elegiste Placaje." << endl; Sleep(1000);
							cout << "Los HP del rival han diminuido a 35." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						case 2: //(2 - 2 - 2 - 1 - 2 - 2 = Derrota) pasos
							cout << "Elegiste Gruñido." << endl; Sleep(1000);
							cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
							cout << "El rival usó Placaje." << endl; Sleep(1000);
							cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
							cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
							cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					default:
						cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
					}
					break;

				case 2: //(2 - 2 - 2 - 2) pasos
					cout << "Elegiste Gruñido." << endl; Sleep(1000);
					cout << "El ataque del rival ha disminuido a 15." << endl; Sleep(1000);
					cout << "El rival usó Placaje." << endl; Sleep(1000);
					cout << "Tus HP han disminuido a 10." << endl << endl; Sleep(1000);
					cout << "¿Qué deseas hacer? recuerda que tus movimientos son 1. Placaje y 2. Gruñido: "; cin >> mov5;
					switch (mov5)
					{
					case 1: //(2 - 2 - 2 - 2 - 1 = Derrota) pasos
						cout << "Elegiste Placaje." << endl; Sleep(1000);
						cout << "Los HP del rival han diminuido a 65." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
						cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
						cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
						break;

					case 2: //(2 - 2 - 2 - 2 - 2 = Derrota) pasos
						cout << "Elegiste Gruñido." << endl; Sleep(1000);
						cout << "El ataque del rival ha disminuido a 10." << endl; Sleep(1000);
						cout << "El rival usó Placaje." << endl; Sleep(1000);
						cout << "Tus HP han disminuido a 0." << endl; Sleep(1000);
						cout << "¡Que mal! Has perdido" << endl; Sleep(1000);
						cout << "¡Has ganado 80 XP!" << endl; Sleep(1000);
						break;

					default:
						cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
					}
					break;

				default:
					cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
					return main();
					break;
				}
				break;

			default:
				cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
				return main();
				break;
			}
			break;

		default:
			cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
			return main();
			break;
		}
		break;

	default:
		cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
		return main();
		break;
	}

	//Resultados de batalla

	cout << "¡Fue una muy buena batalla! Ya sea que ganes o que pierdas, siempre hay oportunidad de mejorar"; Sleep(2000);
	cout << " ¡También ganas o pierdes dinero! Solo que esta vez no lo utilizamos, cuidalo muy bien" << endl; Sleep(2000);
	cout << "El profesor Oak te dió 500 pokedolares, usalos bien" << endl; Sleep(2000);
	cout << "¡Ahora ve e inicia tu propia aventura!" << endl << endl; Sleep(2000);

	cout << "Si quieres repetir la simulación ingresa 1, si deseas salir ingresa cualquier otra tecla: "; cin >> eleccion;

	switch (eleccion)
	{
	case 1:
		return main();

	default:
		cout << endl << endl;
		exit;
	}

	return 0;
}

