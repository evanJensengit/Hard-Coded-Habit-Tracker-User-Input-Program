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
   wrkt;
   
   cout << "What is the date?" << endl;
   getline(cin, date); // use this to get the whole line
   
   cout << "What is the weekday?" << endl;
   getline(cin, weekday);
   
   cout << "What is the time?" << endl; //how to pull the time from the internet??
   getline(cin, time);
   cout << "How are you feeling?" << endl;
   getline(cin, feeling);

   cout << "On a scale of 1 - 10 (1 being very low"
   " intensity 10 being super intense)" << endl;
   getline(cin, intensity);
   
   cout << "Did you workout today? Y/N" << endl;
   getline(cin, wrkt);
   
   if (wrkt == "Y") {
      
   }
   ofstream myfile;
   myfile.open ("accountability.txt", std::ios_base::app);
   myfile << "Date: " << date << endl;
   myfile << "Time: " << time << endl;
   myfile << "Weekday: " << weekday << endl;
   myfile << "Feeling: " << feeling << endl;
   myfile << "Intensity of: " << feeling << " was " << intensity << endl;
   myfile.close();
   return 0;
}
