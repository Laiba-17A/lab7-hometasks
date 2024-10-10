#include <stdio.h>

int main() {
    
      char name[100];
      char email[100];
      char phnumber[20];
      
      int r_name;
	  int r_email;
	  int r_ph;
      
      printf("enter your full name: \n");
      r_name = scanf(" %[A-Za-z ]",&name);
       if(r_name != 1)
	  {
	  printf("invalid name format");
	  return 0;
	 }
	 else{
	  printf("enter your email: \n");
	  r_email = scanf(" %[A-Z a-z 0-9 .@_]",&email);
	  if(r_email != 1)
	 {
	  printf("invalid email format");
	  return 0;
	 }
	 else{
	  printf("enter your phone number: \n");
	  r_ph = scanf(" %[0-9 +-()]",&phnumber);
	  
	  if(r_ph != 1)
	 {
	  printf("invalid phone number format");
	  return 0;
	 }
	 }
	 }
	  printf("Name: %s \n",name);
	  printf("Email: %s \n",email);
	  printf("Phone Number: %s \n",phnumber);
	  

return 0;
}