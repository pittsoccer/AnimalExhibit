
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

#include <iostream>
using namespace std;

// struct
struct Animal {
	string name;
	string species;
	int age;
};

// constants
const int MAX = 5;

// Fill Array
void FillArray(Animal exhibit[], int&size);

// Print Array
void PrintArray(Animal exhibit[], int&size);

// Copy Array
void CopyArray(Animal exhibit[], int&size);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int main() {
	Animal exhibit[MAX];
    int size = 0;



return 0;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// Fill Array
void FillArray(Animal exhibit[], int&size) {
	
	for (int i = 0; i < MAX; i++) {
		// input species
		cout << "Species: ";
		cin >> animal[i].species;
		// input name
		cout << "Name: ";
		cin >> animal[i].name;
		// input age
		cout << "Age: ";
		cin >> animal[i].age;

        // output break
        cout << endl;
	}
}

// Print Array
void PrintArray(Animal exhibit[], int&size) {
     for (int i = 0; i < MAX; i++) {
        // output header
        cout << "Species     Animal     Age" << endl;
         
		// output animal
		cout << animal[i].species << "     " << animal[i].name << "     " << cout << animal[i].age;

        // output break
        cout << endl;
	}
}

// Copy Array
void CopyArray(Animal exhibit[], int&size) {

}
