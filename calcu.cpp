#include<iostream>
#include<math.h>
int add(int num1, int num2){
    /**
     * @brief function for addition 
     * 
     */
    int sum;
    sum=num1+num2;
    return sum;
}
int sub(int num1, int num2){
    /**
     * @brief function forsubtraction 
     * 
     */
    int diff;
    diff=num1-num2;
    return diff;
}
int mul(int num1, int num2){
    /**
     * @brief function for multiplication 
     * 
     */
    int prod;
    prod=num1*num2;
    return prod;
}
int division(int num1, int num2){
    /**
     * @brief function for division 
     * 
     */
    int rem;
    rem=num1/num2;
    return rem;
}
int main(){
    
    /**
     * @brief Calling the functions
     * 
     */
    std::cout<<"Addition:"<<add(1,2)<<add(10,20)<<add(30,2)<<std::endl;
    std::cout<<"Subtraction:"<<sub(20,5)<<sub(40,5)<<sub(45,5)<<std::endl;
    std::cout<<"Muliplication:"<<mul(70,3)<<mul(35,8)<<mul(17,8)<<std::endl;
    std::cout<<"Division:"<<division(100,10)<<division(20,5)<<division(30,6)<<std::endl;
    return 0;
}

	
