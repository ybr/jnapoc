#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char* line1;
  char* line2;
  int zip;
  char* city;
  char* country;
} TAddress;

typedef struct {
  char* name;
  int age;
  TAddress address;
} TUser;

typedef struct {
  char* warnings;
  char* details;
} T_RESULT_DETAILS;

typedef struct {
  int code;
  char* message;
  T_RESULT_DETAILS details;
} TResult;

void hello() {
  printf("Hello world from Yo!\n");
}

double hello1(char* str, int times) {
  int i;
  for(i = 0; i < times; i++) {
    printf("%d %s\r\n", i, str);
  }
  return 0.123;
}

void printAddress(TAddress* address) {
  printf("Address:\n\r");
  printf("\t%s\n\r", address->line1);
  if(address->line2 != NULL) {
    printf("\t%s\n\r", address->line2);
  }
  printf("\t%d %s\n\r", address->zip, address->city);
  printf("\t%s\n\r", address->country);
}

TResult* printUser(TUser* user, int user_size, double zeros[], int zero_size) {
  int i;

  for(i = 0; i < zero_size; i++) {
    printf("Zero(%d)=%f\n\r", i, zeros[i]);
  }

  printf("Name %s\n\r", user->name);
  printf("Age coucou pour %d\n\r", user->age);

  printAddress(&user->address);

  TResult *result;
  result = malloc(sizeof(TResult));
  result->code = 3;
  result->message = "OK";

  T_RESULT_DETAILS details;
  details.warnings = "Everything went ok";
  details.details = "RAS";

  result->details = details;

  return result;
}