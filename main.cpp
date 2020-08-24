//
//  main.cpp
//  accountability_project_mrk1
//
//  Created by Evan Jensen on 8/17/20.
//  Copyright © 2020 Evan Jensen. All rights reserved.
//
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
   string date, time, weekday, feeling, intensity,
   wrkt, bible, didRead, code, didCode, sleepAmount,
   didTherapy, therapy;
   
   cout << "What is the date?" << endl;
   getline(cin, date); // use this to get the whole line
   
   cout << "What is the weekday?" << endl;
   getline(cin, weekday);
   
   cout << "What is the time?" << endl; //how to pull the time from the internet??
   getline(cin, time);
   
   cout << "Did you workout today? Y/N" << endl;
   getline(cin, wrkt);
   
   if (wrkt == "Y") {
      cout << "What kind of work out? " << endl;
      getline(cin, wrkt);
   }
   else {
      wrkt = "Did not work out";
   }
   
   cout << "How much sleep did you get last night? (just enter number) " << endl;
   getline(cin, sleepAmount);
   
   cout << "Did you read a face of the bible? Y/N" << endl;
   getline(cin, bible);
   
   if (bible == "Y") {
      cout << "What chapter(s) did you read and what stood out to you? " << endl;
      getline(cin, bible);
      didRead = "Yes ";
   }
   else {
      bible = "Did not read bible";
      didRead = "No ";
   }
   
   cout << "Did you do any csci studying? Y/N" << endl;
   getline(cin, didCode);
   
   if (didCode == "Y") {
      cout << "What csci did you do specifically?" << endl;
      getline(cin, code);
      didCode = "Yes ";
   }
   else {
      code = "Did not study csci";
      didCode = "No ";
   }
   
   cout << "Did you do any therapy work? Y/N" << endl;
   getline(cin, didTherapy);
   if (didTherapy == "Y") {
      cout << "What therapy did you do?" << endl;
      getline(cin, therapy);
      didTherapy = "Yes ";
   }
   else {
      therapy = "Did not do therapy work ";
      didTherapy = "No ";
   }
   ofstream myfile;
   myfile.open ("accountability.txt", std::ios_base::app);
   myfile << "Date: " << date << endl;
   myfile << "Weekday: " << weekday << endl;
   myfile << "Time: " << time << endl;
   myfile << "Workout: " << wrkt << endl;
   myfile << "Sleep last night: " << sleepAmount << endl;
   myfile << "Read Bible: " << didRead << bible << endl;
   myfile << "Study csci: " << didCode << code << endl;
   myfile << "Therapy work: " << didTherapy << therapy << endl << endl;
   
   myfile.close();
   return 0;
}
