#include "Watch.h"
#include <iostream>
#include <iomanip>
using namespace std;


void Watch::fix_watch(int hr, int min, int sec){
	hours 	= hr;
	minutes = min;
	seconds = sec;
}

int Watch::get_hour() const{
	return hours;
}

int Watch::get_minutes() const{
	return minutes;
}

int Watch::get_seconds() const{
	return seconds;
}

void Watch::tik(){
	seconds++;
	if(seconds >= 60){
		minutes++;
		seconds -= 60;
	}
	if(minutes >=60){
		hours++;
		minutes -=60;
	}
	if(hours >=24){
		hours -= 24;
	}
}

bool Watch::operator==(const Watch& w) const{
	// if(hours == w.hours and minutes == w.minutes and seconds == w.seconds){
	// 	return true;
	// }else{
	// 	return false;
	// }
	return (hours == w.hours and minutes == w.minutes and seconds == w.seconds);
}

bool Watch::operator!=(const Watch& w) const{
	return !(*this == w);
}

ostream& operator<<(ostream& os, const Watch& w){
	os 	<< setfill('0');
	os 	<< "The hour is "
		<< setw(2) << w.hours << ':'
		<< setw(2) << w.minutes << ':'
		<< setw(2) << w.seconds 
		<< '\n';
}