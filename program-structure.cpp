#include <bits/stdc++.h>  //Imports all vector, i/o, and algorithm libraries

using namespace std;

int main() {

    //This two line of codes are recommended at the beginning of each program to optimize them (though we'll see if it's actually useful). This is what they do:
    ios::sync_with_stdio(0);
     //Disables the syncrhonization between C and C++ streams, which leads to each stream method  having its own independent buffer, i.e., handling the arguments passed to each of the methods through an operator or a function independently using different memory spaces. May lead to data races
    cin.tie(0);
     //Unties cin from cout, which means stuff from cout is not going to be shown before input from the user is given to the cin, because it will need its arguments before printing (since C++ uses eager evaluation, it will need to have arguments for cin before flushing both buffers)
    //This is related to lazy and eager evaluation inside functions: the first one allows the program inside the function to run without checking the arguments until they are called inside of it (eventual evaluation), whereas the second checks if the arguments are correctly stated before going through the code (immediate evaluation)

    //The following lines work if the competition requires an output file given an input file:
    freopen("input.txt", "r", stdin); //Includes (path, mode of acces: read in this case, stream)
    freopen("output.txt", "w", stdout);

    string s;
    cin >> s; //Stores in s all the continuous characters that appear inside a line, i.e., without spaces, tabs or enters
    getline(cin, s); //Gets the line even if it has spaces

    cout << "Hello" << endl; // Causes a flush operation: empties the buffer (should be used if cin and cout are untied)
    cout << "Hello" << "\n"; // Simply adds a new line but doesn't flush the buffer, so it's techincally faster



}

//To compile the file: g++ -std=c++11 -O2 -Wall test.cpp -o test --> The -std=c++11 is to set the c++ 11 standard, though at least in my settings is already like that. -02 is apparently to optimize code, even though it doesn't work on my PC. And -Wall shows error warnings (probably the only one I'll need