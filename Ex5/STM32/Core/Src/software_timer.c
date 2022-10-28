/*
 * software_timer.c
 *
 *  Created on: Oct 4, 2022
 *      Author: acer
 */
#include "software_timer.h"

int timer1_counter = 0;
int timer1_flag = 0;

int timer2_counter = 0;
int timer2_flag = 0;

int timer3_counter = 0;
int timer3_flag = 0;

int timer4_counter = 0;
int timer4_flag = 0;

int timer5_counter = 0;
int timer5_flag = 0;

int timer6_counter = 0;
int timer6_flag = 0;

void setTimer1(int duration){
	timer1_counter = duration;
	timer1_flag = 0;
}

void setTimer2(int duration){
	timer2_counter = duration;
	timer2_flag = 0;
}

void setTimer3(int duration){
	timer3_counter = duration;
	timer3_flag = 0;
}

void setTimer4(int duration){
	timer4_counter = duration;
	timer4_flag = 0;
}

void setTimer5(int duration){
	timer5_counter = duration;
	timer5_flag = 0;
}


void setTimer6(int duration){
	timer6_counter = duration;
	timer6_flag = 0;
}


void timerRun(){
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter == 0){
			timer1_flag = 1;
		}
	}

	if(timer2_counter > 0){
		timer2_counter--;
		if(timer2_counter == 0){
			timer2_flag = 1;
		}
	}

	if(timer3_counter > 0){
		timer3_counter--;
		if(timer3_counter == 0){
			timer3_flag = 1;
		}
	}

	if(timer4_counter > 0){
		timer4_counter--;
		if(timer4_counter == 0){
			timer4_flag = 1;
		}
	}

	if(timer5_counter > 0){
		timer5_counter--;
		if(timer5_counter == 0){
			timer5_flag = 1;
		}
	}

	if(timer6_counter > 0){
		timer6_counter--;
		if(timer6_counter == 0){
			timer6_flag = 1;
		}
	}
}

