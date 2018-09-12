/* 
 * File:   main.cpp
 * Author: hudsonschumaker
 *
 * Created on September 11, 2018, 9:58 PM
 */

#include <iostream>
#include "Cat.h"

using namespace std;

int main() {
    cout << "Hello World!" << endl;
    cout << "Olá Mundo!" << " pt_br" << endl;
    
    //Variables - +-*/
    int numDog = 6;
    int newDog = 1;
    cout << "Dog: " << numDog << endl;
    cout << "Cachorros: " << numDog + newDog << endl;
    
    string texto = "Vamos multiplicar nossos cachorros: ";
    cout << texto << (numDog + newDog) * 2 << endl;
    
    //Entradas de usuario
    cout << "Type how many dogs do you have: " << flush;
    string input;
    cin >> input;
    cout << "You have " << input << " dog(s)." << endl;
    
    //Classes
    Cat cat;
    cat.jump();
    cat.speak();
    
    return 0;
}