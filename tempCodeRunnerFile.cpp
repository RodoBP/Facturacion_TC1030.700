#include <stdlib.h>
#include <stdio.h> 
#include <time.h> 
#include <iostream>

using namespace std;

srand(time(0));  // Initialize random number generator.
     
    cout<<"Random numbers generated between 1 and 10:"<<endl;
    for(int i=0;i<10;i++){
        cout << (rand() % 10) + 1<<" ";}