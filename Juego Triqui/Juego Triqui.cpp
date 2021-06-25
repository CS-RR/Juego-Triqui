// Juego Triqui.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <cstdlib>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[])
{
	int j1 = 1, j2 = 0, ganar1 = 0, ganar2 = 0, empate = 0, nw = 0;//Variables que son modificadas
	char c1 = '1', c2 = '2', c3 = '3', c4 = '4', c5 = '5', c6 = '6', c7 = '7', c8 = '8', c9 = '9';//Para marcar como caracter esa variable.

	cout << "\a" << endl;//Sonido del sistema
	cout << "\t\tJUEGO DEL TRIQUI\n" << endl;
	cout << "Jugador 1: X\t" << "Jugador 2: O\n" << endl;
	cout << "\t " << "|" << "\t " << "|" << endl;
	cout << "   " << 1 << "     " << "|" << "  " << 2 << "    " << "|" << "   " << 3 << " " << endl;
	cout << "\t " << "|" << "\t " << "|" << endl;
	cout << "---------------------------- \tEscoge un numero de cada casilla" << endl;
	cout << "\t " << "|" << "\t " << "|" << endl;
	cout << "   " << 4 << "     " << "|" << "  " << 5 << "    " << "|" << "   " << 6 << " " << endl;
	cout << "\t " << "|" << "\t " << "|" << endl;
	cout << "---------------------------- \t[NO SE PUEDEN REPETIR NUMEROS]" << endl;
	cout << "\t " << "|" << "\t " << "|" << endl;
	cout << "   " << 7 << "     " << "|" << "  " << 8 << "    " << "|" << "   " << 9 << " " << endl;
	cout << "\t " << "|" << "\t " << "|" << endl;
	cout << "----------------------------" << endl;
	cout << "\t " << "|" << "\t " << "|" << endl;
	cout << "\t " << "|" << "\t " << "|\n" << endl;

	while (empate == 0 || ganar1 == 0 && ganar2 == 0 || nw == 0)//Bucle mayor 
	{
		//Empate en horizontal
		if (c1 == 'X' && c4 == 'O' || c1 == 'O' && c4 == 'X' || c1 == 'X' && c7 == 'O' || c1 == 'O' && c7 == 'X' || c4 == 'X' && c7 == 'O' || c4 == 'O' && c7 == 'X')
		{
			if (c2 == c1 && c3 == c1 && c5 == c4 && c6 == c4 || c2 == c1 && c3 == c1 && c8 == c7 && c9 == c7 || c5 == c4 && c6 == c4 && c8 == c7 && c9 == c7)
			{
				empate = 1;
				cout << "\t\t!!!...Empate...!!!" << endl; break;
			}
		}
		//empate en vertical
		if (c1 == 'X' && c2 == 'O' || c1 == 'O' && c2 == 'X' || c1 == 'X' && c3 == 'O' || c1 == 'O' && c3 == 'X' || c2 == 'X' && c3 == 'O' || c2 == 'O' && c3 == 'X')
		{
			if (c4 == c1 && c7 == c1 && c5 == c2 && c8 == c2 || c4 == c1 && c7 == c1 && c6 == c3 && c9 == c3 || c5 == c2 && c8 == c2 && c6 == c3 && c9 == c3)
			{
				empate = 1;
				cout << "\t\t!!!...Empate...!!!" << endl; break;
			}
		}
		//Nadie Gana
		if (c1 == 'X' && c9 == 'O' || c4 == 'O' && c2 == 'O' && c3 == 'O' && c7 == 'O')
		{
			if (c1 == c5 && c6 == c1 && c8 == c1)
			{
				nw = 1;
				cout << "\t\t.....Nadie gana...!!!" << endl; break;
			}
		}
		if (c1 == 'O' && c9 == 'X' || c4 == 'X' && c2 == 'X' && c3 == 'X' && c7 == 'X')
		{
			if (c1 == c5 && c6 == c1 && c8 == c1)
			{
				nw = 1;
				cout << "\t\t.....Nadie gana...!!!" << endl; break;
			}
		}
		if (c1 == 'X') //1era opcion de ganar 
		{
			if (c2 == c1 && c3 == c1 || c4 == c1 && c7 == c1)
			{
				ganar1 = 1;
				cout << "\t\t!!!...GANA EL JUGADOR  1...!!!" << endl; break;
			}
		}
		if (c1 == 'O')
		{
			if (c2 == c1 && c3 == c1 || c4 == c1 && c7 == c1)
			{
				ganar2 = 2;
				cout << "\t\t!!!...GANA EL JUGADOR  2...!!!" << endl;	break;
			}
		}
		if (c5 == 'X')//2da opcion de ganar 
		{
			if (c1 == c5 && c9 == c5 || c2 == c5 && c8 == c5 || c4 == c5 && c6 == c5 || c3 == c5 && c7 == c5)
			{
				ganar1 = 1;
				cout << "\t\t!!!...GANA EL JUGADOR  1...!!!" << endl;	break;
			}
		}
		if (c5 == 'O')
		{
			if (c1 == c5 && c9 == c5 || c2 == c5 && c8 == c5 || c4 == c5 && c6 == c5 || c3 == c5 && c7 == c5)
			{
				ganar2 = 2;
				cout << "\t\t!!!...GANA EL JUGADOR  2...!!!" << endl;	break;
			}
		}
		if (c9 == 'X') //3er opcion de ganar para jugador 1
		{
			if (c6 == c9 && c3 == c9 || c7 == c9 && c8 == c9)
			{
				ganar1 = 1;
				cout << "\t\t!!!...GANA EL JUGADOR  1...!!!" << endl;	break;
			}

		}
		else if (c9 == 'O') //3er opcion de ganar para jugador 2
		{
			if (c6 == c9 && c3 == c9 || c7 == c9 && c8 == c9)
			{
				ganar2 = 2;
				cout << "\t\t!!!...GANA EL JUGADOR  2...!!!" << endl;	break;
			}
		}
		system("color 0C"); //Cambiar Color del jugador
							//Inicia el juego, empieza el jugador 1.
		cout << "Jugador 1: ";  cin >> j1;
		//Condiciones especiales para que el juego no se interrumpa.
		if (j1 > 9)
		{
			cout << "Mayor que 9 Jugador 1 vuelve a tirar:"; cin >> j1;
		}
		if (j1 == j2)
		{
			cout << "Tira nuevamente jugador 1: "; cin >> j1;
		}
		if (j1 == 1 && c1 == '1')
		{
			c1 = 'X';
			cout << c1 << endl;
		}
		if (j1 == 2 && c2 == '2')
		{
			c2 = 'X';
			cout << c1 << endl;
		}
		if (j1 == 3 && c3 == '3')
		{
			c3 = 'X';
			cout << c3 << endl;
		}
		if (j1 == 4 && c4 == '4')
		{
			c4 = 'X';
			cout << c4 << endl;
		}
		if (j1 == 5 && c5 == '5')
		{
			c5 = 'X';
			cout << c5 << endl;
		}
		if (j1 == 6 && c6 == '6')
		{
			c6 = 'X';
			cout << c6 << endl;
		}
		if (j1 == 7 && c7 == '7')
		{
			c7 = 'X';
			cout << c7 << endl;
		}
		if (j1 == 8 && c8 == '8')
		{
			c8 = 'X';
			cout << c8 << endl;
		}
		if (j1 == 9 && c9 == '9')
		{
			c9 = 'X';
			cout << c9 << endl;
		}
		system("cls");//
		cout << "\n" << endl;
		cout << "\t\t\t--JUEGO DEL TRIQUI--\n" << endl;
		cout << "Judador 1: X\t" << "Jugador 2: O\n" << endl;
		cout << "\t " << "|" << "\t " << "|" << endl;
		cout << "   " << c1 << "     " << "|" << "  " << c2 << "    " << "|" << "   " << c3 << " " << endl;
		cout << "\t " << "|" << "\t " << "|" << endl;
		cout << "---------------------------- \tEscoge un numero de cada casilla" << endl;
		cout << "\t " << "|" << "\t " << "|" << endl;
		cout << "   " << c4 << "     " << "|" << "  " << c5 << "    " << "|" << "   " << c6 << " " << endl;
		cout << "\t " << "|" << "\t " << "|" << endl;
		cout << "---------------------------- \t[NO SE PUEDEN REPETIR NUMEROS]" << endl;
		cout << "\t " << "|" << "\t " << "|" << endl;
		cout << "   " << c7 << "     " << "|" << "  " << c8 << "    " << "|" << "   " << c9 << " " << endl;
		cout << "\t " << "|" << "\t " << "|" << endl;
		cout << "----------------------------" << endl;
		cout << "\t " << "|" << "\t " << "|" << endl;
		cout << "\t " << "|" << "\t " << "|" << endl;
		/*Se muestra la jugada del jugador
		y luego sigue el jugador 2*/
		system("color 4F");
		cout << "Jugador 2: ";  cin >> j2;
		//Condiciones especiales para que le juego no se interrumpa.
		if (j2 > 9)
		{
			cout << "Mayor que 9 Jugador 2 vuelve a tirar:"; cin >> j2;
		}
		if (j1 == j2)
		{
			cout << "Tira nuevamente jugador 2: "; cin >> j2;
		}
		if (j2 == 1 && c1 == '1')
		{
			c1 = 'O';
			cout << c1 << endl;
		}
		if (j2 == 2 && c2 == '2')
		{
			c2 = 'O';
			cout << c2 << endl;
		}
		if (j2 == 3 && c3 == '3')
		{
			c3 = 'O';
			cout << c3 << endl;
		}
		if (j2 == 4 && c4 == '4')
		{
			c4 = 'O';
			cout << c4 << endl;
		}
		if (j2 == 5 && c5 == '5')
		{
			c5 = 'O';
			cout << c5 << endl;
		}
		if (j2 == 6 && c6 == '6')
		{
			c6 = 'O';
			cout << c6 << endl;
		}
		if (j2 == 7 && c7 == '7')
		{
			c7 = 'O';
			cout << c7 << endl;
		}
		if (j2 == 8 && c8 == '8')
		{
			c8 = 'O';
			cout << c8 << endl;
		}
		if (j2 == 9 && c9 == '9')
		{
			c9 = 'O';
			cout << c9 << endl;
		}
		system("cls");
		cout << "\n" << endl;
		cout << "\t\t\t--JUEGO DEL TRIQUI--\n" << endl;
		cout << "Judador 1: X\t" << "Jugador 2: O\n" << endl;
		cout << "\t " << "|" << "\t " << "|" << endl;
		cout << "   " << c1 << "     " << "|" << "  " << c2 << "    " << "|" << "   " << c3 << " " << endl;
		cout << "\t " << "|" << "\t " << "|" << endl;
		cout << "---------------------------- \tEscoge un numero de cada casilla" << endl;
		cout << "\t " << "|" << "\t " << "|" << endl;
		cout << "   " << c4 << "     " << "|" << "  " << c5 << "    " << "|" << "   " << c6 << " " << endl;
		cout << "\t " << "|" << "\t " << "|" << endl;
		cout << "---------------------------- \t[NO SE PUEDEN REPETIR NUMEROS]" << endl;
		cout << "\t " << "|" << "\t " << "|" << endl;
		cout << "   " << c7 << "     " << "|" << "  " << c8 << "    " << "|" << "   " << c9 << " " << endl;
		cout << "\t " << "|" << "\t " << "|" << endl;
		cout << "----------------------------" << endl;
		cout << "\t " << "|" << "\t " << "|" << endl;
		cout << "\t " << "|" << "\t " << "|" << endl;
		/* Se muestra la jugada del jugador  y luego
		sigue el jugador 1 */
	}
	cout << "\n" << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}