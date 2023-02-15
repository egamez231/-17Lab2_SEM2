#include <iostream>
#include <sstream>

using namespace std;

const int MAX_SIZE = 10;

void ArrIn (int arr[]){

    int i;
    string line;
    getline(cin, line); // get the input from the user in one line

    stringstream ss(line); // create a stringstream object from the line (The string stream are separate the data using  whitespace ' ' aka spacebar )

    for (i=0; i < MAX_SIZE; i ++){ // the loop are inserting the data extracted from the line into the array
        ss >> arr[i];
    }
}

void MaxMin (int *mx, int *mn,int arr[]){ // function to check the Max and Minimum number in the array

int i = 0;


for (i=0; i < MAX_SIZE; i++){ // Loop to find biggest number

    if (arr[0] < arr[i])
        *mx = arr[i];
}

*mn = arr[0];
for (i=0; i < MAX_SIZE; i++){ // Loop to find the smallest number

    if (arr[i]< *mn )
        *mn = arr[i];
}


}

bool OddEven (int arr){ //Boolean to check the number is Odd or Even
return (arr % 2 == 0);
}


int main() {
    int arr[MAX_SIZE],mn,mx, Odd = 0 , Even = 0 ,i; // variable declaration

    cout << "Enter 10 integers:";
    ArrIn (arr);
    MaxMin (&mx,&mn, arr);

    for (i=0; i < MAX_SIZE; i++){
        if (OddEven(arr[i])){
            Even ++;
        }
        else{
            Odd++;
        }

    }


 // display output
    cout <<"\n"<< "The smallest number: " << mn << endl;
    cout << "The largest number: " << mx << endl;
    cout << "Total even elements: " << Even << endl;
    cout << "Total odd elements: " << Odd << endl;


    // use the code below to ease the debugging process for first function.
  /* print the elements of the array
    for (int j = 0; j < MAX_SIZE; j++) {
    cout << arr[j] << " ";
    }
    cout << endl;*/

  return 0;
}



