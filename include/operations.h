#pragma once

enum operation
{
	no = 0,
	scalpel = 1 /*скальпель*/,
	hemostat = 2 /*зажим*/,
	tweezers = 3 /*пинцет*/,
	suture = 4 /*игла*/

};

struct op
{
	double x = 0;
	double y = 0;
	operation = 0;
};