#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){
    
    vector<int> vect{};
    vector<int> vect2 = {1,2,3,4};
    vector<string> vect_string = {"Liam", "Nathan", "Shahzad"};
    
    for(auto i = 0; i < vect_string.size(); i++){
        cout << vect_string[i] << endl;
    }

    //cout << vect_string << endl;

    return 0;
}