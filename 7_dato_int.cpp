/* Tipos de datos básicos de c++. Este programa muestra en la salida estándar el valor de una variable 
de tipo entero, cuyo valor máximo es: 32767	y el mínimo: -32768, utiliza 2 bytes en memoria para almacenar
los datos*/

# include <iostream>//Librería estándar de entrada o salida de datos
# include <locale.h>//Librería estándar de localización (regionalización)

using namespace std;//Damos acceso al espacio de nombres

int main(){
	setlocale(LC_CTYPE, "Spanish");//Llamamos a la librería y colocamos el valor para manejo de caracteres, le asignamos el idioma español
	cout<<"Este es un ejemplo de constante de tipo entero"<<endl;//Imprimimos este dato en pantalla
	int numero = 1300;//Definimos la constante
		
	cout<<numero;//Imprimimos la constante	
	return 0;//Terminamos el programa
}
