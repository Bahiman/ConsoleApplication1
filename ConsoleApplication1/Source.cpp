// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <unordered_map>
#include<fstream>
//#include<ofstream>

using namespace std;

int mains()
{
    //string text;

    //std::cout << "Hello World!\n";

    //cout << "Please give ur name" << endl;

    //string strname;

    //// getline(cin, strname);

    //cin >> strname;

    //unordered_map<int, string > statusMessages{};

    //string myText;

    //statusMessages.insert({ 13, "I am gay" }); 

    //ifstream myReadFile("snickers.txt");


    //ofstream Myfile("snickers.txt");

    //Myfile << "Files are gay";

    //myReadFile.close();

      // Create a text file


    // Create a text string, which is used to output the text file
    string myText;

    //ofstream myFile;


    // Read from the text file
    fstream MyReadFile("filename.txt");


    ifstream f("filename.txt");

    fstream myFile("filename.txt");

    bool exits_and_can_be_opened = f.good();

    if (exits_and_can_be_opened) {
        cout << "This file already exists";
    }
    else {

        myFile.open("filename.txt", ios_base::app);

        myFile << "Files can be tricky, but it is fun enough!";

        myFile << "This is the firt thing to be appended";

        myFile.close();

    }



    while (getline(MyReadFile, myText)) {
        // Output the text from the file
        cout << myText << "\n";
        // Output the text from the file
        cout << myText << "\n";
    }

    //MyWriteFile << "This thing was appended";

    myFile.clear();                       // clear any error
    myFile.seekg(0, ios_base::end);       // move to the end of the file
    myFile << "This thing was appended\n";


    cout << "This was the final change";


}

