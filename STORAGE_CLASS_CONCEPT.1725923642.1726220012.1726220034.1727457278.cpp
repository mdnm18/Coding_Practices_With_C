// auto Storage Class : 
/*
#include<stdio.h>
void autoExample()
{	
	auto int a =10;
	printf("VALUE OF AUTO VARIABLE a : %d\n",a);
}
int main()
{
	autoExample();
	return 0;
}
*/
// register Storage Class : 
/*
#include<stdio.h>
void registerExample()
{	
	register int a =10;
	printf("VALUE OF REGISTER VARIABLE a : %d\n",a);
}
int main()
{
	registerExample();
	return 0;
}
*/
// static Storage Class : 
/*
#include<stdio.h>
void staticExample()
{	
	static int a =0;
	a++;
	printf("VALUE OF STATIC VARIABLE a : %d\n",a);
}
int main()
{
	staticExample();
	return 0;
}
*/
// extern Storage Class : 
/*
#include<stdio.h>
extern int a=10;
void externExample()
{	
	printf("VALUE OF EXTERN VARIABLE a : %d\n",a);
}

int main()
{
	externExample();
	return 0;
}
*/
#include <stdio.h>
// Global variable to demonstrate extern storage class
int global_var = 10; // extern by default

// Function to demonstrate auto storage class
void autoStorage() {
    int auto_var = 5; // auto is default
    printf("Auto variable: %d\n", auto_var);
}

// Function to demonstrate register storage class
void registerStorage() {
    register int register_var = 15; // register variable
    printf("Register variable: %d\n", register_var);
}

// Function to demonstrate static storage class
void staticStorage() {
    static int static_var = 20; // static variable
    static_var++;
    printf("Static variable: %d\n", static_var);
}

// Function to demonstrate extern storage class
void externStorage() {
    extern int global_var; // Declare the external variable
    printf("Extern variable: %d\n", global_var);
}

int main() {
    // Demonstrate auto storage class
    autoStorage();
    
    // Demonstrate register storage class
    registerStorage();
    
    // Demonstrate static storage class multiple times
    for (int i = 0; i < 3; i++) {
        staticStorage();
    }
    
    // Demonstrate extern storage class
    externStorage();

    return 0;
}


























