//
//  Program_1-1.c
//  C
//
//  Created by BBN on 2016/10/16.
//  Copyright © 2016年 BBN. All rights reserved.
//
//	**Introduction**
//
//	This programe aimes to calculate a mathmatical problem
//
//	**About**
//
//	Version: 1.0.0
//	Update time: 2016 / 10 / 15
//

#include <stdio.h>

int main( void ) {
	unsigned long long int sequence_1[101], sequence_2[101];		//	Two Sequences here
	unsigned long long int cnt = 0;
	
	//	Initialize sequence_1 -- ignore sequence_1[0]
	for (int i = 1; i <= 100; i ++) {
		sequence_1[i] = i * i;
	}
	
	for (int i = 1; i <= 100; i++) {
		cnt = 0;
		for (int j = 1; j <= 100; j++) {
			if (sequence_1[j] < i) {
				cnt++;
			} else {
				sequence_2[i] = cnt;
				break;
			}
		}
	}
	
	for (int i = 1; i <= 100; i++) {
		cnt = 0;
		for (int j = 1; j <= 100; j++) {
			if (sequence_2[j] < i) {
				cnt ++;
			} else {
				printf("sequence*[%d] = %llu\n", i , cnt);
				break;
			}
		}
	}
	
	return 0;
}
