#include <iostream>
#include <stdlib.h>
using namespace std;
int Vending_machine(int[],int);

int main()
{
	int size = 8;
	
	//test strings
	int accept[size] = {1,1,1,1,0,1,1,1};
    int reject[size] = {0,1,1,1,0,0,0,1};  
    
    //funcation call
	Vending_machine(accept,size);
	Vending_machine(reject,size);
	  
    return 0;
}

int Vending_machine(int sequence[],int size){
    int states = 1;
    int index = 0;


    while (index < size){	
    //vending machine not empty 
		{
		if (states == 1){ 
			if(sequence[index] == 1){
			states++;
			}
		}
			else{ //trap state
			cout<<"String rejected"<< endl;
			return 0;
			}

	//money inserted 
		if (states == 2){ 
			if(sequence[index] == 1){
			states++;

			}
		}

		//validate the money 	
		if (states == 3){
			if(sequence[index] == 1){
			states++;
			}
		}
			else{ //trap state
			cout<<"String rejected"<< endl;
			return 0;
			}
			
		//item selected 	
		if (states == 4){ 
			if(sequence[index] == 1){
			states++;
			}
		}
		
		//check the mount of money 
		if (states == 5){
			if(sequence[index] == 1){
			states++;
			}
		}
			else{
			states = 4;
			}
		//check availability	
		if (states == 6){  
			if(sequence[index] == 1)
			states++;
		}
			else
			states = 4;
			
		// drop item	
		if (states == 7){ 
		cout<<"String accepted"<<endl; // sequence accepted .
		return 0;
	}
	index++;
}
}

    return 0;
}



