#include <iostream>
#include <string>
#include <map>
using namespace std;

// Question	2:
// Write	a	program	that:
// • Asks	the	user	for	their	name.
// • Asks	the	user	to	input	their	graduation	year.
// • Asks	the	user	to	input	the	current	year.
// Assume	the	student	is	in	a	four-year	undergraduate	program.	Display	the	current	status	the
// student	is	in.	Possible	status	include:	not	in	college	yet,	freshman,	sophomore,	junior,	senior,
// graduated.
// Note:	If	graduation	year	equals	to	current	year,	status	is	‘Graduated’;	if	graduation	year	is
// four	years	after	current	year,	status	is	‘Freshman’,	etc.
// Your	program	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:
// Please	enter	your	name: Jessica
// Please	enter	your	graduation	year: 2019
// Please	enter	current	year: 2015
// Jessica,	you	are	a	Freshman
int main()
{
    map<int, string> yearToStatusMap;
    yearToStatusMap[4] = "Freshman";
    yearToStatusMap[3] = "Sophomore";
    yearToStatusMap[2] = "Junior";
    yearToStatusMap[1] = "Senior";

    string name;
    double graduationYear, currentYear;

    cout << "Please	enter your name: ";
    cin >> name;
    cout << endl;
    cout << "Please	enter your graduation year: ";
    cin >> graduationYear;
    cout << endl;
    cout << "Please	enter current year: ";
    cin >> currentYear;
    cout << endl;
    string graduateStatus = graduationYear - currentYear <= 0 ? "Graduate"  : yearToStatusMap[graduationYear - currentYear];
    cout<<name<<", you are a "<<graduateStatus<<endl;
    return 0;
}