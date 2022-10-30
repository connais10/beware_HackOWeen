//Connor and Jimmy's submission to the uLeth Computer Science Club
//Hack'O'Ween Event


#include <iostream>
#include <iomanip>
#include <vector>
#include <stdlib.h>
//need vector #include statement

using namespace std;

// in art:: namespace
namespace art{

const string beware = R"(@@@@@@@   @@@@@@@@  @@@  @@@  @@@   @@@@@@   @@@@@@@   @@@@@@@@
@@@@@@@@  @@@@@@@@  @@@  @@@  @@@  @@@@@@@@  @@@@@@@@  @@@@@@@@
@@!  @@@  @@!       @@!  @@!  @@!  @@!  @@@  @@!  @@@  @@!
!@   @!@  !@!       !@!  !@!  !@!  !@!  @!@  !@!  @!@  !@!
@!@!@!@   @!!!:!    @!!  !!@  @!@  @!@!@!@!  @!@!!@!   @!!!:!
!!!@!!!!  !!!!!:    !@!  !!!  !@!  !!!@!!!!  !!@!@!    !!!!!:
!!:  !!!  !!:       !!:  !!:  !!:  !!:  !!!  !!: :!!   !!:
:!:  !:!  :!:       :!:  :!:  :!:  :!:  !:!  :!:  !:!  :!:
 :: ::::   :: ::::   :::: :: :::   ::   :::  ::   :::   :: ::::
:: : ::   : :: ::     :: :  : :     :   : :   :   : :  : :: ::   )";

const string house = R"(                        8o88o          __
                      o88o           o688o)
'-,    .``'.          _o8o    .-.'-.(6886898o
   \,'`   . \.  .----| |-.  ,'     o688868698o)
  .'  /   :   '/          \'  \  (68968886)6/88o
 /   '    '   /____________\   '.  866\88|889)
/    .    \   | ___   __   | .'  `   (969/9\
`           _ ||_|_| /  \  |______     \//  \
'.`"'.`,`'./_\||_|_| | .|  |______\.`.`||,`,'
`'^,_`'. ,"|O||______|  |__|======|,.',|| ,..
.'`. "\'^,`.,'.`'``.'/==\.,.'`,.' `,' .||.,.`
`',`' `,'.^ '. ,.'`,/====\,' `,. ^, `.-',, `,
.,`^  `. `,`  ,  ,`/======\,  ,'  `'.,"  .)";

