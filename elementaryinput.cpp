#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main() {

    std::string name;
    std::string fullname;

    std::cout << "What's your name?: " << '\n';
    std::cin >> name;
    std::cout <<'\n'<<"Hello "<<name<<'\n';
    

    int age;
    std::cout << "What's your age?: " <<'\n';
    std::cin>>age;
    std::cout<<'\n'<<"You entered: "<<age<<'\n';
    std::cout<<'\n'<<"Your name is "<<name<<" and your age is "<<age<<'\n';
    std::cout<<"What's your full name "<<name<<"?"<<'\n';
    std::getline(std::cin >> std::ws, fullname);
    std::cout<<'\n'<<"Okay, so you are "<<fullname<<" and your age is "<<age<<'\n';
    std::cout<<"Goodbye"<<'\n';
    
    return 0;
}