#include <iostream>
#include <stdlib.h>

using namespace std;

class Address {
  public:
    char* line1;
    char* line2;
    int zip;
    char* city;
    char* country;
};

class User {
  public:
    char* name;
    double age;
    Address address;
};

class ResultDetails {
  public:
    char* warnings;
    char* details;
};

class Result {
  public:
    int code;
    char* message;
    ResultDetails details;
};

Result* printUser(User* user) {
  cout << "Name " << user->name << "\n\r" ;
  // printf("Age coucou pour %d\n\r", user->age);

  // printAddress(&user->address);

  // user->name = "toto";

  // user->age = 100;

  Result *result;
  result = (Result*)malloc(sizeof(Result));
  result->code = 3;
  result->message = (char*)"OK";

  ResultDetails details;
  details.warnings = (char*)"Everything went ok";
  details.details = (char*)"RAS";

  result->details = details;

  return result;
}