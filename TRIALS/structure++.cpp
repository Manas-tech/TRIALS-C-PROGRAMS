#include <stdio.h>
struct stu_address
{
  int street;
  char *state;
  char *city;
  char *country;
};
struct stu_data
{
  int stu_id;
  int stu_age;
  char *stu_name;
  struct stu_address stuAddress;
};
int main(){
  struct stu_data mydata;
  mydata.stu_id = 12345;
  mydata.stu_age = 18;
  mydata.stu_name = "manas";
  mydata.stuAddress.state = "RJ";
  mydata.stuAddress.street = 309;
  mydata.stuAddress.city = "udaipur";
  mydata.stuAddress.country = "India";
  printf("student Data: ");
  printf("\nStudent id: %d",mydata.stu_id);
  printf("\nStudent age: %d",mydata.stu_age);
  printf("\nStudent name: %s",mydata.stu_name);
  printf("\nStudent street: %d",mydata.stuAddress.street);
  printf("\nStudent state: %s",mydata.stuAddress.state);
  printf("\nStudent city: %s",mydata.stuAddress.city);
  printf("\nStudent country: %s",mydata.stuAddress.country);

  return 0;}