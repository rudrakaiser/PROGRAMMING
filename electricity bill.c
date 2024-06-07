#include<stdio.h>
int main()
{
	/*
        first we take two variavle :
        'unit' is for storing the UNIT from user
        'charge' is for the calculation maintaining the UNIT
    */
    
    float unit, charge;
	
	printf("Enter UNIT : ");
	scanf("%f", &unit);        // taking the user input

    /*
        checking if the UNIT is less than 200 then,
        charge = unit * 0.8; this will be executed
    */
	
	if(unit<=200)
	{
		charge = unit*0.8;
	}

    /*
        checking if the UNIT is less than 300 and greater than 200 then,
        charge = 160 + unit * 0.8; this will be executed

        here 160 comes from first 200 UNIT (200 * 0.8 = 160)
    */
	
	else if(unit<=300 && unit>200)
	{
		charge = 160 + ((unit-200)*0.9);
	}

    /*
        checking if the UNIT is greater than 300 then,
        charge = 250 + unit * 0.9; this will be executed

        here 250 comes from the first 200 UNIT and from the next 100 UNIT
        for the first 200 UNIT we get 160
        and for the next 100 UNIT we will get (100 * 0.9) = 90
        160 + 90 = 250
    */
	
	else if(unit>300)
	{
		charge = 250 + ((unit-300)*1);
	}

    /*
        checking if the UNIT is greater than 400 then,
        15% Vat must be added with the total charges
    */
	
	if(unit>400)
	{
		charge = charge + (charge*0.15);
	}
	
	charge = charge + 100; // meter charge 100, added with the total charge
	
	printf("Charges is : %f",charge); // printing the output
	
	return 0;
}