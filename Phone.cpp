#include <iostream>
#include <string>
#include <map>

const std::map<std::string, std::string*> availableLocations;
availableLocations["Home"] = new std::string*() = {"Phone", "Contacts", "Games"};

void print(std::string output) {
  std::cout << output;
}

std::string helpSequence(std::string location) {
  std::string response;
  response =  "This is the virtual phone. You are currently in " + location + ". You can:\n";
  if (location == "Home") {
    response += "\t1. QUIT to exit your phone."
                "\t2. MOVE <location> to change your location."
                "\t3. HELP to reopen this helpful manual";
  }
  return response;
}

std::string* availableLocations(std::string* &availables, std::string location) {
  if (location == "Home") {
    availables = {"Phone", "Contacts", "Games"};
  }
}

bool available(std::string* availables) {return true;}
  
int main() {
  std::string location = "Home";
  std::string command;
  
  std::cout << "Hello! This is your virtual phone! What would you like to do today?" << std::endl;

  while (true) {
    print(">> ");
    std::cin >> command;

    if (command == "help") { print(helpSequence(location)); }
    if (command == "quit") { return 0; }
    if (command == "move") {
      std::cin >> command;
      if (!available(availableLocations(location), command)) {
	std::cout << "That is not an available location" << std::endl;
  }
  
}
