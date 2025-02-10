#include <iostream>
#include <string>
using namespace std;

//enum enGender {Male, Female};
//enum enstatus {Single, Married};
//enum enColor {black, red, white, brown , green};

struct stJobinfo {
    int monthlysalary;
    int yearlysalary;
    string job;
};


struct stAddressinfo {
    string country;
    string city;
	string street;
    int numberhouse;
};


struct stPrsonalinfo {
    string name;
    int age;
    stJobinfo job;
    stAddressinfo address;
    char gender;
    string status;
    string color;
};



void readinfo(stPrsonalinfo &info){
    cout << "Enter Your Named: " << endl;
    getline(cin, info.name);

    cout << "Enter Your Age: " << '\n';
    cin >> info.age;

    cout << "Enter Your Gender (M or F): " << endl;
    cin >> info.gender;

    cout << "Enter Your Status: " << endl;
    cin >> info.status;

    cout << "Enter Your Fav Color: " << endl;
    cin >> info.color;

    cout << "Enter Your Country: " << endl;
    cin >> info.address.country;

    cout << "Enter your City: " << endl;
    cin >> info.address.city;

    cout << "Enter Name of your street: " << '\n';
    cin >> info.address.street;

    cout << "Enter Number the house: " << endl;
    cin >> info.address.numberhouse;

    cout << "Enter your Job: " << endl;
    cin >> info.job.job;

    cout << "Enter your montly salary: " << endl;
    cin >> info.job.monthlysalary;

    cout <<"Enter your yearly salary: " <<'\n';
    cin >> info.job.yearlysalary;

}

void printinfo(stPrsonalinfo info) {
    cout << "********************************\n";
    cout << "Name: " << info.name << endl;
    cout << "Age: " << info.age << endl;
    cout << "Gender: " << info.gender << endl;
    cout << "Status: " << info.status << endl;
    cout << "Fav color: " << info.color << endl;
    cout << "Country: " << info.address.country << endl;
    cout << "City: " << info.address.city << endl;
    cout << "Street: " << info.address.street << endl;
    cout << "NO.House: " << info.address.numberhouse << endl;
    cout << "Job: " << info.job.job << '\n';
    cout << "Monthly Salary: " << info.job.monthlysalary << endl;
    cout << "Yearly Salary: " << info.job.yearlysalary << endl;
    cout << "********************************\n";
}


int main()
{
    

    stPrsonalinfo person1;
    readinfo(person1);
    printinfo(person1);

    /*info.name = "Ahmed Wael Abdelwahab Maarouf";
    info.age = 20;
    
	info.job.monthlysalary = 30000;
	info.job.yearlysalary = 360000;
	info.job.job = "Software Engineer";
	info.address.country = "Egypt";
    info.address.city = "Mansoura";
    info.address.street = "Ahmed Maahr";
    info.address.numberhouse = 13;

	info.color = enColor::black;
    info.status = enstatus::Single;
    info.gender = enGender::Male;*/

    

	return 0;

}

