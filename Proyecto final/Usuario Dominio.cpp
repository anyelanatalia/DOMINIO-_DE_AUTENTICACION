#include <iostream>
#include <string>
#include <cstdlib>

#define USER "Innova"
#define PASS "Innova.2021"

using namespace std;

int main()
{
	string Usuario, Password;
	int contador = 0;
	bool ingresa= false;
	
	do
	{
		system("cls");
		cout << "\t\t\tLOGIN PARA USUARIO DOMINIO" <<endl;
		cout << "\t\t\t--------------------------" <<endl;
		cout << "\n\tUsuario: ";
		getline(cin, Usuario);
		cout <<"\tPassword: ";
		getline(cin, Password);
	
		if(Usuario == USER && Password ==PASS)
	{
		ingresa = true;
	}
		else 
	{
		cout<< "\n\tEl Usuaurio o password son incorrectos" <<endl;
		cin.get();
		
		contador++;
	}
		
	}
		while(ingresa == false && contador <3);
		
		if(ingresa == false)
		{
			cout <<"\n\tLo sentimos no pudiste ingresar al sistema. ADIOS" <<endl;
		}
		else
		{
			cout <<"\n\tBienvenido a nuestro sistema para tu usuario dominio" <<endl;
			
			//
		}

	cin.get();
	cin.get();
	return 0;
	
	
}


