#include <iostream>
#include <cmath>

/*
REQUIRMENTS

• Read in the avergae monthly rainfall for a city for each month of the and then
  read the actual monlthy rainfall for each of the previous 12 months.

• The program should print out a nicely formatted table showing the rainfall for 
  month as well as the how much above or below avergae the rainfall was for each
  month

• Allow the user to request that the results be output to a csv file

• All the program to take in input from a file.

BUILD PROCEDURE

• Start by writing and testing a program that can read in user input fot avg and 
  actual montly rainfall, print out a "table" showing the actual rainfall for the 
  month and by how much it deviated from the mean

• Implement a method that allows a user to request a csv file of the results

• Implement a method that allows a user to insert a textfile as input data
  
 */

void read_console_data() {
        
}

void read_text_file_data() {

}

void display_data(float (&data)[3][2], int num_rows, std::string (&months)[3]) {
    for (int i = 0; i < num_rows; i++){
        std::cout << "Month: " << months[i] << " \n";
        std::cout << "Actual Rainfall Amount: " << data[i][0] << " \n";
        std::cout << "Deviation From Mean: " << std::abs(data[i][1] - data[i][0]) << "\n\n";
     }
}

void save_to_csv() {

}


int main() {
    std::string avg_rainfall_amount, actual_rainfall_amount;
    std::cout << "Hello User! Starting with January, please enter the avg. "
              << "monthly rainfall followed by the actual monthly rainfall "
              << "this year separated by a space as such: 12 25. \n";

    
    std::string months[3] = {"January", "February", "March"};
    float  monthly_rainfall_data[3][2];
    
    for (int i = 0; i < 3; i++) {
        std::cout << months[i] << ": ";
        std::cin >> avg_rainfall_amount  >>  actual_rainfall_amount;
        monthly_rainfall_data[i][0] = std::stof(avg_rainfall_amount);
        monthly_rainfall_data[i][1] = std::stof(actual_rainfall_amount);
    }

    std::cout << std::endl;

    display_data(monthly_rainfall_data, 3, months);
    

	return 0;
}
