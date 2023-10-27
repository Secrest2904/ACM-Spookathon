//ACM Spookathon Submission - Part 1 of an adventure story taking place in the Cyberpunk Edgerunners Universe
#include <iostream>
#include <chrono>
#include <thread>


int main(){
  std::cout << "As you plug into the digital abyss, you find yourself"
        << " in a sprawling network of virtual pathways, \nthe neon veins of 2077\'s "
        << "digital realm. You are not alone. Fade, a legendary Netrunner, materializes "
        << "as a holographic guide. \n";
  std::cout << "\"Listen up,\" Fade says, \"We've got a crisis "
        << "on our hands. A recently discovered malicious rogue AI, \ncurrently known as "
        << "the Ghost, aims to shut down the entire Net. It's our job to stop it.\"\n";
  std::cout << "Do you trust Fade and agree to join the mission? (1 to accept, 0 to decline): ";
  int choice1 = 3;
  int choice2 = 3;
  int choice3 = 3;

  std::cin >> choice1;

  if (choice1 == 1){
    std::cout << "\nYou nod and agree to help Fade. Together, you delve deeper \ninto the network, chasing the Ghost's digital trails. Suddenly, you encounter \na digital gate guarded by complex encryption.\n";
    std::cout << "Do you attempt to hack the gate? (1) \nor suggest finding an alternate route? (0): ";
    std::cin >> choice2;}
  else if (choice1 == 0){
    std::cout << "\nYou hesitate, unsure about Fade's intentions. But the allure of adventure pushes you forward.\n";
    std::cout << "Do you cautiously follow Fade to gather more information? (1)\n or do you abruptly disconnect and return to the real world? (0): ";
    std::cin >> choice3;}
  else 
    return 1;


  if (choice3 == 1){
    std::cout << "\nYou nod and agree to help Fade. Together, you delve deeper \ninto the network, chasing the Ghost's digital trails. Suddenly, you encounter \na digital gate guarded by complex encryption.\n";
    std::cout << "Do you attempt to hack the gate? (1) \nor suggest finding an alternate route? (0): ";
    std::cin >> choice2;}
  else if (choice3 == 0){
    std::cout << "You escape the net without issue. Its not your problem, right? \n";
    return 0;}
  else{}

  if (choice2 == 1){
    std::cout << "\"I made a tool that helps break encryptions. You can access it using the command 'code Cipher.py'\"";
    std::cout << "\nEnter the command ./a.out SpookathonPart2.cpp to continue; \n";
    return 0;}
  else{
    std::cout << "\"Here is an alternate route, it just takes a bit longer\"";
    int countdown = 15; // Set your desired countdown starting value

    while (countdown >= 0) {
        std::cout << "Countdown: " << countdown << std::endl;
        countdown--;

        // Sleep for 1 second
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "Countdown complete! " << "Enter the command ./a.out SpookathonPart2.cpp to continue; \n"<< std::endl;

    return 0;
}
}
