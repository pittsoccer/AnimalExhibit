
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

// #include <iomanip>
// #include <iostream>
// using namespace std;

// struct
// struct Animal {
// 	string name;
// 	string species;
// 	int age;
// };

// constants
// const int MAX = 5;

// Fill Array
// void FillArray(Animal exhibit[], int&size);

// Print Array
// void PrintArray(Animal exhibit[], int&size);

// Copy Array
// void CopyArray(Animal exhibit[], int&size1, int&size2);

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// int main() {
// 	Animal exhibit[MAX];
//     Animal newExhibit[MAX];
//     int size = 0;
//     int selection = 0;
    
//     cout << "Enter how many animals there will be: ";
//     cin >> size;
//     cout << endl;

//     do {
//         while (selection != 1 && selection != 2 && selection != 3 && selection != 4) {
//             cout << "1) Fill Array" << endl;
//             cout << "2) Print Array" << endl;
//             cout << "3) Copy Array" << endl;
//             cout << "4) Print Copied Array" << endl;
//             cout << "Choose from selection (1-4)";
//             cin >> selection;
//         }
//         switch (selection) {
//             case 1:
//                 FillArray(exhibit, size);
//             case 2:
//                 PrintArray(exhibit, size);
//             case 3:
//                 PrintArray(newExhibit, size);
//             case 4:
//                 CopyArray(exhibit, newExhibit, size);
//             default:
//                 cout << "Please enter a valid number (1-4)" << endl;
//         }

//         FillArray(exhibit, size);
//         PrintArray(exhibit, size);
//         PrintArray(newExhibit, size);
//         CopyArray(exhibit, newExhibit, size);
//     while (choice == 't');
        
// return 0;
// }

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// Fill Array
// void FillArray(Animal exhibit[], int&size) {
	
// 	for (int i = 0; i < size; i++) {
		// input species
		// cout << "Species: ";
		// cin >> exhibit[i].species;
		// input name
		// cout << "Name: ";
		// cin >> exhibit[i].name;
		// input age
		// cout << "Age: ";
		// cin >> exhibit[i].age;

        // output break
        // cout << endl;
	// }
// }

// Print Array
// void PrintArray(Animal exhibit[], int&size) {
    // for (int i = 0; i < size; i++) {
        // output header
        // cout << "Species     Animal     Age" << endl;
         
		// output animal
		// cout << exhibit[i].species;
        // cout << setw(15) << exhibit[i].name;
        // cout << setw(8) << exhibit[i].age;

        // output break
//         cout << endl;
// 	}
// }

// void PrintArray(Animal exhibit[], int&size) {
//     for (int i = 0; i < size; i++) {
        // output header
        // cout << "Species     Animal     Age" << endl;
         
		// output animal
		// cout << exhibit[i].species;
  //       cout << setw(15) << exhibit[i].name;
  //       cout << setw(8) << exhibit[i].age;

        // output break
//         cout << endl;
// 	}
// }

// Copy Array
// void CopyArray(Animal exhibit[], int&size1, int&size2) {\
//     size2 = size1;
//     for (int i = 0; i < size; i++) {
//         newExhibit[i] = exhibit[i];
// 	}
// }

