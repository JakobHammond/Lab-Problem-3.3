//
//  main.cpp
//  p3.3
//
//  Created by Jakob Hammond on 9/7/23.
//

#include <iostream>
using namespace std;

int main(void){
    int numEggs;
    int numCartons;
    int numLeftover;
    
    cout << "How many eggs have the chickens produced? ";
    cin >> numEggs;
    
    numCartons = numEggs / 12;
    numLeftover = numEggs % 12;
    
    cout << "Number of cartons needed: " << numCartons << "\nNumber of eggs leftover: " << numLeftover << endl;
}
