#include <vector>
#include <iostream>
#include <string>
using std::vector, std::string;

// Car struct
struct car{
    string brand;
    string model; 
    string year; 
};

//Displaying the vector
void displayVector(vector<car>& vector);



int main(){
    // Ford, Benz, Toyota, BMW, Subaru  
    vector<car> cars {
        {"Ford","Explorer","2026"},
        {"Benz","C-Class","1993"},
        {"Toyota","Avalon","2018"},
        {"BMW","X1","2022"},
        {"Subaru","Impreza","1994"}
    };
    
    displayVector(cars); 
    
    // Insert Volskswagon after Benz
    cars.insert(cars.begin() + 2 , {"Volkswagon", "Polo", "2017"}); 
    displayVector(cars); 

    // Erase Toyota
    cars.erase(cars.begin() + 3); 
    displayVector(cars); 
}   

//Displaying the vector
void displayVector(vector<car>& vect){
    std::cout << "Cars: " "\n"; 
    for (car c: vect){
        std::cout << "   " << c.brand << " " << c.model << ", " << c.year << "\n";
    }
    std::cout << "_________________________" << "\n";
}