#include<stdio.h>
#include<stdlib.h>

unsigned int addr_pn(unsigned int address){
  return address>>12;
}

unsigned int addr_of(unsigned int address){
  unsigned int mask=4095;
  return (address & mask);
}
  
int main(int argc, char* argv[]){
  unsigned int address;
  unsigned int page_number;
  unsigned int offset;
  
  address=(unsigned int)atoi(argv[1]);
  page_number=addr_pn(address);
  offset=addr_of(address);

  printf("The address %u contains:\n",address);
  printf("page number = %u\n",page_number);
  printf("offset = %u\n",offset);
  
  return 0;
}
