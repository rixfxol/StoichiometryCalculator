#include <iostream>
#include <string>
#include <vector>



using namespace std;

/*
    This project is a small 

*/

std::string input_Entry() { //function for taking reaction equation input
    std::string user_Input; 
    
    /*
    User Input for the reaction equation is in the format of:
    Reactant1 + Reactant2 + Reactant3 + ... => Product1 + Product 2 + Product 3 + ...
    */

    std::cin >> user_Input;


    return user_Input;
}

void unit_Splitter(std::string*) {

}

int stoi_Cal(std::string* list_Reactants, std::string* list_Products){

    return 0;
}


int main() {
    std::vector<std::string> stoi_Reactants;
    std::vector<std::string> stoi_Products;

    std::cout << "A Very Basic Stoichiometry Calculator\nver. t001 \n\n";
    std::cout << "Main Contributor: John Friedrich B. Espiritu";

    std::string user_Input = input_Entry();


}