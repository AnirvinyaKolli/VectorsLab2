#include <vector>
#include <iostream>
#include <string>
using std::vector, std::string;

int main(){
    vector<string> pets {"dog", "cat", "fish"}; 
    
    for (auto itr = pets.begin(); itr != pets.end(); itr++)
        std::cout << *itr << "\n";
        
    std::cout << "_____________________________________" << "\n"; 

    pets.insert(pets.begin() + 2 , "bird"); 

    for (string str : pets) {
        std::cout << str << "\n";
    }
    
    std::cout << "_____________________________________" << "\n"; 

    pets.erase(pets.begin() + 1); 

    for (string str : pets) {
        std::cout << str << "\n";
    }
}   