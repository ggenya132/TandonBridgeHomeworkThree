#include <iostream>
#include <string>
#include <map>


using namespace std;


const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;
double myFloor(double input){
    return (int) input;
}
double myCieling(double input){
      return  (int) input + 1; 

}
double myRound(double input){
   const int cieling = (int) input + 1; 
   const int floor = (int) input;
   return  cieling - input < input - floor ? cieling : floor;
}
int main(){

    int roundingMethod;
    double result, input;

    cout<<"Enter a real number:\n";
    cin>>input;
    cout<<"Choose your rounding method:\n";
    cout<<"1. Floor round:\n";
    cout<<"2. Ceiling round:\n";
    cout<<"3. Round to the nearest whole number:\n";
    cin>>roundingMethod;

    switch(roundingMethod){
        case FLOOR_ROUND:

       result = myFloor(input);
        break;
        case CEILING_ROUND:

       result = myCieling(input);
        break;
        case ROUND:

      result = myRound(input);
      break;
      default:

    } 
    cout<<result;
    return 0;
}
