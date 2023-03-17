//imports libraies
#include <stdio.h>
#include <ncurses.h> //Library for key input
#include <stdlib.h>  //relates to string.h
#include <string.h>  // adds support for string type variables
#include <sys/ioctl.h>// Library we will use for getting terminal width

// Marks anything between the the next curly brackest as the main function
int main() {
  //declaring vars
  FILE* logo; // Makes logo a pointer
  int run;    // sets "run" as a variable, this will be used later in the program to tell the program to move on
  logo = fopen("assets/log.ass", "r");  // Opens the logo file and puts it into ram as "log"
  char line; //Makes variable that will store each line of file read from
  char height; char width; // Declares vars for termial width and height
  //setting up ncurses
  initscr();  //Creates stdscr *Used by ncurses for keyboard input*
  raw();  //defines ncurses mode, raw should be used for now

  //Displays opening screen and prompts the user to press enter to start the program
  //While using ncurses like we are now use "printw" instead of "printf" to display text
  int gp(){   //Makes the reading and printing a function for use later in the program
    do { //prints logo to screen
    line = fgetc(logo); // Saves first line of log in pre-allocated memory
    printw("%c", line); // Prints the var to the screen
    } while(line != EOF); // Checks to see if the var line is storing the data  at the end of the file id so it lets the program continue
    return 0;
  }//function ends here
  gp(); // calls the previously made function
  printw("\n"); // prints blank line to make terminal look lett cluttered
  logo = fopen("assets/tit.scr","r"); //reuses the first memory adress from before  so calling the same function will do something completely different
  gp(); //calling said functiuon

  getch();  //Waits for user to press any key but soon I will make it "Enter" key specific"

  struct winsize w; // Makes var used to store term dimsensions
    ioctl(0, TIOCGWINSZ, &w);// Gets the width and height


  getch(); //waits for user input

  endwin(); //kills ncurses. If this command is not called the program will not close right, I will put it above return for now 
  return 0;



}
