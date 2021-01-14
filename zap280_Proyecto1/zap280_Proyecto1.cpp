// zap280_Proyecto1.cpp 
//Creado_por_Gerardo_Vera_Villarreal_Estudiante_de_Amerike

#include<iostream>
#include<windows.h>
#include<string>
#include<stdio.h>
#include<locale>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "spanish");


	char nombre[15];
	int defensa, eleccion, mov1, mov2, mov3, mov4, mov5, mov6, mov7;

	//Presentación (Nombre de jugador y genero)

	cout << "-Estas rodeado de oscuridad y no ves nada." << endl; Sleep(2000);
	cout << "-Escuchas una voz en la lejania y te hace una pregunta." << endl; Sleep(2000);
	cout << "Anonimo: Antes que nada dime: Quien eres tu?" << endl; Sleep(2000);
	cout << "Escribe tu nombre: "; cin >> nombre;  Sleep(500);
	cout << "Anonimo: Asi que te llamas " << nombre << ", peculiar nombre..." << endl; Sleep(2000);
	cout << "Anonimo: Ahora levantate " << nombre << " tu Emperador te espera..." << endl; Sleep(2000);
	cout << "-Al abrir los ojos, te encuentras rodeado de legionarios muertos y escuchas el grito de una voz que te parece familiar.." << endl; Sleep(2000);
	cout << "Leandros: Hey levantate!, ya vienen los barbaros" << endl; Sleep(2000);
	cout << "Leandros: Tenemos que detenerlos aqui!" << endl; Sleep(2000);
	cout << "Leandros: Vete a tu posicion!" << endl; Sleep(2000);
	cout << "-Leandros te señala que vayas a utilizar la catapulta o la balista que siguen en funcionamiento." << endl; Sleep(2000);
	cout << "Que vas a hacer? Elige un número" << endl; Sleep(2000);
	cout << "1.-Controlar la balista." << endl; Sleep(2000);
	cout << "2.-Activar la catapulta." << endl; Sleep(2000);
	cin >> defensa; Sleep(2000);


	//Se elige la defensa

	switch (defensa)
	{
	case 1:
		cout << "\n-Al utilizar la balista notas que no cuenta con muchos proyectiles y haces que cada proyectil cuente." << endl; Sleep(2000);
		cout << "-Al estar disparando la balista, un barbaro se te acerca por la espalda." << endl; Sleep(2000);
		cout << "-Por fortuna Leandros lo detuvo antes de que te hiciera daño y comenzaron a hacer su ultimo frente." << endl << endl; Sleep(2000);
		cout << "-Mientras tu disparabas, Leandros se encargaba de los que se acercaban a tu posicion." << endl; Sleep(2000);
		cout << "-Pero Leandros es impactado por una flecha en su pierna derecha y cae al suelo por el dolor." << endl; Sleep(2000);
		cout << "Leandros: Ayudame " << nombre << " no puedo moverme." << endl; Sleep(2000);

		break;

	case 2:
		cout << "\n-Al correr hacia la catapulta notas que ya está cargada con un proyectil." << endl; Sleep(2000);
		cout << "-Al cortarla, el proyectil es lanzado hacia un grupo de barbaros que estaban cargando hacia ti." << endl; Sleep(2000);
		cout << "Leandros: -Regresemos al pueblo, corre!" << endl << endl; Sleep(2000);
		cout << "-Mientras escapaban de la abrumadora invasión barbara, Leandros es impactado por una flecha en la pierna derecha." << endl; Sleep(2000);
		cout << "Leandros: Ayudame " << nombre << " no puedo moverme." << endl; Sleep(2000);
		break;

	default:
		cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
		return main();
		break;
	}

	cout << "Que vas a hacer? Elige un número: " << endl; Sleep(2000); 
	cout << "1.- Arrastrar a Leandros." << endl; Sleep(2000);
	cout << "2.- Cargar a Leandros." << endl; Sleep(2000);
	cin >> mov1; Sleep(2000);
	//Aqui comienza la parte de las batallas

	switch (mov1)
	{
	case 1: //(1) pasos
		cout << "-Al arrastrar a Leandros, observas que los Barbaros se acercan cada vez mas." << endl; Sleep(1000);
		cout << "-Leandros recoge un arco y flechas del cuerpo de un legionario y comienza a disparar mientras lo arratsras." << endl; Sleep(1000);
		cout << "-Mientras escapan hacia un pueblo abandonado que se encontraba cerca del campo de batalla." << endl; Sleep(1000);
		cout << "-Leandros te pide que te detengas y se esconden para descansar." << endl << endl; Sleep(1000);
		cout << "Leandros: No puedo mas " << nombre << ", no puedo moverme." << endl; Sleep(1000);
		cout << "Leandros: Dejame aqui " << nombre << " sobrevive tu, tienes una familia que te espera." << endl; Sleep(1000);
		cout << "Que vas a hacer? Elige un número: " << endl; Sleep(2000);
		cout << "1.- Abandonar a Leandros." << endl; Sleep(2000);
		cout << "2.- Tratar de retirar la flecha y vendarla para detener el sangrado." << endl; Sleep(2000);
		cin >> mov2; Sleep(2000);
		switch (mov2)
		{
		case 1: //(1 - 1) pasos
			cout << "-Decides abandonar a Leandros a su suerte y emprendes una carrera hacia el campamento mas cercano del Imperio." << endl; Sleep(1000);
			cout << "-Al correr volteas por unos momentos como se acercan los barbaros a la posición de Leandros para terminar el trabajo..." << endl; Sleep(1000);
			cout << "-No permites que eso te distraiga y sigues en tu camino." << endl; Sleep(1000);
			cout << "-Te detienes cerca de una colina para evaluar la situacion pero los barbaros mandaron caballos a perseguirte." << endl << endl; Sleep(1000);
			cout << "Que vas a hacer? Elige un número: " << endl; Sleep(1000);
			cout << "1.- Esconderte." << endl; Sleep(2000);
			cout << "2.- Seguir corriendo." << endl; Sleep(2000);
			cin >> mov3; Sleep(1000);
			switch (mov3)
			{
			case 1: //(1 - 1 - 1) pasos
				cout << "-Encontraste un pozo y te escondes de la vista de los barbaros." << endl; Sleep(1000);
				cout << "-Al acercarse los barbaros, murmuran en un lenguaje desconocido para ti." << endl; Sleep(1000);
				cout << "-Revisan sus alrededores pero no encuentran al Legionario cobarde y deciden reanudar la busqueda." << endl; Sleep(1000);
				cout << "-Antes de salir del pozo, revisas a tus alrededores para asegurarte de que ya se fueron." << endl; Sleep(1000);
				cout << "-Al salir del pozo, decides tomar un breve descanso para volver a correr hacia el campamento aliado." << endl; Sleep(1000);
				cout << "-Se te ocurre una idea que tal vez podría aliviar la carga..." << endl; Sleep(1000);
				cout << "Que vas a hacer? Elige un número: " << endl; Sleep(1000);
				cout << "1.- Quitarte el uniforme para pasar desapercibido." << endl; Sleep(2000);
				cout << "2.- Seguir con tu uniforme que te fue entregado como la máxima condecoración Imperial." << endl; Sleep(2000);
				cin >> mov4; Sleep(1000);
				switch (mov4)
				{
				case 1: //(1 - 1 - 1 - 1 = Victoria) pasos
					cout << "-Decides quitarte el uniforme pesado y pasar desapercibido de los barbaros." << endl; Sleep(1000);
					cout << "-Vuelves a emprender tu viaje." << endl; Sleep(1000);
					cout << "-Llegas al campamento aliado pero tu Centurion no te recibe de la manera que tu pensabas..." << endl; Sleep(1000);
					cout << "Centurion Sidonus: Arrodillate Legionario." << endl; Sleep(1000);
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
							cout << ""; cin >> mov7;
							switch (mov7)
							{
							case 1: //(2 - 1 - 2 - 1 - 2 - 2 - 1 = Derrota) pasos
								cout << "" << endl; Sleep(1000);
								cout << "" << endl; Sleep(1000);
								cout << "" << endl; Sleep(1000);
								cout << "" << endl; Sleep(1000);
								cout << "" << endl; Sleep(1000);
								cout << "" << endl; Sleep(1000);
								break;

							case 2: //(2 - 1 - 2 - 1 - 2 - 2 - 2 = Derrota) pasos
								cout << "" << endl; Sleep(1000);
								cout << "" << endl; Sleep(1000);
								cout << "" << endl; Sleep(1000);
								cout << "" << endl; Sleep(1000);
								cout << "" << endl; Sleep(1000);
								cout << "" << endl; Sleep(1000);
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
					cout << "" << endl; Sleep(1000);
					cout << "" << endl; Sleep(1000);
					cout << "" << endl; Sleep(1000);
					cout << "" << endl << endl; Sleep(1000);
					cout << ""; cin >> mov5;
					switch (mov5)
					{
					case 1: //(2 - 1 - 2 - 2 - 1) pasos
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl << endl; Sleep(1000);
						cout << ""; cin >> mov6;
						switch (mov6)
						{
						case 1: //(2 - 1 - 2 - 2 - 1 - 1 = Derrota) pasos
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							break;

						case 2: //(2 - 1 - 2 - 2 - 1 - 2 = Derrota) pasos
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					case 2: //(2 - 1 - 2 - 2 - 2) pasos
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl << endl; Sleep(1000);
						cout << ""; cin >> mov6;
						switch (mov6)
						{
						case 1: //(2 - 1 - 2 - 2 - 2 - 1 = Derrota) pasos
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							break;

						case 2: //(2 - 1 - 2 - 2 - 2 - 2 = Derrota) pasos
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
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
			cout << "" << endl; Sleep(1000);
			cout << "" << endl; Sleep(1000);
			cout << "" << endl; Sleep(1000);
			cout << "" << endl << endl; Sleep(1000);
			cout << ""; cin >> mov3;
			switch (mov3)
			{
			case 1: //(2 - 2 - 1) pasos
				cout << "" << endl; Sleep(1000);
				cout << "" << endl; Sleep(1000);
				cout << "" << endl; Sleep(1000);
				cout << "" << endl << endl; Sleep(1000);
				cout << ""; cin >> mov4;
				switch (mov4)
				{
				case 1: //(2 - 2 - 1 - 1) pasos
					cout << "" << endl; Sleep(1000);
					cout << "" << endl; Sleep(1000);
					cout << "" << endl; Sleep(1000);
					cout << "" << endl << endl; Sleep(1000);
					cout << ""; cin >> mov5;
					switch (mov5)
					{
					case 1: //(2 - 2 - 1 - 1 - 1 = Derrota) pasos
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						break;

					case 2: //(2 - 2 - 1 - 1 - 2 = Derrota) pasos
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						break;

					default:
						cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
						return main();
						break;
					}
					break;

				case 2: //(2 - 2 - 1 - 2) pasos
					cout << "" << endl; Sleep(1000);
					cout << "" << endl; Sleep(1000);
					cout << "" << endl; Sleep(1000);
					cout << "" << endl << endl; Sleep(1000);
					cout << ""; cin >> mov5;
					switch (mov5)
					{
					case 1: //(2 - 2 - 1 - 2 - 1) pasos
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl << endl; Sleep(1000);
						cout << ""; cin >> mov6;
						switch (mov6)
						{
						case 1: //(2 - 2 - 1 - 2 - 1 - 1 = Derrota) pasos
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							break;

						case 2: //(2 - 2 - 1 - 2 - 1 - 2 = Derrota) pasos
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					case 2: //(2 - 2 - 1 - 2 - 2) pasos
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl << endl; Sleep(1000);
						cout << ""; cin >> mov6;
						switch (mov6)
						{
						case 1: //(2 - 2 - 1 - 2 - 2 - 1 = Derrota) pasos
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							break;

						case 2: //(2 - 2 - 1 - 2 - 2 - 2 = Derrota) pasos
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
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
				cout << "" << endl; Sleep(1000);
				cout << "" << endl; Sleep(1000);
				cout << "" << endl; Sleep(1000);
				cout << "" << endl << endl; Sleep(1000);
				cout << ""; cin >> mov4;
				switch (mov4)
				{
				case 1: //(2 - 2 - 2 - 1) pasos
					cout << "" << endl; Sleep(1000);
					cout << "" << endl; Sleep(1000);
					cout << "" << endl; Sleep(1000);
					cout << "" << endl << endl; Sleep(1000);
					cout << ""; cin >> mov5;
					switch (mov5)
					{
					case 1: //(2 - 2 - 2 - 1 - 1) pasos
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl << endl; Sleep(1000);
						cout << ""; cin >> mov6;
						switch (mov6)
						{
						case 1: //(2 - 2 - 2 - 1 - 1 - 1 = Derrota) pasos
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							break;

						case 2: //(2 - 2 - 2 - 1 - 1 - 2 = Derrota) pasos
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "¡" << endl; Sleep(1000);
							break;

						default:
							cout << "El número ingresado es incorrecto, intenta de nuevo." << endl << endl;
							return main();
							break;
						}
						break;

					case 2: //(2 - 2 - 2 - 1 - 2) pasos
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl << endl; Sleep(1000);
						cout << ""; cin >> mov6;
						switch (mov6)
						{
						case 1: //(2 - 2 - 2 - 1 - 2 - 1 = Derrota) pasos
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							break;

						case 2: //(2 - 2 - 2 - 1 - 2 - 2 = Derrota) pasos
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
							cout << "" << endl; Sleep(1000);
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
					cout << "" << endl; Sleep(1000);
					cout << "" << endl; Sleep(1000);
					cout << "" << endl; Sleep(1000);
					cout << "" << endl << endl; Sleep(1000);
					cout << ""; cin >> mov5;
					switch (mov5)
					{
					case 1: //(2 - 2 - 2 - 2 - 1 = Derrota) pasos
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						break;

					case 2: //(2 - 2 - 2 - 2 - 2 = Derrota) pasos
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
						cout << "" << endl; Sleep(1000);
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

	cout << "Por actos de cobardia hacia tu Legion y al mismisimo Emperador de la Humanidad..."; Sleep(2000);
	cout << "Te ofrezco la muerte para restaurar tu honor como soldado." << endl; Sleep(2000);
	cout << "-El Centurion Sidonus muestra piedad ante tus actos y te arrodillas para recibir tu juicio." << endl; Sleep(2000);
	cout << "-Sera el fin de " << nombre << "?" << endl; Sleep(2000);

	cout << "Si quieres repetir la historia ingresa 1, si deseas salir ingresa cualquier otra tecla: "; cin >> eleccion;

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