#include <iostream>

int main(){


std::cout << "This is the Matrix!!!" << "\n";

std::string name;
std::string martial_art;

std::cout << "Please enter your name: ";
std::getline(std::cin,name);


if(name == "Neo"){
    std::cout << "You are the chosen one....." << name << "\n";
}else if(name == "Morpheus"){
    std::cout << "You are the leader......" << name << "\n";
}else if (name == "Smidth"){
    std::cout << "You do not belong here";
}else if (name == "Trinity"){
    std::cout << "Welcome Lover......" << name << "\n";
}else{
    std::cout << "Wrong Franchise" << "\n";
}

std::cout << "Apparently people love overcoats in the Matrix" << "\n";

std::cout << "Matrix is awesome" << "\n";

std::cout << "Which martial art??" << "\n";

std::getline(std::cin,martial_art);

if(martial_art == "Jiu Jitsu"){
    std::cout << "First ma";
}else if (martial_art == "Kung Fu"){
    std::cout << "Kung Fu second";
}

//I love the Matrix
//Except Resurrection
//Enjoy!!!

return 0;

}