const string livingroom = R"( ________________________________________________________________________
|: : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : |
|__________ : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : :|
|__]\% % % | : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : |
|___]\% % %|: :______ : : : : : : : : : : : : : : : : : : : : :___: : : :|
|____]\% % | :|======| :_: : : : : : . : : : : : :_: : : : : :/   \: : : |
|_____]\% %|: ||\|||||:/_\: :,: : :.'o'.: : :,: :/_\: : : : :|//   |: : :|
|______]\% | :|======| =|= __#_____|___|_____#__ =|= : : : : | ,*, | : : |
|_______]\%|: |______|: ^ :[___]           [___]: ^ : : : : : \*;*/ : : :|
|________]\| :|__  __| : : [_|_] o  `(,  o [_|_] : : : : :_____(_)_____: |
|_________]\: | .||. |: : :[___] |  ( )  | [___]: : :_!_: ||   .|.   || :|
|__________]==|__||__|====_[_|_]/!\_@@@_/!\[_|_]_===/___\=||____|____||==|
     _                    '====================='     | _                |
    |_)         __.;;.__      _______________         |( |               |
    /_\__      / ;(;;); \    (               )       _|_)|               |
  ~=_|_ _)====/__________\==(\               /)=====(____|========~      |
 ~=|___|LL====|==========|===|               |======LLLLLL=========~     |
~============================|_______________|======================~    |
=============================LLLLLLLLLLLLLLLLL=======================~   |
lc====================================================================~  ')";

const string kitchen = R"(   ____________________________________________________________________
 /|    |__I__I__I__I__I__I__I__I__I_|       _-       %       %         |\
  | _- |_I__I__I__I__I__I__I__I__I__|-_              %       %     _-  |
  |    |__I__I__I__I__I__I__I__I__I_|                %       %         |
  |  - |_I__I__I__I__I__I__I__I__I__|               ,j,      %w ,      |
  | -  |__I__I__I__I__I__I__I__I__I_|  -_ -        / ) \    /%mMmMm.   |
  |    |_I__I__I__I__I__I__I__I__I__|             //|  |   ;  `.,,'    |
  |-_- /                            \             w |  |   `.,;`       |
  |   /                              \    -_       / ( |    ||         |
  |  /                                \           //\_'/    (.\    -_  |
  | /__________________________________\          w  \/   -  ``'       |
  | |__________________________________|                               |
  |    |   _______________________   |     _-            -             |
  |_-  |  |                       |  |                        _-       |
  |    |  |                     _ |  |  T  T  T  T  T                  |
  | _-_|  |    __.'`'`'`''`;__ /  |  |  |  |  |  |  |        _-     -  |
  |    |  | _/U  `'.'.,.,".'  U   |  |  | (_) |  |  |                  |
  |    |  |   |               |   |  | / \    @ [_]d b    _@_     |    |
  |    |  |   |      `', `,   |   |  | |_|   ____         [ ]     |    |
  |_-  |  |   |   `') ( )'    |   |  | ______\__/_________[_]__   |    |
  |    |  |   |____(,`)(,(____|   |  |/________________________\  |    |
  |    |  |  /|   `@@(@@)@)'  |\  |  | ||            _____   ||   |    |
  |    |  | //!\  @@)@@)@@@( /!\\ |  | ||   _--      \   /   ||  /|\   |
  |__lc|__|/_____________________\|__|_||____________/###\___||_|||||__|
 / -_  _ -      _ -   _-_    -  _ - _ -|| -_    _  - \___/_- || |||||-_ \ )";

const string bathroom = R"( _______________________________________________________________________________
|% % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % %|
| % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % % |
|% % % % % %_____________________________ % % % % % % % % % % % % % % % % % % % |
| % % % % %|  _________________________  | % % % % % % % % % % % % % % % % % % %|
|% % _ % % |O|                         |O|% % % % % % % % % % _ % % % % % % % % |
| % /_\ % %| | //                      | | % % % % % % % % % /_\ % % % % % % % %|
|%  =|=  % |O|                         |O|% % % % % % % % %  =|=  % % % % % % % |
| % % % % %| |    //                   | | % % % % % % % % % % % % % % % % % % %|
|% % % % % |O|                         |O|% % % % % % % % % % % % % % % % % % % |
|==========| |                         | |======================================|
| SHOWERS  |O|                         |O|                                      |
| <=====   | | //                      | |              ________________        |
|          |O|_________________________|O|             |________________|       |
|          |_____________________________|               |            |    _    |
|           ______________/;____________                 |~           |  =)_)=  |
|         /`        .--T--|--T--.       `\       ____    |            |   (_(   |
|        /_________'------'------'________\     /PUSH\   |__%______%__|   )_)   |
|         |  _____   ____   ____   _____ |     /______\   .`        `.          |
|         | |__~__| |    | |    | |__~__||     |      |   :          :          |
|         |         |    | |    |        |     |      |    '.      .'           |
lc________|         |   {| |}   |        |_____|      |______\`'-'`/____________|
          |         |    | |    |        |     |______|       |   |
          |_________|____|_|____|________|                    |___| )";

const string bedroom = R"(            _      ()              ()      _
           / \     ||______________||     / \
          /___\    |                |    /___\
            |      |      ~@@~      |      |
           (_)     |_______  _______|     (_)
        ___/_\___  {_______}{_______}  ___/_\___
         |__~__|   %%%%%%%%%%%%%%%%%%   |__~__|
      ___|_____|__%%%%%%%%%%%%%%%%%%%%__|_____|___
         |     | %%%%%%%%%%%%%%%%%%%%%% |     |
          `=====%%%%%%%%%%%%%%%%%%%%%%%%=====`
         `=====%%%%%%%%%%%%%%%%%%%%%%%%%%=====`
        `=====%%%%%%%%%%%%%%%%%%%%%%%%%%%%=====`
       `=====/||||||||||||||||||||||||||||\=====`
      `======||||||||||||||||||||||||||||||======`
     `=======|||||||||||||||||||||||||||lc|=======`
    `==============================================`
   `================================================`
  `==================================================`
 `====================================================`)";

