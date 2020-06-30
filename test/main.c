#include <stdlib.h>
#include <stdio.h>

#include "config_types.h"
#include "middle.h"

int main(int argc, char * argv[]) {

	_C_middle middle_C = {0};
	middle_init(& middle_C);
	
	if ( argc != 7 ) {
		fprintf(stderr, "6 arguments requiered, 5 float and one int\n");
		return -1;
	}
		
	sscanf(argv[1], "%f", & (middle_C._I0_Input1));
	sscanf(argv[2], "%f", & (middle_C._I1_Input2));
	sscanf(argv[3], "%f", & (middle_C._I2_Input3));
	sscanf(argv[4], "%f", & (middle_C._I3_Input4));
	sscanf(argv[5], "%f", & (middle_C._I4_Input5));

	sscanf(argv[6], "%d", & (middle_C._I5_mode));

	middle(& middle_C);
	
	fprintf(stdout, "middle(%f, %f, %f, %f, %f, %d) --> %f\n",
		middle_C._I0_Input1,
		middle_C._I1_Input2,
		middle_C._I2_Input3,
		middle_C._I3_Input4,
		middle_C._I4_Input5,
		middle_C._I5_mode,
		middle_C._O0_Output1
	);
}
