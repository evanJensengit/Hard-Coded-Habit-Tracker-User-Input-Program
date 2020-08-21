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

//have classes for the date and a way to create classes of previous entries to figure out where
//I stand during the week with the list of tasks to complete like wanting to do 3 scj entries
//3 IFS sessions and 4 cbt sessions, wrkt 3 times a week, sleep 8 hrs a day, meditate 20 mins a day
// and certain amount weekly to add up to a week. I have to have an automatic entry so that if
//I miss a day it says "no entry" but still shows the date on the text editor with "no entry"
//then at the end of the week it pulls all the data from the previous weeks worth of entries and I can
//see what the stats are.
//^^ in the program have a function that pulls the last weeks entries, compiles it and shows
//stats of how much I did/have done. ANd if it is the second day of that week then it knows only to show
//today and the day before stats and no stats from the previous week. Also have a method to show a previous
//week's stats
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
