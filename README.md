# Addresser
This is the C code for converting a 32-bit virtual address with a 4 KB page size into a page number and an offset. <br/>
The input is a 32-bit virtual address passed (as a decimal nubmer to the program) as a command line argument. <br/>
The program translates the 32-bit virtual address into a page number (with page size 4 KB) and and offset. <br/>
Unsigned integers (4 bytes) are used for all data types as the addresses, page numbers and offsets are positive. <br/>

Example of a 32-bit virtual address converted into page number and offsett (with a 4 KB page size): <br/>

![image](https://user-images.githubusercontent.com/60248071/141734043-0ad13cca-5315-4190-b942-c014e4d61ef3.png)
