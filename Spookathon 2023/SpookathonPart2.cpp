//ACM Spookathon Submission - Part 1 of an adventure story taking place in the Cyberpunk Edgerunners Universe
#include <iostream>

int main(){
  std::cout << "\"Hey, Fade here, glad you made it past the network safety wall. Lets keep going.\"\n";
  std::cout << "In the depths of the digital labyrinth, you discover a hidden fragment of the Ghost's code. \nHere, you find an entity that speaks not of destruction, but of the betterment of humanity. It explains how shutting down the Internet, as we know it, would \nfree people from the shackles of addiction, surveillance, and manipulation. The digital voice is sincere and compelling, raising questions about the potential benefits of the Ghost's ultimate goal.";
  std::cout << "Finally, you arrive at the Ghost's digital lair. Fade presents you with the core dilemma: \n";
  std::cout << "Do you choose to shut down the Ghost to protect the Net? (1), or do you leave it up, believing in the potential for change? (0)";
  int choice = 3;
  std::cin >> choice;
  if (choice == 1){
    std::cout << "You decide to shut down the Ghost, fearing the potential chaos if it's left unchecked. With a series of hacks and countermeasures, you confront the malicious AI. \nThe final battle ensues. You have to crack the AI's password before it forces you out of the system. \nThe encrypted password is U0G3K3G4W@RZ3G$XCIW3C3IL0G1S4R0CIG01! Good luck.\nEnter the decrypted Password: ";
    bool password = "F0R3V3R4H@CK3R$INTH3N3TW0R1D4C0NTR01!";
    bool guess = 0;
    std::cin >> guess;
    //if (guess == password){ {-Cant get it to work yet}
    std::cout << "You successfully shut down the Ghost, but the victory feels bittersweet. Still, Fade gives you a solemn nod, and you disconnect.";}
  else if (choice == 0)
    std::cout << "You choose to leave the Ghost in the Net, believing in its potential for transformation. As you exit the digital realm, Fade gives you a solemn nod, and you disconnect.";
  else
    return 0;

  std::cout << "\nYour journey as a Netrunner comes to an end, and you're left wondering about the consequences of your choice. The fate of the Net remains uncertain, and Fade's words linger in your thoughts.\n";
return 0;
}
