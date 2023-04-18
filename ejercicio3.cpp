#include <iostream>
#include <string>
#include <string.h>
/*“El náufrago satisfecho” ofrece hamburguesas sencillas, dobles y triples, las cuales
tienen un costo de C$50.00, C$75.00 y C$100.00 respectivamente; considere que se puede solicitar
más de una hamburguesa. La empresa acepta tarjetas de crédito con un cargo de 5 % sobre la
compra. Realice un algoritmo para determinar cuánto debe pagar una persona por N hamburguesas*/
using namespace std;

void hamburguesa (){
    int h1,h2,h3,num = 0,num_ham,total;
    float total_c;
    string afirmacion;
    bool es;
    
    cout << "Bienvenido al Naúfrago Satisfecho, ofrecemos: \n1)Hamburguesas sencillas: C$50.00\n2)Hamburguesas dobles: C$75.00\n3)Hamburguesas triples: C$100.00";
    cout << "\nElija cual hamburguesa desea comprar: (Escribir numeros del 1 al 3)"; cin >> num;
    es = true;

    while (num == 1 || num == 2 || num ==3 ){
        if (num == 1){
            cout << "\nElige la cantidad de hamburguesas sencillas que deseas comprar: ";cin >> num_ham;
            total += 50 * num_ham;
        }
        else if (num == 2){
            cout << "\nElige la cantidad de hamburguesas dobles que deseas comprar: "; cin >> num_ham;
            total += 75 * num_ham;
        }
        else if (num == 3){
            cout << "\nElige la cantidad de hamburguesas triples que deseas comprar: "; cin >> num_ham;
            total += 100 * num_ham;
        }
        else if(num != 1|| num != 2 || num!= 3){
            es = false;
            cout << "Has ingresado un numero invalido. Volver a intentar"; break;
        }
        cout << "Dime si quieres comprar otro tipo de hamburguesa: (responder y/n)"; cin >> afirmacion;

        if (afirmacion == "y"){
            cout << "\nElija cual hamburguesa desea comprar: (Escribir numeros del 1 al 3): "; cin >> num;
        }
        else if (afirmacion == "n"){
            break;
        }
        }

    if (es == true){
        cout << "¿Desea aplicar un descuento con su tarjeta de credito: (ofrecemos un 5% de descuento: )?";
        cout << "\n\nResponder con y/n: "; cin >> afirmacion;

        if (afirmacion == "y"){
            total_c = total - (total * 0.05);
            cout << "La cantidad a total a pagar por todo lo comprado mas el descuento de un 5% es: " << total_c;
        }
        else if (afirmacion == "n"){
            cout << "La cantidad a total a pagar por todo lo comprado es: " << total;
        }
    else if (es == false){
       
    }
    }
    cout << "\n";
}