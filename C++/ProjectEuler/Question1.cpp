#include <iostream>


int main(){


    // To find the sum of all numbers below n divisible by y, we can use the formula
    // y*(n/y)((n/y) + 1)/2

    int lim{1000};  // Given end point in the question
    
    int subtract{};
    if(lim%3==0 || lim%5==0){

        subtract = lim;

    }


    // We need to add the sum of numbers below n divisible by 3 and 5 respectively, and remove the repetitions
    std::cout << 3*(lim/3)*((lim/3)+1)/2 + 5*(lim/5)*((lim/5)+1)/2 - 15*(lim/15)*((lim/15)+1)/2 - subtract;  

    return 0;

}