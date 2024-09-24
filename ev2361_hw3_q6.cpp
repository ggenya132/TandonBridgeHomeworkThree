#include <iostream>

#include <map>

#include <string>

using namespace std;

void endl() {
  cout << endl;
}
class CallDetails {
  public: double startingHour;
  double startingMinute;
  double endingHour;
  double endingMinute;
  string dayOfCall;
};

double getRate(string dayOfcall, double hour) {
    if (dayOfcall == "Sa" || dayOfcall == "Su") {
        return 0.15; // Weekend rate
    }
    // Weekday rates
    if (hour >= 8 && hour < 18) {
        return 0.40; // Daytime rate
    }
    return 0.25; // Evening/Night rate
}
double calculateCost(CallDetails callDetails){

    double currentHour = callDetails.startingHour;
    double endingHour = callDetails.endingHour;

    const double rate = getRate(callDetails.dayOfCall, callDetails.startingHour);

    if(currentHour == endingHour){
        return rate * (callDetails.endingMinute - callDetails.startingMinute);
    }

    double totalCost = 0; 


    double costOfFirstHourReducedForMinutesNotSpent = rate * (60 - callDetails.startingMinute);

    totalCost += costOfFirstHourReducedForMinutesNotSpent;

    while(currentHour+1 <= endingHour - 1){
        totalCost += rate * 60;
        currentHour++;
    } 
    double costOfLastHour = callDetails.endingMinute * rate;

    totalCost += costOfLastHour;
    return totalCost;

};

int main() {

  double startingHour, startingMinute, endingHour, endingMinute;
  string dayOfPhoneCall;

  cout << "Please enter the day of the phone call in the following format, Mo, Tu, We, Th, Fr, Sa or Su: ";
  cin >> dayOfPhoneCall;
  endl();
  cout << "Please enter the starting hour of phone call in 24 hour format (00-24): ";
  cin >> startingHour;
  endl();
  cout << "Please enter the starting minute of phone call (0-59): ";
  cin >> startingMinute;
  endl();
  cout << "Please ending hour of phone call in 24 hour format (00-24): ";
  cin >> endingHour;
  endl();
  cout << "Please enter ending minute of phone call (0-59): ";
  cin >> endingMinute;
  endl();

  CallDetails callDetail;
  callDetail.dayOfCall = dayOfPhoneCall;
  callDetail.startingHour = startingHour;
  callDetail.startingMinute = startingMinute;
  callDetail.endingHour = endingHour;
  callDetail.endingMinute = endingMinute;

  cout<<"Total cost is: $"<<calculateCost(callDetail);

  return 1;

}