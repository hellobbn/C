//
//  Program_1-2.c
//  C
//
//  Created by BBN on 2016/10/17.
//  Copyright © 2016年 BBN. All rights reserved.
//
//	**Introduction**
//
//	This programe aimes to calculate the area of a round
//	*********
//	**About**
//	*********
//	Version: 1.0.1
//	Update time: 2016 / 10 / 15
//

#include <stdio.h>
#define Pi 3.14159265358979
int main(void) {
	float radius = 0.0f;
	float circumference = 0.0f;
	float area = 0.0f;
	
	printf("Now please enter the radius of the round:");
	scanf("%f",&radius);
	
	//	Claculation Starts
	area = Pi * radius * radius;
	circumference = 2 * Pi * radius;
	
	//	Output
	printf("The area of the round is %.2f\n", area);
	printf("The circumference of the round is %.2f\n", circumference);
	
	return 0;
}
