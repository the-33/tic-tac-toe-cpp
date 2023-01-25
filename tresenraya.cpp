#include<iostream>
#include<conio.h>
#include<windows.h>
#include <cstdlib>

using namespace std;

char huecos[] = {'7', '8', '9', '4', '5', '6', '1', '2', '3'};
string final = "    PULSA UN NUMERO JUGADOR 1!";
char caracterdeturno = 'X';
bool victoria = false;

int comprobarganar()
{
	if(huecos[0] == huecos[1] && huecos[1] == huecos[2])
	{
		if (huecos[0] == 'X')
		{
			final = "     HA GANADO EL JUGADOR 1!";
		}
		else if (huecos[0] == 'O')
		{
			final = "     HA GANADO EL JUGADOR 2!";
		}
		return true;
	}
	else if(huecos[3] == huecos[4] && huecos[4] == huecos[5])
	{
		if (huecos[3] == 'X')
		{
			final = "     HA GANADO EL JUGADOR 1!";
		}
		else if (huecos[3] == 'O')
		{
			final = "     HA GANADO EL JUGADOR 2!";
		}
		return true;
	}
	else if(huecos[6] == huecos[7] && huecos[7] == huecos[8])
	{
		if (huecos[6] == 'X')
		{
			final = "     HA GANADO EL JUGADOR 1!";
		}
		else if (huecos[6] == 'O')
		{
			final = "     HA GANADO EL JUGADOR 2!";
		}
		return true;
	}
	else if(huecos[0] == huecos[3] && huecos[3] == huecos[6])
	{
		if (huecos[0] == 'X')
		{
			final = "     HA GANADO EL JUGADOR 1!";
		}
		else if (huecos[0] == 'O')
		{
			final = "     HA GANADO EL JUGADOR 2!";
		}
		return true;
	}
	else if(huecos[1] == huecos[4] && huecos[4] == huecos[7])
	{
		if (huecos[1] == 'X')
		{
			final = "     HA GANADO EL JUGADOR 1!";
		}
		else if (huecos[1] == 'O')
		{
			final = "     HA GANADO EL JUGADOR 2!";
		}
		return true;
	}
	else if(huecos[2] == huecos[5] && huecos[5] == huecos[8])
	{
		if (huecos[2] == 'X')
		{
			final = "     HA GANADO EL JUGADOR 1!";
		}
		else if (huecos[2] == 'O')
		{
			final = "     HA GANADO EL JUGADOR 2!";
		}
		return true;
	}
	else if(huecos[0] == huecos[4] && huecos[4] == huecos[8])
	{
		if (huecos[0] == 'X')
		{
			final = "     HA GANADO EL JUGADOR 1!";
		}
		else if (huecos[0] == 'O')
		{
			final = "     HA GANADO EL JUGADOR 2!";
		}
		return true;
	}
	else if(huecos[2] == huecos[4] && huecos[4] == huecos[6])
	{
		if (huecos[2] == 'X')
		{
			final = "     HA GANADO EL JUGADOR 1!";
		}
		else if (huecos[2] == 'O')
		{
			final = "     HA GANADO EL JUGADOR 2!";
		}
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	while(true)
	{
		system("cls");
		cout<<"          TRES EN RAYA"<<endl<<endl<<"  Jugador 1: X    Jugador 2: O"<<endl<<endl<<endl<<"            |       |       "<<endl<<"        "<<huecos[0]<<"   |   "<<huecos[1]<<"   |   "<<huecos[2]<<"   "<<endl<<"     _______|_______|_______"<<endl<<"            |       |       "<<endl<<"        "<<huecos[3]<<"   |   "<<huecos[4]<<"   |   "<<huecos[5]<<"   "<<endl<<"     _______|_______|_______"<<endl<<"            |       |       "<<endl<<"        "<<huecos[6]<<"   |   "<<huecos[7]<<"   |   "<<huecos[8]<<"   "<<endl<<"            |       |       "<<endl<<endl<<endl<<final<<endl;
		
		if (!victoria)
		{
			char car = getch();
			int numero;
			
			switch(car)
			{
			default:
				break;
			case '1':
				numero = 6;
				break;
			case '2':
				numero = 7;
				break;
			case '3':
				numero = 8;
				break;
			case '4':
				numero = 3;
				break;
			case '5':
				numero = 4;
				break;
			case '6':
				numero = 5;
				break;
			case '7':
				numero = 0;
				break;
			case '8':
				numero = 1;
				break;
			case '9':
				numero = 2;
				break;
		}
			
			if(huecos[numero] == car)
			{
				huecos[numero] = caracterdeturno;
				
				if(caracterdeturno == 'X')
				{
					caracterdeturno = 'O';
					final = "    PULSA UN NUMERO JUGADOR 2!";
				}
				else if (caracterdeturno == 'O')
				{
					caracterdeturno = 'X';
					final = "    PULSA UN NUMERO JUGADOR 1!";
				}
				
				victoria = comprobarganar();
			}
		}
		else
		{
			getch();
			huecos[0] = '7';
			huecos[1] = '8';
			huecos[2] = '9';
			huecos[3] = '4';
			huecos[4] = '5';
			huecos[5] = '6';
			huecos[6] = '1';
			huecos[7] = '2';
			huecos[8] = '3';
			victoria = false;
			final = "    PULSA UN NUMERO JUGADOR 1!";
			caracterdeturno = 'X';
		}
	}
}
