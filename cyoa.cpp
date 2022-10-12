// cyoa.cpp
// Name:Jonathan Jean

#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  cout << "Welcome to One Piece the experience!" << endl;
  cout << "Are you looking to be a pirate??";
  cout << " (choose 1 for Yes and 2 for No)" << endl;
  int choice;
  cin >> choice;
  string crew_name;
  if (choice == 1) {
    cout << "Choose yerrrr pirate crew name!: ";
    cin.ignore();
    getline(cin, crew_name);
    crew_name[0] = toupper(crew_name[0]);
    cout << "Ahoyyy matey of " << crew_name
         << " choose yee role: \n"
            "\t Swordsman\n"
            "\t Captain\n"
            "\t Doctor\n"
            "\t Navigator\n"
            "\t Cook\n";
  
    string role;
    cin >> role;
    role[0] = toupper(role[0]);
    cout << "Enter yer age: ";
    int age;
    cin >> age;
    cout << "I see so yee be a " << age << " year old " << role 
         << " thats interesting but ok" << endl; 
    cout << "Lets take a look at yer " << role << " efficiency." << endl;
    int Eff;
    Eff = (age * 2 + 10 - 5) / 2 - 15;
    cout << Eff << endl;
    if (Eff <= 5) {
      cout << "Yer not ready to set sail as a " << role 
           << " train for 5 more years! Gabababa!!!" << endl;
      return 2;
    }
    if (Eff < 12) {
      cout << "Yer a pretty good " << role
           << " and ready to set sail Zehahaha!!!" << endl;
      return 3;
    }
    if (Eff >= 24) {
      cout << "Yerrr to old to be a great " << role
           << ". If you haven't found success yet give up! Shishishi!!!"
           << endl;
      return 4;
    }
    if (Eff >= 12 or Eff < 24) {
      if (role == "Swordsman")
        string Super_role = role.replace(0, role.length(), "Samurai");
      if (role == "Doctor") {
        string Super_role = role.replace(0, role.length(), "Physician");
      }
      if (role == "Captain" or "Cook" or "Navigator") {
        string Super_role = role.replace(0, 0, "Fleet ");
        cout << "Due to yee high abilities you'll now be dubbed: ";
        cout << "A " << Super_role << endl;
        cout << "Ye be a " << role
             << " of the highest caliber you will have great success on the "
                "sea! Wororororo!!!"
             << endl;
        return 5;
      }
    }
  }
  if (choice == 2) {
    cout << "Leave yee damn dirty marine!! FEHFEHFEH" << endl;
    return 1;
  }
  if (choice > 2 or choice < 1)
    cout << "*SIGH* 4th wall break....DUDE!!! Your ruining my hard work by "
            "going outside the rules of my code!!! But whatever just start "
            "over the right way I guess....."
         << endl;
  return 1;
}