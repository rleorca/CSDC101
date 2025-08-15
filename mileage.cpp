#include<iostream>
using namespace std;
int main() {
    
    int gallon_used_used, starting_mileage,
    ending_mileage, distance_drive,
    average_miles_per_gallons;
    
cout<<"enter gallons used: ";
cin>> gallons_used;//get values for gallons_used

cout<<" enter starting mileage: ";
cin>> starting_mileage;//get values for starting_mileage

cout<<" enter ending mileage: ";
cin>> ending_mileage;//get values for ending_mileage

distance_drive = ending_mileage - starting_mileage;//set values of distance drive to ending mileage - starting mileage

average_miles_per_gallons = distance_drive / gallons_used;//set values of average miles per gallons / gallons used

cout<<"the average miles per gallons is " << average_miles_per_gallons << endl;//print the value of average miles per gallons

if(average_miles_per_gallons > 25){// if average miles per gallons is greater than 25.0 then
    cout<<"you are getting good gas mileage";//print message you are getting good gas milleage
}
    else
    cout<<"you are NOT getting good gas mileage";//print message you are NOT getting good gas milleage
    
    return 0;
   

}
