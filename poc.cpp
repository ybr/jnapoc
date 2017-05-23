#include <iostream>
#include <stdlib.h>
#include <stdio.h>

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
    int age;
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

void printAddress(Address* address) {
  cout << "Address:\n\r";
  cout << "\t" << address->line1 << "\n\r";
  if(address->line2 != NULL) {
    cout << "\t" << address->line2 << "\n\r";
  }
  cout << "\t" << address->zip << " " << address->city << "\n\r";
  cout << "\t" << address->country << "\n\r";
}

extern "C" Result* printUser(User* user, double zeros[], int zero_size) {
  cout << "FROM C++\n\r";

  int i;
  for(i = 0; i < zero_size; i++) {
    cout << "Zero(" << i << ")=" << zeros[i] << endl;
  }

  cout << "Name " << user->name << "\n\r" ;
  cout << "Age " << user->age << "\n\r";

  printAddress(&user->address);

  Result* result;
  result = new Result;
  result->code = 3;
  result->message = (char*)"OK";

  ResultDetails details;
  details.warnings = (char*)"Everything went ok";
  details.details = (char*)"RAS";

  result->details = details;

  return result;
}