#ifndef WATCH_H_
#define WATCH_H_
#include <iostream>
/*
	The directives of preprocessing, are used to avoid repeated definitions 
	of the file identifiers, like when two files have both a file included
	and these will be included in third file.

	So if WATCH_H_ is already defined, the preprocessor will skip
	all lines, until the 'endif' directive. 	
*/

/** 
	Represents the day's hour 
*/
class Watch{

public:

	//Constructors
	/**
		Constructor of Watch object. 
		@arg hr Is the hour.
		@arg min Is the minute.
		@arg sec Is the second.

		The default value to each one is 0.
	*/	
	Watch(int hr, int min, int sec):
		hours(hr), minutes(min), seconds(sec){}
	Watch():
		hours(0), minutes(0), seconds(0){}

	/**
		Fix the Watch to the correct hour.
		@arg hr Is the hour.
		@arg min Is the minute.
		@arg sec Is the second.

	*/
	void fix_watch(int hr, int min, int sec);

	int get_hour() const;
	int get_minutes() const;
	int get_seconds() const;

	/** 
		Advances the watch in a second 
	*/
	void tik();

	/**
		An operator to compare two Watches, and verify if they are with the same time.
		@return true if both Watches have the same hour, minutes and seconds
		@return false if both Watches have not the same hour, or minutes or seconds.
	*/
	bool operator==(const Watch& watch) const;
	
	/**
		An operator to compare two Watches, and verify if they have different times.
		@return true if both Watches have not the same hour, or minutes or seconds.
		@return false if both Watches have the same hour, minutes and seconds
	*/
	bool operator!=(const Watch& watch) const;
	
	friend std::ostream& operator<<(std::ostream& os, const Watch& w); 

private:
	int hours, minutes, seconds;
};

#endif