#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

string cadena, aux;
int opcion;

int main()
{
	cout<<"1- convertir a mayusculas \n";
	cout<<"2- convertir a minusculas \n";
	cout<<"3- tipo oracion \n";
	cout<<"4- nombre propio"<<endl;
	cout<<"5- reverse"<<endl;
	cout<<"6- sustituir \n";
	cout<<"\n";
	cout<<"digite su opcion a realizar: ";
	cin>>opcion;
	
	system("cls");
	switch (opcion)
	{
		case 1:
		cout<<"ingrese su cadena: ";
		cin.ignore();
		getline(cin, cadena);
		cout<<endl;
		
		for (int i = 0; i < cadena.length(); i++)
		{
			cadena[i] = toupper(cadena[i]);
		}
		cout<<"\n "<<cadena;
		
		getch();
		break;
		case 2:
			cout<<"ingrese su cadena: ";
			cin.ignore();
			getline(cin, cadena);
			cout<<endl;
			
			for (int x = 0; x < cadena.length(); x++){
				cadena[x] = tolower(cadena[x]);
			}
			cout<<"\n "<<cadena;
		break;
		case 3:
			cout<<"ingrese su cadena: ";
			cin.ignore();
			getline(cin, cadena);
			cout<<endl;
			
			for (int z=0; z<1; z++){
				cadena[z] = toupper(cadena[z]);
			}
			
			cout<<"\n "<<cadena;
			getch();
		break;
		case 4:
			cout<<"ingrese su nombre: ";
			cin.ignore();
			getline(cin, cadena);
			cout<<endl;
			
			cadena[0] = toupper(cadena[0]);
			
			for (int y = 0; y < cadena.length(); y++)
			{
				if (cadena.substr(y,1) == " ")
				{
					cadena[y+1] = toupper(cadena[y+1]);
				}
			}
			
			cout<<"\n "<<cadena;
			getch();
		break;
		case 5:
			
			cout<<"ingrese su cadena: ";
			cin.ignore();
			getline(cin, cadena);
			cout<<endl;
			
			for (int d = cadena.length(); d >= 0; d--){
				aux = aux + cadena.substr(d, 1);
			}
			
			cout<<"\n "<<aux;
			getch();
		break;
		
		case 6:
			cadena = "el caballo corre por el campo";
			string sustituto = "la pradera";
			
			cout<<cadena<<"\n";
			cadena.replace(cadena.find("el campo"),8, sustituto);
			cout<<cadena;
			getch();
		break;
	}
	
	return 0;
}
