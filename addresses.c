//Include the header files
#include<stdio.h>
#include<stdlib.h>

//Function to obtain page number from 32-bit virtual address 
unsigned int addr_pn(unsigned int address){
  return address>>12;
}

//Function to obtain offset from 32-bit virtual address 
unsigned int addr_of(unsigned int address){
  unsigned int mask=4095;
  return (address & mask);
}
  
int main(int argc, char* argv[]){
  
  //variable declerations
  unsigned int address;
  unsigned int page_number;
  unsigned int offset;
  
  address=(unsigned int)atoi(argv[1]); //Use atoi to convert virtual address from string type to int
  //Function calls
  page_number=addr_pn(address);
  offset=addr_of(address);

  // Print the output
  printf("The address %u contains:\n",address);
  printf("page number = %u\n",page_number);
  printf("offset = %u\n",offset);
  
  return 0;
}
