//including out library iostream with a directive include
#include<iostream>

//declaring our class SayHelloWorld
class SayHelloWorld{
//declare our function that will show on the screen Hello World
public:
    void printHelloWorld(){
	//In the function printHelloWorld with cout instruction printed Hello World
	std::cout << "Hello World" << std::endl;
    } 
};


//declaring main function type int
int main(){
    //instantiate the class SayHelloWorld
    //create the object print1 that contain the phrase
    SayHelloWorld print1;
    print1.printHelloWorld();     

    //system pause so that the program stops one moment for show Hello World
    system("pause");
    //return 0 good practice
    return 0;
}