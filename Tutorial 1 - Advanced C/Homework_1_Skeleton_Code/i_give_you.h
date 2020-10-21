#define DATE_INPUT 'D'
#define IMPORT_FROM_FILE 'I'
#define SELECT_SAVED_DATA 'S'
#define END_PROGRAM 'E'


typedef enum {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} DAYS;

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

typedef struct {
    int date;
    int month;
    int year;
    DAYS day;
    char name_of_holiday[50];
} day_info;

void opening(){
  printf("Welcome!\n");
  printf("This is Robotics Team Software Homework 1!\n");
  printf("Day Finder!\n");

}

void choice_menu(){
  printf("Please select your choice: \n");
  printf("D: Date Input \n");
  printf("I: Import From File \n");
  printf("S: Select Saved Data \n");
  printf("E: End Program \n");
}

void invalid_input_msg(){
  printf("Invalid input!\n");
  printf("Please input your choice again: \n");
}

void validity(int d, int m, int y) {
  if (d <= 0 || m <= 0 || m > 12 || y < 1800) {
    invalid_input_msg();
  }
  if (d >= 31 && (m == 4 || m == 6 || m == 9 || m == 11)) {
    invalid_input_msg();
  }
  if (d >= 29 && m == 2 && y % 4 != 0) {
    invalid_input_msg();
  }
}
void givendays(int d, int m) {
  int ans = d*100 + m;
  switch(ans) {
    case 0101 : printf("First Day of January"); break;
    case 2901 : printf("Birthday of the Great Tim Woo");break;
    case 1003 : printf("Mario Day");break;
    case 3103 : printf("World Backup Day");break;
    case 1004 : printf("Whatever Day");break;
    case 1304 : printf("Easter");break;
    case 1105 : printf("National Technology Day");break;
    case 0606 : printf("D-Day");break;
    case 2512 : printf("Christmas");break;
    case 2612 : printf("Boxing Day");break;
    default: printf("Not a holiday.");
  }
}

bool weekday(int d, int m, int y) {
  /*int number = 0;
  number = ((y - 1800) / 4 * 1461 + (y - 1800) % 4 * 365) ;
  switch(m) {
    case 1: number += 0; break;
    case 2: number += 31; break;
    case 3: number += 59; break;
    case 4: number += 90; break;
    case 5: number += 120; break;
    case 6: number += 151; break;
    case 7: number += 181; break;
    case 8: number += 212; break;
    case 9: number += 243; break;
    case 10: number += 273; break;
    case 11: number += 304; break;
    case 12: number += 334; break;
  }
  if(y % 4 == 0) {
    number++;
  }
  number += d;
  printf("%i\n", number);
  printf("%i", (number + 2) % 7);*/
  int weekday  = (d += m < 3 ? y-- : y - 2, 23*m/9 + d + 4 + y/4- y/100 + y/400)%7;  
  printf("Day: ");
  switch(weekday) {
    case 0: printf("Sunday"); break;
    case 1: printf("Monday"); break;
    case 2: printf("Tuesday"); break;
    case 3: printf("Wednesday"); break;
    case 4: printf("Thursday"); break;
    case 5: printf("Friday"); break;
    case 6: printf("Saturday"); break;
  }
   printf("\n"); 
  if (weekday == 0) {
    return true;
  } else {
    return false;
  }
}

