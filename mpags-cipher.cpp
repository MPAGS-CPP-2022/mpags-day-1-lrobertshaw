#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){
    
    const vector<string> cmdLineArgs = {argv, argv+argc};

    string inputFile{};
    string outputFile{};

    for(int i = 0; i < cmdLineArgs.size(); i++){
        if(cmdLineArgs[i] == "--help" || cmdLineArgs[i] == "-h"){
            cout << "This program is mpags-cipher" << endl;
        }
        if(cmdLineArgs[i] == "--version"){
            cout << "Version 0.1.0" << endl;
        }
        if(cmdLineArgs[i] == "--input" || cmdLineArgs[i] == "-i"){
            inputFile = cmdLineArgs[i+1];
            cout << inputFile << endl;
        }
        if(cmdLineArgs[i] == "--output" || cmdLineArgs[i] == "-o"){
            outputFile = cmdLineArgs[i+1];
            cout << outputFile << endl;
        }
    }
    
    return 0;
}