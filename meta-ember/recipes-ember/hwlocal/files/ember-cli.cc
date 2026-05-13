#include <iostream>

int main(){
    std::string cmd;


    std::cout << "My custom program, layer, recipe" << std::endl;
    std::cout << "Type 'help' for commands" << std::endl;

    while(true){
        std::cout << "ember-cli: ";
        std::getline(std::cin, cmd);

        if(cmd == "help"){
            std::cout << "Available commands:" << std::endl;
            std::cout << " help - show commands" << std::endl;
            std::cout << " hello - print greeting" << std::endl;
            std::cout << " status - display status information" << std::endl;
            std::cout << " uptime - display how long the debice has been running" << std::endl;
            std::cout << " " << std::endl;
// Maybe memory, disk, cpu, and such

            std::cout << " exit - quit custom" << std::endl;
            
        } else if(cmd == "hello"){
            std::cout << "Hello from custom yocto stuff" << std::endl;
        } else if(cmd == "exit"){
            std::cout << "Exiting..." << std::endl;
            break;
        } else if(cmd.empty()){
            continue;
        } else {
            std::cout << "Unknown command: " << cmd << std::endl;
        }
    }
    return 0;
}
