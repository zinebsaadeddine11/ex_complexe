// ex_complexe.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "Complexe.h"
#include <iostream>
using namespace std;

int main()
{
    Complexe c1(3.5, 4.2);    // création du premier complexe
    Complexe c2(1.1, -2.3);   // création du deuxième complexe
    
    cout << "Complexe c1: ";
    c1.afficher();

    cout << "Complexe c2: ";
    c2.afficher();

    /*Complexe somme = c1.add(c2);
    cout << "Somme de c1 et c2: ";
    somme.afficher();*/
    cout << "\n--- Operations ---" << endl;

    cout << "c1 + c2 = " ;
    Complexe som = c1 + c2;
    som.afficher();

    cout << "c1 - c2 = " ;
    Complexe diff = c1 - c2;
    diff.afficher();

    cout << "c1 * c2 = ";
    Complexe prod = c1 * c2;
    prod.afficher();

    cout << "c1 / c2 = ";
    Complexe div = c1 / c2;
    div.afficher();


    cout << "\n--- Comparaisons ---" << endl;
    cout << "c1 et c2 sont :";
    cout << (c1 == c2 ? "Egaux" : "Differents") << endl;
   


    cout << "\n";
    Complexe conj = c1.conjugue();
    cout << "Conjugue de c1: ";
    conj.afficher();
    cout << "\n";
    return 0;

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
