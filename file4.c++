#include <iostream>
#include <stdlib.h>

int main(){
  
  srand(time(NULL));

  int computer  = rand() % 3 + 1;
  int user = 0;

  std::cout<<"====================\n";
  std::cout<<"Rock paper scissors!\n";
  std::cout<<"====================\n";

  std::cout << "1) Rock (1) \n";
  std::cout << "2) paper (2) \n";
  std::cout << "3) scissors (3)\n";
  std::cout<< "Shoot! ";

  std::cin>>user;

    if (user == computer) {
    std::cout << "It's a tie!\n";
  } else if ((user == 1 && computer == 3) || 
             (user == 2 && computer == 1) || 
             (user == 3 && computer == 2)) {
    std::cout << "You win!\n";
  } else {
    std::cout << "Computer wins!\n";
  }


  return 0;
}
