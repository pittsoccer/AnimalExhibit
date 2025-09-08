
/*
    - Driver:
        - Allocate space for an array of structs and call other routines
    - Fill array
    - Print array
    - Copy array
    - ProcessArray1
    - ProcessArray2
    - Menu for processing
*/

#include <iomanip>
#include <iostream>
using namespace std;

// struct
struct Animals
{
    string name;
    string species;
    int age;
};

// constants
const int MAX = 10;

// Fill Array
void FillArray(Animals exhibit[], int &size);

// Print Array
void PrintArray(Animals exhibit[], int &size);

// Copy Array
void CopyArray(Animals exhibit[], Animals newExhibit[], int &size1, int &size2);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int main()
{
    Animals exhibit[MAX];
    Animals newExhibit[MAX];
    int size1 = 0, size2 = 0;
    int selection = 0;
    char choice;

    do
    {
        // input selection from menu
        cout << "1) Fill Array" << endl;
        cout << "2) Print Array" << endl;
        cout << "3) Copy Array" << endl;
        cout << "4) Print Copied Array" << endl;
        cout << "5) Quit" << endl;
        cout << "Choose from selection (1-5)";
        cin >> selection;

        switch (selection)
        {
        case 1:
            // input num of animals
            cout << "Enter how many animals there will be: ";
            cin >> size1;
            cout << endl;
            FillArray(exhibit, size1);
        case 2:
            PrintArray(exhibit, size1);
        case 3:
            CopyArray(exhibit, newExhibit, size1, size2);
        case 4:
            PrintArray(newExhibit, size1);
        case 5:
            choice = 'q';
        default:
            cout << "Please enter a valid number (1-5)" << endl;
        }
        cout << endl;

    } while (choice != 'q');

    return 0;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// Fill Array
void FillArray(Animals exhibit[], int &size)
{

    for (int i = 0; i < size; i++)
    {
        // input species
        cout << "Species: ";
        cin >> exhibit[i].species;
        // input name
        cout << "Name: ";
        cin >> exhibit[i].name;
        // input age
        cout << "Age: ";
        cin >> exhibit[i].age;

        // output break
        cout << endl;
    }
}

// Print Array
void PrintArray(Animals exhibit[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // output header
        cout << "Species     Animal     Age" << endl;

        // output animal
        cout << exhibit[i].species;
        cout << setw(15) << exhibit[i].name;
        cout << setw(8) << exhibit[i].age;

        // output break
        cout << endl;
    }
}

// Copy Array
void CopyArray(Animals exhibit[], Animals newExhibit[], int &size1, int &size2)
{
    size2 = size1;
    for (int i = 0; i < size2; i++)
    {
        newExhibit[i] = exhibit[i];
    }
}
