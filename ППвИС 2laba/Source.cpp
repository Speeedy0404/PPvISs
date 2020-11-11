#include <iostream>
#include <fstream>
#include <Windows.h>
#include <conio.h>
#include "name.h"
using namespace std;
using namespace animal;
void get_from_file(Cheiroptera& cheiroptera, Penguins& penguins, Sharks& sharks, Parrot& parrot) {
    ifstream file;
    file.open("worldanimals.txt");
    string temp = "";

    //Cheiroptera

    getline(file, temp);
    cheiroptera.get_orial_habitat(temp);
    getline(file, temp);
    cheiroptera.get_long_of_life(stod(temp));
    getline(file, temp);
    cheiroptera.get_cover(temp);
    getline(file, temp);
    cheiroptera.get_weight(stod(temp));
    getline(file, temp);
    cheiroptera.get_wings(temp);
    getline(file, temp);
    cheiroptera.get_feather_cover(temp);
    getline(file, temp);
    cheiroptera.get_adaptability_of_teeth_for_meat(temp);
    getline(file, temp);
    cheiroptera.get_strong_claws(temp);

    //Penguins

    getline(file, temp);
    penguins.get_orial_habitat(temp);
    getline(file, temp);
    penguins.get_long_of_life(stod(temp));
    getline(file, temp);
    penguins.get_cover(temp);
    getline(file, temp);
    penguins.get_weight(stod(temp));
    getline(file, temp);
    penguins.get_wings(temp);
    getline(file, temp);
    penguins.get_feather_cover(temp);
    getline(file, temp);
    penguins.get_adaptability_of_teeth_for_meat(temp);
    getline(file, temp);
    penguins.get_strong_claws(temp);
    getline(file, temp);
    penguins.get_musculature(temp);
    getline(file, temp);
    penguins.get_feet_with_a_swimming_membrane(temp);


    //Sharks

    getline(file, temp);
    sharks.get_orial_habitat(temp);
    getline(file, temp);
    sharks.get_long_of_life(stod(temp));
    getline(file, temp);
    sharks.get_cover(temp);
    getline(file, temp);
    sharks.get_weight(stod(temp));
    getline(file, temp);
    sharks.get_scaly_cover(temp);
    getline(file, temp);
    sharks.get_fins(temp);
    getline(file, temp);
    sharks.get_adaptability_of_teeth_for_meat(temp);
    getline(file, temp);
    sharks.get_strong_claws(temp);
    getline(file, temp);
    sharks.get_body_is_torpedo_shaped(temp);
    getline(file, temp);
    sharks.get_lost_of_sharp_teeth(temp);

    //Parrot

    getline(file, temp);
    parrot.get_orial_habitat(temp);
    getline(file, temp);
    parrot.get_long_of_life(stod(temp));
    getline(file, temp);
    parrot.get_cover(temp);
    getline(file, temp);
    parrot.get_weight(stod(temp));
    getline(file, temp);
    parrot.get_wings(temp);
    getline(file, temp);
    parrot.get_feather_cover(temp);
    getline(file, temp);
    parrot.get_adaptability_of_teeth_for_grass(temp);
    getline(file, temp);
    parrot.get_location_of_the_eye(temp);
    getline(file, temp);
    parrot.get_bright_colouring(temp);
    getline(file, temp);
    parrot.get_long_tails_and_tufts(temp);
}


int main()
{
    Living_entities;
    Cheiroptera cheiroptera;
    Penguins penguins;
    Sharks sharks;
    Parrot parrot;
    get_from_file(cheiroptera, penguins, sharks, parrot);
    cheiroptera.view();
    cout << "---------------------------\n";

    penguins.view();
    cout << "---------------------------\n";

    sharks.view();
    cout << "---------------------------\n";

    parrot.view();
    cout << "---------------------------\n";

    return 0;
}