//7. Write a program to handle the command line arguments entered by the user.

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {

    cout<<"Number of command-line arguments: "<<argc<<endl;

    for(int i = 0; i < argc; ++i) {
        cout<<"Argument "<<i<<": "<<argv[i]<<endl;
    }

    return 0;
}

/*PS C:\Users\aashi\OneDrive\Desktop\CDAC\PG_DAC\CPP_Programming\assignment4>
input -
 .\q7 9 8 7 2 3 45 1

Output - 

Number of command-line arguments: 8

Argument 0: C:\Users\aashi\OneDrive\Desktop\CDAC\PG_DAC\CPP_Programming\assignment4\q7.exe
Argument 1: 9
Argument 2: 8
Argument 3: 7
Argument 4: 2
Argument 5: 3
Argument 6: 45
Argument 7: 1
*/