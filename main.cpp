#include <iostream>
#include <string>

template <typename... T> void ignoreUnused(T &&...) {}

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free
functions. This will be the first project where the code you write will be
compiled and you will be responsible for making sure it compiles before
submitting it for review.


 1) Write down the names of the 6 major primitive types available in C++  here:
int
float
bool
double
char
unsigned int

2) for each primitive type, write out 3 variable declarations inside the
variableDeclaration() function on line 59. a) give each variable declaration an
initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type
'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of
type 'void'. b) at the end of the function, call ignoreUnused once and pass all
of your variables to it. see line 71 for an example

3) Declare 10 free functions
    each declaration should have a random number of parameters in the function
parameter list. When naming your parameters, choose names that are relevant to
the task implied by the function's name. remember: Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing
semicolon 5) pass each of your function parameters to the ignoreUnused function
like you did in b) 6) if your function returns something other than void, add
'return { };' at the end of it. 7) provide default values for an arbitrary
number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the
formatting of your 10 functions.  At this point, you might have something that
looks like this: float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar );
return { }; } This does not conform with the coding standard for this course
(check the Readme.MD) and needs to be corrected

9) in the main function at the end:
    for each of those functions declared,
        a) write out how the function would look if called with correct
arguments b) if the function returned anything, store it in a local variable via
the 'auto' keyword. c) pass the local variables to ignoreUnused() as you did in
2b) see main() for an example of this.

10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

// 2)

void variableDeclarations() {
  // example:
  int number =
      2; // declaration of a variable named "number", that uses the primitive
         // type 'int', and the variable's initial value is '2'
  int numOfBottle = 4;
  int phoneNumber = 823123124;
    
  float price = 20.0f;
  float phi = 3.14;
  float tempratureDegree = 32.1f;
  
  double coin = 0.3;
  double balanceAccount = 1024.234;
  double gdp = 78240.10;
    
  bool isTrue = true;
  bool isHuman = true;
  bool isAnimal = false;
    
  char alphabet = 'a';
  char initialName = 'b';
  char houseBlock = 'c';
    
  unsigned int someNum = 2;
  unsigned int houseNumber = 9;
  unsigned int numOfFan = 3;

  ignoreUnused(
      number, numOfBottle, phoneNumber, price, phi, tempratureDegree, coin, balanceAccount,
      gdp, isTrue, isHuman, isAnimal, alphabet, initialName, houseBlock, someNum, 
      houseNumber, numOfFan); // passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(
    int rentalDuration,
    int carType = 0) // function declaration with random number of arguments,
                     // arbitrary number of arguments have default value
{
  ignoreUnused(rentalDuration, carType); // passing each function parameter to
                                         // the ignoreUnused() function
  return {}; // if your function returns something other than void, add 'return
             // {};' at the end of it.
}

/*
 1)
 */
void numOfDogsOnShelter (int dogsType) {
  std::string nameOfDog = "brenda";
  int golden = 10;

  ignoreUnused(nameOfDog, golden);
}
/*
 2)
 */
void runMarathon (int distance) {
  int participant = 100;

  ignoreUnused(participant);
}
/*
 3)
 */
int travelToJakarta (int days, int person) {
  days = 1;
  person = 1;
  int priceOfHotel = 1000;
  return priceOfHotel * days * person;
}
/*
 4)
 */
bool isEat (std::string foodMenu) {
  std::string restaurant = "KFC";
  
  ignoreUnused(restaurant);
  return true;
}
/*
 5)
 */
void playGames (std::string gameName) {
  std::string phoneType = "Android";
  ignoreUnused(phoneType);
}
/*
 6)
 */

float calcDiameter (int radius) {
  float phi = 3.14;
  ignoreUnused(radius);

  return phi*radius*radius;
}
/*
 7)
 */
double calcHouseArea (double length, double width) {
  double area = length * width;
  ignoreUnused(area);

  return area;
}
/*
 8)
 */
void recipeToCook (std::string menu) {
  std::string seasoning = "salt";
  ignoreUnused(seasoning);
}
/*
 9)
 */
int countOfstudent (char schoolType) {
  int schoolStudent = 100;
  int collegeStudent = 80;
  ignoreUnused(schoolStudent, collegeStudent);

  return collegeStudent;
}
/*
 10)
 */
int volumeOfBottle (std::string bottleType) {
  int waterGallon = 1000;
  int glassTumbler = 10;
  ignoreUnused(waterGallon, glassTumbler);

  return waterGallon;
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main() {
  // example of calling that function, storing the value, and passing it to
  // ignoreUnused at the end of main()
  auto carRented = rentACar(6, 2);

  // 1)
  numOfDogsOnShelter (6);
  // 2)
  runMarathon (10);
  // 3)
  auto cost = travelToJakarta(2, 1);
  // 4)
  auto eat = isEat ("Fried Chicken");
  // 5)
  playGames ("FIFA 23");
  // 6)
  auto circle = calcDiameter(7);
  // 7)
  auto luxuryHouse = calcHouseArea(400.0f, 500.0f);
  // 8)
  recipeToCook ("Nasi Goreng");
  // 9)
  auto collegeStudent = countOfstudent('C');
  // 10)
  auto waterGallon = volumeOfBottle("water gallon");

  ignoreUnused (carRented, cost, eat, circle, luxuryHouse, collegeStudent,
               waterGallon);
  std::cout << "good to go!" << std::endl;
  return 0;
}
