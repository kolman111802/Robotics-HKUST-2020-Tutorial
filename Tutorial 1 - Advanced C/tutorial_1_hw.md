**Submission deadline**: 21/10/2020 12:00n.n.

Author: Chalex (cwchanbm@connect.ust.hk)

Skeleton Code is provided, you should be able to find it in the same folder

# Tutorial 1 - Homework [Day Finder]

In this homework, you are going to write a program to find the day of a given date. The program should also be able to tell you whether the day is a holiday or not.


As a bonus task, you may export these dates into a .txt file and import them for future use.

## Brief flow chart of what the program should do
![](https://i.imgur.com/of8sArr.png)


## Task 0: Validating Your choice of input (10 marks )
* Get the input of choice using the `scanf` function
* The input will be using 1 character (i.e. 1 alphabet or 1 symbol or 1 numeric number)
* There will be 4 valid inputs in total
    * 'D' for the date input feature
    * 'F' for the import from file feature
    * 'S' for the select saved data feature
    * 'E' for ending the program immediately
* Validate the input before moving forward to other tasks
    * Use the following `#define` for validating
    * Output the dedicated output message `invalid_input_msg()` in `i_give_you.h` and let the user inputs the date again if it is not a valid input


```C
#define DATE_INPUT 'D'
#define IMPORT_FROM_FILE 'F'
#define SELECT_SAVED_DATA 'S'
#define END_PROGRAM 'E'
```


## Task 1: Separating the Input ( 10 marks )
* Get input using the `scanf` function
* The input will be in the format DD/MM/YYYY (e.g. 30/04/2019)
* Separate the input into a date, month and year
    * You should use the following code to enumerate months
```c
typedef enum {
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
} MONTHS;
```
* Assign the date, month, and year to the given struct. (Except for the day and name_of_holiday[30])
```c
typedef struct {
    int date;
    int month;
    int year;
    DAYS day;
    char name_of_holiday[30];
} day_info;
```

## Task 2: Show the information ( 35 marks )
* Find the day of the inputted date that you acquired from task 1
* Leap year has to be considered
* It is given that 01/01/0001 is a Saturday
* You should use the following enumerations for the days
```c
typedef enum {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} DAYS;
```
* Find whether the day is a holiday according to the table below. (Assume that holiday happen on the same date every year.) ~~[These holidays are randomly assigned]~~


| Date         | Holiday                       |
|:------------ |:----------------------------- |
| 01/01        | First Day of January          |
| 29/01        | Birthday of the Great Tim Woo |
| 10/03        | Mario Day                     |
| 31/03        | World Backup Day              |
| 10/04        | Whatever Day                  |
| 13/04        | Easter                        |
| 11/05        | National Technology Day       |
| 06/06        | D-Day                         |
| 25/12        | Christmas                     |
| 26/12        | Boxing Day                    |
| Every Sunday | Sunday                        |
* Sample I/O:
```c
Day: Monday
Name of holiday: Not a holiday
```
```
```c
Day: Saturday
Name of holiday: Boxing Day
```
```c
Day: Sunday
Name of holiday: World Backup Day, Sunday
```

### Note
* If you want to verify your outputted day, you can use https://www.timeanddate.com/date/weekday.html to see whether your outputted day is fine


## Task 3: Save the information ( 5 marks )
 * Save the above information into an global array of `day_info` (in the format below) for future usage. (Save it to the `day` and `name_of_holiday`)
 * Set the array size of saved `day_info` to 30
 * If the date is not a holiday, then just make the whole `name_of_holiday[30]` into "Not a holiday".
```c
typedef struct {
    int date;
    int month;
    int year;
    DAYS day;
    char name_of_holiday[30];
} day_info;
```
### Note
* If you want to modify the struct, you are always welcome to do so

## Task 4: Implement the select saved data function ( 20 marks )
* Check whether there is saved data
* If there is no saved data, tell the user to select another choice again
* If there is saved data, then proceed and print the list of saved data out
* Please print the list of saved data in the following format
```C
Here is a list of saved data:
1. 30/01/2020
2. 18/10/2001
3. 05/08/1043
4. 11/05/0009
5. 25/12/1753
6. 01/01/0002
7. 17/03/0593
```
* The user should choose one of the saved data and the program should print it out
    * Here are a few sample I/O:
```c
Please select the saved data from the list:
1
Date: 30
Month: Januay
Year: 2020
Day: Thursday
Name of holiday: Not a holiday
It is not a holiday... :(
```

```c
Please select the saved data from the list:
4
Date: 11
Month: May
Year: 0009
Day: Saturday
Name of holiday: National Technology Day
It is a holiday! :)
```
```c
Please select the saved data from the list:
6
Date: 01
Month: January
Year: 0002
Day: Sunday
Name of holiday: First Day of January, Sunday
It is a holiday! :)
```
* After printing the saved data, the program goes back to the select choice state

## Bonus Task: Add export and import function for the details ( 20 marks )
* Add a function for exporting the array of day_info to a .txt file
* Add a function for importing the .txt file and import the array from the file as well
> Not only does this task test your technical skills, it tests your GOOGLE skills as well. Please find how to deal with files from the Internet yourself.

## FAQ
**Q:** What can I modify?
**A:**  In `i_give_you.h`, you can modify all the stuff in the `i_give_you.h` but not the `#define` and the functions (i.e. `opening()` and `choice_menu()`). 
In `main.c`, you can modify all except for the `main()` and the `#include`. This means that you cannot include additional libraries other than the ones we included for you.
     
 **Q:** What files do we have to submit exactly?
**A:** The `i_give_you.h` and `main.c`. Please push them to the HW1 file in your homework repository.

## Homework Submission
1. Fork the repository from `HKUST-Robotics-Team` Github account (hkustroboticsteam@gmail.com) and push the code into the file HW for tutorial 1
2. Add `HKUST-Robotics-Team` on Github as an outside collaborator

For more information please watch the video provided in tutorial 0.

## For Further Questions
Send an email to any software senior's email or ask it in the Whatsapp grouop