const string basement = R"(  _________________________________________________________
 /|     -_-                                             _-  |\
/ |_-_- _                                         -_- _-   -| \
  |                            _-  _--                      |
  |                            ,                            |
  |      .-'````````'.        '(`        .-'```````'-.      |
  |    .` |           `.      `)'      .` |           `.    |
  |   /   |   ()        \      U      /   |    ()       \   |
  |  |    |    ;         | o   T   o |    |    ;         |  |
  |  |    |     ;        |  .  |  .  |    |    ;         |  |
  |  |    |     ;        |   . | .   |    |    ;         |  |
  |  |    |     ;        |    .|.    |    |    ;         |  |
  |  |    |____;_________|     |     |    |____;_________|  |
  |  |   /  __ ;   -     |     !     |   /     `'() _ -  |  |
  |  |  / __  ()        -|        -  |  /  __--      -   |  |
  |  | /        __-- _   |   _- _ -  | /        __--_    |  |
  |__|/__________________|___________|/__________________|__|
 /                                             _ -        lc \
/   -_- _ -             _- _---                       -_-  -_ \
)";

const string game_over = R"( _____   ___  ___  ___ _____   _____  _   _ ___________
|  __ \ / _ \ |  \/  ||  ___| |  _  || | | |  ___| ___ \
| |  \// /_\ \| .  . || |__   | | | || | | | |__ | |_/ /
| | __ |  _  || |\/| ||  __|  | | | || | | |  __||    /
| |_\ \| | | || |  | || |___  \ \_/ /\ \_/ / |___| |\ \
 \____/\_| |_/\_|  |_/\____/   \___/  \___/\____/\_| \_|)";

 const string pumpkin = R"(                  ___
               ___)__|_
          .-*'          '*-,
         /      /|   |\     \
        ;      /_|   |_\     ;
        ;   |\           /|  ;
        ;   | ''--...--'' |  ;
         \  ''---.....--''  /
          ''*-.,_______,.-*'    )";
}


const vector<string> actions =
{"Look behind the couch", "Open the closet", "Turn on the TV"};

const vector<string> riddles =
{"Find a sheet that said: The best place to access murder weapons!",
"Find a clue that said: A place to rest your head or a place to lay when dead",
"Where a mummy gets her new outfits from."};

const vector<string> locations =
{"kitchen", "bedroom", "bathroom"};



void print_riddle(int& riddle_no, string& location);
void printStartChallenge(int& lives, string& location);
void printChallenge(int& lives, string& location);
void printLastChallenge(int& lives, string& location);

//track player lives
int lives = 3;
//keep track of the user’s location
string location = "house";


int main() {

    //exit the game when lost
    bool won = false;
    //which direction the player wants to take.
    cout << endl << "Connor and Jimmy present: " << endl << art::beware
    << endl;


    cout << endl << setw(300) << left
<< R"(You and your family are finally getting away. Your midterms are
all completed and its time to put your feet up by the lake. Even at the
end of October the sun is still shining and all the good in the world
seems to be surrounding you.)"
<< "\n" << "As the day turns to night the family settles down, ready to head "
<< "to bed."
<< " You suddenly jump awake as you hear a scream. You grab your machete and "
<< "sneak out your bedroom door. "
<< "As you heads down the creaky corridor of your family's lake house "
<< "you notice that your sister's bedroom door is wide open. Upon a futher "
<< "search through the house you notice the front door is also open."
<< "\n\n"
<< "You hear the scream again." << "\n\n" << "Coming from the distance. You "
<< "spot a house amongst the giant pine trees. You as you approach the house "
<< "you hear ... a final scream" << endl;


    cout << "Press Enter to Start" << endl;
    //if Enter was pressed, start the game
    if (cin.get() == '\n') {
      cout << "\033[2J\033[1;1H";
      cout << art::house << endl;
      cout << "You must rescue your sister from this house. You will face"
      << " a series of riddles and challenges along the way. Hopefully she"
      << " survives. You will have " << lives << " lives.";


      while (lives > 0 && !won){
          //display options to advance
          // cout << "Choose wisely: " << endl;

          if (location == "house")
            printStartChallenge(lives, location);
          else if (location == "livingroom")
            printChallenge(lives, location);
          else if (location == "basement") {
            cout << "\033[2J\033[1;1H";
            cout << art::basement << endl;
            cout << "You rush down the stairs and find your sister safe."
            " Good job, stay safe out there!" << endl << art::pumpkin << endl;
            won = true;
        }
          else {
            printLastChallenge(lives, location);
          }

      if (lives == 0){
        cout << "\033[2J\033[1;1H";
        cout << "You take too long to find your sister."
        " The demon comes back into the house, enters the basement and grabs "
        "her lifeless body. He carries her into the void and you never see "
        "her again." << endl << art::game_over << endl;
      }

      }
    }

return 0;
}


void print_riddle(int& riddle_no, string& location) {
     cout << riddles[riddle_no] << endl;
     if (riddle_no == locations.size()-1) {
       cout << "1. Advance to the " << locations[riddle_no] << endl;
       cout << "2. Advance to the " << locations[riddle_no-1] << endl;
     } else {
       cout << "1. Advance to the " << locations[riddle_no] << endl;
       cout << "2. Advance to the " << locations[riddle_no+1] << endl;
     }

     int choice;

     bool valid = false;
     while(!valid && lives > 0) {
       cout << "Enter your choice (1 or 2): -- ";
       cin >> choice;
       cout << endl;

       switch(choice) {
         case 1: location = locations[riddle_no]; valid = true; break;
         case 2: lives--;
         cout << "Wrong choice!" << endl;
         cout << "You have " << lives << " lives left!" << endl;
         break;
         default: cout << "Invalid Option" << endl;
       }
     }
}


void printStartChallenge(int& lives, string& location){

    bool valid = false;
    cout << "A demon comes crashing out of the front door." << endl;
    cout << "1. Swing your machete at it!" << endl;
    cout << "2. Headbutt the demon!" << endl;

    while(!valid && lives > 0) {

      int choice;
      cout << "Enter your choice (1 or 2): -- ";

      //take input
      cin >> choice;
      cout << endl;

      switch (choice) {
        case 1: location = "livingroom"; valid = true;
        cout << "\033[2J\033[1;1H";
        cout << art::livingroom << endl;
        cout << "The demon screams and collapses to the floor, you have now"
        " advanced to the living room. Look for the new clues to advance."
        << endl;
        break;
        case 2: lives--;
        cout << "Wrong choice!" << endl;
        cout << "You have " << lives << " lives left!" << endl;
        break;
        default: cout << "Invalid Choice!" << endl;
      }
    }

}


/**/
void printChallenge(int& lives, string& location){
   //generate random numbers for random actions
   int random_1 = (rand() % 3);
   int random_2 = (rand() % 3);

   bool valid = false;

   while(true){
     //print two random actions
     if (random_1 != random_2){
       cout << "1. " << actions[random_1] << endl;
       cout << "2. " << actions[random_2] << endl;
       break;
     } else {
       random_2 = rand() % 3;
     }
   }

   int choice;

   while(!valid) {
     cout << "Enter your choice (1 or 2): -- ";
     cin >> choice;
     cout << endl;

     switch(choice) {
       case 1: print_riddle(random_1, location); valid = true;
       break;
       case 2: print_riddle(random_2, location); valid = true;
       break;
       default: cout << "Invalid Option" << endl;
     }
   }
}

void printLastChallenge(int& lives, string& location){

  bool valid = false;
  cout << "\033[2J\033[1;1H";

  if(location == "bedroom"){
    cout << art::bedroom << endl;
    cout << "There is a note on the bed that says: " << endl;}
  else if (location == "bathroom"){
    cout << art::bathroom << endl;
    cout << "There is a note in the sink that says: " << endl;}
  else{
    cout << art::kitchen << endl;
    cout << "There is a note on the counter that says: " << endl;}




  cout << "Right under the house you go, Walk down the stairs below. "
  "Turn the light on; this is underground, This is where your next "
  "clue is found." << endl;
  cout << "1. Advance to the Basement" << endl;
  cout << "2. Advance to the Garden" << endl;

  while(!valid && lives > 0) {

    int choice;

    //take input
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    switch (choice) {

      case 1: location = "basement"; valid = true; break;
      case 2: lives--;
      cout << "Wrong choice!" << endl;
      cout << "You have " << lives << " lives left!" << endl;
      break;
      default: cout << "Invalid Choice!" << endl;
    }
  }
}
