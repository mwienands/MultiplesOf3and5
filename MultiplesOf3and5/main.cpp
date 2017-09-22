//
//  main.cpp
//  MultiplesOf3and5
//
//  Created by Michael Wienands on 9/22/17.
//  Copyright © 2017 Michael Wienands. All rights reserved.
//
//https://github.com/mwienands/MultiplesOf3and5.git
//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
//The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int total= 0;
    
    for(int i = 1;i<1000; i++ ){
        if(i%3 == 0){
            total += i;
            
        }else if(i%5 == 0){
            total +=i;
            
        }
    }
    
    std::cout << total;
    return 0;
}
