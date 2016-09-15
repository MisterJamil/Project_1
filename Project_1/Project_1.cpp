// Project_1.cpp : Defines the entry point for the console application.
// Author: Jamil Saliba
// Date: 9/14/2016
// Description: Calculates distance between two coordinates by inputing decimal degrees, takes the degrees and calculates radians. Returns nautical miles and statute miles as outputs.

#include "stdafx.h"
#include <math.h>
#define R 3437.746770784939
#define PI 3.141592653589793


int main()
{
	// Variable declaration 
	double dblDistance, dblDeltasigma;
	double dblLat1, dblLat2, dblLong1, dblLong2;
	double dblRadLat1, dblRadLat2, dblRadLong1, dblRadLong2;
	double dblStatutemiles;

	// Input
	printf("Enter Latitude 1 from coordinate 1, in decimal degrees>\n");
	scanf("%lf", &dblLat1);
	printf("Enter Latitude 2 from coordinate 2, in decimal degress>\n");
	scanf("%lf", &dblLat2);
	printf("Enter Longitude 1 from coordinate 1, in decimal degress>\n");
	scanf("%lf", &dblLong1);
	printf("Enter Longitide 2 from coordinate 2, in decimal degress>\n");
	scanf("%lf", &dblLong2);

	// Calculations or statements
	dblRadLat1 = dblLat1 * PI / 180;
	dblRadLat2 = dblLat2 * PI / 180;
	dblRadLong1 = dblLong1 * PI / 180;
	dblRadLong2 = dblLong2 * PI / 180;
	dblDeltasigma = acos(sin(dblRadLat1) * sin(dblRadLat2) + cos(dblRadLat1) * cos(dblRadLat2) * cos(dblRadLong1 - dblRadLong2));
	dblDistance = R * dblDeltasigma;
	dblStatutemiles = dblDistance * 1.15;

	// Output
	printf("Distance is: %.1f Nautical Miles\n", dblDistance);
	printf("Distance in Statute Miles: %.1f\n", dblStatutemiles);

    return 0;
}

