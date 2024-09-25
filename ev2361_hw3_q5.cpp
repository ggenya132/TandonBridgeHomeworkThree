#include <iostream>

#include <string>

using namespace std;

// Please	enter	weight	(in	pounds): 135		
// Please	enter	height	(in	inches): 71		
// The	weight	status	is:	Normal
const double KG_TO_LBS = .453592;
const double METERS_TO_INCHES = .0254;
double getKgFromLb(double weightInLbs) {
  return weightInLbs * KG_TO_LBS;
};
double getMetersFromInches(double heightInInches) {
  return heightInInches * METERS_TO_INCHES;
};
void endl() {
  cout << endl;
}
int main() {

  double heightInInches, weightInLbs;
  cout << "Please enter weight (in pounds): ";
  cin >> weightInLbs;
  endl();
  cout << "Please enter height (in inches): ";
  cin >> heightInInches;
  endl();

  double heightInCm = getMetersFromInches(heightInInches);
  double weightInKg = getKgFromLb(weightInLbs);
  double heightInMetersSquared = heightInCm * heightInCm;
  double calculatedBmi = weightInKg / heightInMetersSquared;

  string status = calculatedBmi >= 0 && calculatedBmi < 18.5 ?
    "Underweight" : calculatedBmi >= 18.5 && calculatedBmi < 25 ? "Normal" : calculatedBmi >= 25 && calculatedBmi < 30 ? "Overweight" : "Obese";

  cout << "The weight status is: "<<status;

  return 1;

}