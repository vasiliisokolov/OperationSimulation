#pragma once

enum operation
{
	no = 0,
	scalpel = 1 /*���������*/,
	hemostat = 2 /*�����*/,
	tweezers = 3 /*������*/,
	suture = 4 /*����*/

};

struct op
{
	double x = 0;
	double y = 0;
	operation = 0;
};