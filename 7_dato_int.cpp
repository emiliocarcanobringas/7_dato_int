/* Tipos de datos b�sicos de c++. Este programa muestra en la salida est�ndar el valor de una variable 
de tipo entero, cuyo valor m�ximo es: 32767	y el m�nimo: -32768, utiliza 2 bytes en memoria para almacenar
los datos*/

# include <iostream>//Librer�a est�ndar de entrada o salida de datos
# include <locale.h>//Librer�a est�ndar de localizaci�n (regionalizaci�n)

using namespace std;//Damos acceso al espacio de nombres

int main(){
	setlocale(LC_CTYPE, "Spanish");//Llamamos a la librer�a y colocamos el valor para manejo de caracteres, le asignamos el idioma espa�ol
	cout<<"Este es un ejemplo de constante de tipo entero"<<endl;//Imprimimos este dato en pantalla
	int numero = 1300;//Definimos la constante
		
	cout<<numero;//Imprimimos la constante	
	return 0;//Terminamos el programa
}
