#ifndef GPS_Code_h
#define GPS_Code_h


#include "Arduino.h"
#include "TinyGPS++.h"


double returnLong(TinyGPSPlus gps);
double returnLat(TinyGPSPlus gps);
void displayInfo(TinyGPSPlus gps);

#endif