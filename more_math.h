/*
Made by Cooper "Geo_bot" Hall
more_math
preforms math calculations not in the C/C++ syntax or in math.h
*/
#include <math.h>
#include <string>
#include <vector>
using namespace std;

#ifndef more_math
#define more_math



//returns pi
double pi()
{
	return 3.14159265359;
}

//converts degrees to radians
double convert_deg_rad(double deg)
{
	return deg*(pi() / 180);
}

//converts radians to degrees
double convert_rad_deg(double rad)
{
	return rad*(180 / pi());
}

//sq function aka square function: squares the entered number
//double
double sq(double num)
{
	return num*num;
}
//int
int sq(int num)
{
	return num*num;
}

//converts inches to centimeters
double convert_in_cm(double inches)
{
	return inches*2.54;
}

//converts centimeters to inches
double convert_cm_in(double centimeters)
{
	return centimeters / 2.54;
}

//tells if tow numbers can be evevly divided
bool even_division(int num_1, int num_2)
{
	return num_1 % num_2 == 0;
}
bool even_division(long num_1, long num_2)
{
	return num_1 % num_2 == 0;
}
bool even_division(short num_1, short num_2)
{
	return num_1 % num_2 == 0;
}

//cubes a number
//double
double cube(double num)
{
	return num*num*num;
}
//float
float cube(float num)
{
	return num*num*num;
}
//int
int cube(int num)
{
	return num*num*num;
}
//long
long cube(long num)
{
	return num*num*num;
}
//short
short cube(short num)
{
	return num*num*num;
}

int fibonacci(int num_number)
{
	//declare vars
	int num_current = 1, num_previous_1 = 1, num_previous_2 = 1, i = 3;

	if (num_number != 1, num_number != 2)
	{
		do
		{
			//calculate previous numbers and current number
			num_previous_2 = num_previous_1;
			num_previous_1 = num_current;
			num_current = num_previous_1 + num_previous_2;

			//count itteration
			i++;
		} while (num_number >= i);

		//return the current number
		return num_current;
	}
	else
	{
		//returns one
		return 1;
	}
}
unsigned int fibonacci(unsigned int num_number)
{
	//declare vars
	int num_current = 1, num_previous_1 = 1, num_previous_2 = 1, i = 3;

	if (num_number != 1, num_number != 2)
	{
		do
		{
			//calculate previous numbers and current number
			num_previous_2 = num_previous_1;
			num_previous_1 = num_current;
			num_current = num_previous_1 + num_previous_2;

			//count itteration
			i++;
		} while (num_number >= i);

		//return the current number
		return num_current;
	}
	else
	{
		//returns one
		return 1;
	}
}
long fibonacci(long num_number)
{
	//declare vars
	long num_current = 1, num_previous_1 = 1, num_previous_2 = 1, i = 3;

	if (num_number != 1, num_number != 2)
	{
		do
		{
			//calculate previous numbers and current number
			num_previous_2 = num_previous_1;
			num_previous_1 = num_current;
			num_current = num_previous_1 + num_previous_2;

			//count itteration
			i++;
		} while (num_number >= i);

		//return the current number
		return num_current;
	}
	else
	{
		//returns one
		return 1;
	}
}
unsigned long fibonacci(unsigned long num_number)
{
	//declare vars
	unsigned long num_current = 1, num_previous_1 = 1, num_previous_2 = 1, i = 3;

	if (num_number != 1, num_number != 2)
	{
		do
		{
			//calculate previous numbers and current number
			num_previous_2 = num_previous_1;
			num_previous_1 = num_current;
			num_current = num_previous_1 + num_previous_2;

			//count itteration
			i++;
		} while (num_number >= i);

		//return the current number
		return num_current;
	}
	else
	{
		//returns one
		return 1;
	}
}

string hexadecimal(int dec)
{
	//declare vars 
	int remainder, char_num, i = 0;
	char hexadecimal_num[1000];
	string hexadecimal_num_1;

	//adds negative and gets absolute value if necessary 
	if (dec<0)
	{
		hexadecimal_num_1 = hexadecimal_num_1 + '-';
		dec = dec * -1;
	}

	//get the hexadecimal number 
	while (dec > 0)
	{
		remainder = dec % 16;

		//convert rem to a char
		if (remainder < 10)
		{
			char_num = remainder + 48;
		}
		else
		{
			char_num = remainder + 55;
		}

		//inserts character to array
		hexadecimal_num[i++] = char_num;

		//divides decimal number by 16
		dec = dec / 16;
	}

	//converts character array into string
	for (int j = i - 1; j >= 0; j--)
	{
		hexadecimal_num_1 = hexadecimal_num_1 + hexadecimal_num[j];
	}

	//return hexadecimal number
	return hexadecimal_num_1;
}
string hexadecimal(long dec)
{
	//declare vars 
	long remainder, char_num, i = 0;
	char hexadecimal_num[1000];
	string hexadecimal_num_1;

	//adds negative and gets absolute value if necessary 
	if (dec<0)
	{
		hexadecimal_num_1 = hexadecimal_num_1 + '-';
		dec = dec * -1;
	}

	//get the hexadecimal number 
	while (dec > 0)
	{
		remainder = dec % 16;

		//convert rem to a char
		if (remainder < 10)
		{
			char_num = remainder + 48;
		}
		else
		{
			char_num = remainder + 55;
		}

		//inserts character to array
		hexadecimal_num[i++] = char_num;

		//divides decimal number by 16
		dec = dec / 16;
	}

	//converts character array into string
	for (long j = i - 1; j >= 0; j--)
	{
		hexadecimal_num_1 = hexadecimal_num_1 + hexadecimal_num[j];
	}

	//return hexadecimal number
	return hexadecimal_num_1;
}
string hexadecimal(unsigned long dec)
{
	//declare vars 
	unsigned long remainder, char_num, i = 0;
	char hexadecimal_num[1000];
	string hexadecimal_num_1;

	//adds negative and gets absolute value if necessary 
	if (dec<0)
	{
		hexadecimal_num_1 = hexadecimal_num_1 + '-';
		dec = dec * -1;
	}

	//get the hexadecimal number 
	while (dec > 0)
	{
		remainder = dec % 16;

		//convert rem to a char
		if (remainder < 10)
		{
			char_num = remainder + 48;
		}
		else
		{
			char_num = remainder + 55;
		}

		//inserts character to array
		hexadecimal_num[i++] = char_num;

		//divides decimal number by 16
		dec = dec / 16;
	}

	//converts character array into string
	for (long j = i - 1; j >= 0; j--)
	{
		hexadecimal_num_1 = hexadecimal_num_1 + hexadecimal_num[j];
	}

	//return hexadecimal number
	return hexadecimal_num_1;
}
void hexadecimal(char* ar ,int dec)
{
	//declare vars 
	int remainder, char_num, i = 0;
	char hexadecimal_num[1000];

	//adds negative and gets absolute value if necessary 
	if (dec<0)
	{
		ar[0] = '-';
		dec = dec * -1;
	}

	//get the hexadecimal number 
	while (dec > 0)
	{
		remainder = dec % 16;

		//convert rem to a char
		if (remainder < 10)
		{
			char_num = remainder + 48;
		}
		else
		{
			char_num = remainder + 55;
		}

		//inserts character to array
		hexadecimal_num[i++] = char_num;

		//divides decimal number by 16
		dec = dec / 16;
	}

	//tranfers the array hexadecimal_num into ar
	for (int j = i - 1; j >= 0; j--)
	{
		ar[j] = hexadecimal_num[j];
	}
}
void hexadecimal(char* ar, long dec)
{
	//declare vars 
	long remainder, char_num, i = 0;
	char hexadecimal_num[1000];

	//adds negative and gets absolute value if necessary 
	if (dec<0)
	{
		ar[0] = '-';
		dec = dec * -1;
	}

	//get the hexadecimal number 
	while (dec > 0)
	{
		remainder = dec % 16;

		//convert rem to a char
		if (remainder < 10)
		{
			char_num = remainder + 48;
		}
		else
		{
			char_num = remainder + 55;
		}

		//inserts character to array
		hexadecimal_num[i++] = char_num;

		//divides decimal number by 16
		dec = dec / 16;
	}

	//tranfers the array hexadecimal_num into ar
	for (long j = i - 1; j >= 0; j--)
	{
		ar[j] = hexadecimal_num[j];
	}
}
void hexadecimal(char* ar ,unsigned long dec)
{
	//declare vars 
	unsigned long remainder, char_num, i = 0;
	char hexadecimal_num[1000];

	//adds negative and gets absolute value if necessary 
	if (dec<0)
	{
		ar[0] = '-';
		dec = dec * -1;
	}

	//get the hexadecimal number 
	while (dec > 0)
	{
		remainder = dec % 16;

		//convert rem to a char
		if (remainder < 10)
		{
			char_num = remainder + 48;
		}
		else
		{
			char_num = remainder + 55;
		}

		//inserts character to array
		hexadecimal_num[i++] = char_num;

		//divides decimal number by 16
		dec = dec / 16;
	}

	//tranfers the array hexadecimal_num into ar
	for (unsigned long j = i - 1; j >= 0; j--)
	{
		ar[j] = hexadecimal_num[j];
	}
}

int hex_to_dec(string hexadecimal)
{
	//declare vars
	int decimal = 0, multiplier, hexadecimal_1_length;
	char hexadecimal_1[1000];

	//converts string to character array
	for (int i = 0; i <= hexadecimal.length(); i++)
	{
		hexadecimal_1[i] = hexadecimal[i];
	}

	//gets the length of hexadecimal_1
	for (hexadecimal_1_length = 0; hexadecimal_1[hexadecimal_1_length] != '\0';)
	{
		hexadecimal_1_length++;
	}
	hexadecimal_1_length--;

	//does the conversion 
	for (int i = 0; i <= hexadecimal_1_length;)
	{
		//gets the multiplier
		switch (hexadecimal_1[hexadecimal_1_length - i])
		{
			default:
				multiplier = 0;
				break;

			case '0':
				multiplier = 0;
				break;

			case '1':
				multiplier = 1;
				break;

			case '2':
				multiplier = 2;
				break;

			case '3':
				multiplier = 3;
				break;

			case '4':
				multiplier = 4;
				break;

			case '5':
				multiplier = 5;
				break;

			case '6':
				multiplier = 6;
				break;

			case '7':
				multiplier = 7;
				break;

			case '8':
				multiplier = 8;
				break;

			case '9':
				multiplier = 9;
				break;

			case 'a':
			case 'A':
				multiplier = 10;
				break;

			case 'b':
			case 'B':
				multiplier = 11;
				break;

			case 'c':
			case 'C':
				multiplier = 12;
				break;

			case 'd':
			case 'D':
				multiplier = 13;
				break;

			case 'e':
			case 'E':
				multiplier = 14;
				break;

			case 'f':
			case 'F':
				multiplier = 15;
				break;
		}

		//calculates the decimal numbers with the multiplier and i
		decimal = decimal + (multiplier * pow(16, i));

		//increments number of iterations
		i++;
	}

	//returns the decimal number
	return decimal;
}
int hex_to_dec(char* hexadecimal)
{
	//declare vars
	int decimal = 0, multiplier, hexadecimal_1_length;

	//gets the length of hexadecimal_1
	for (hexadecimal_1_length = 0; hexadecimal[hexadecimal_1_length] != '\0';)
	{
		hexadecimal_1_length++;
	}
	hexadecimal_1_length--;

	//does the conversion 
	for (int i = 0; i <= hexadecimal_1_length;)
	{
		//gets the multiplier
		switch (hexadecimal[hexadecimal_1_length - i])
		{
			default:
				multiplier = 0;
				break;

			case '0':
				multiplier = 0;
				break;

			case '1':
				multiplier = 1;
				break;

			case '2':
				multiplier = 2;
				break;

			case '3':
				multiplier = 3;
				break;

			case '4':
				multiplier = 4;
				break;

			case '5':
				multiplier = 5;
				break;

			case '6':
				multiplier = 6;
				break;

			case '7':
				multiplier = 7;
				break;

			case '8':
				multiplier = 8;
				break;

			case '9':
				multiplier = 9;
				break;

			case 'a':
			case 'A':
				multiplier = 10;
				break;

			case 'b':
			case 'B':
				multiplier = 11;
				break;

			case 'c':
			case 'C':
				multiplier = 12;
				break;

			case 'd':
			case 'D':
				multiplier = 13;
				break;

			case 'e':
			case 'E':
				multiplier = 14;
				break;

			case 'f':
			case 'F':
				multiplier = 15;
				break;
		}

		//calculates the decimal numbers with the multiplier and i
		decimal = decimal + (multiplier * pow(16, i));

		//increments number of iterations
		i++;
	}

	//returns the decimal number
	return decimal;
}

//converts a charater array into a string
//charater array
string to_str(char* ar)
{
	string str;

	for (int i = 0; ar[i] != '\0'; i++)
	{
		str = str + ar[i];
	}

	return str;
}
//charater matrix
string to_str(char** matrix, int num_rows)
{
	string str;

	for (int rows = 0; rows <= num_rows; rows++)
	{
		for (int cols = 0; matrix[rows][cols] != NULL; cols)
		{
			str = str + matrix[rows][cols];
		}
		str = str + '\n';
	}

	return str;
}

//converts string to charater array
//passing by return (can only be used in other function's parameters)
char* to_char_ar(string str)
{
	//declare vars
	char ar[1000];
	
	//does conversion
	for (unsigned int i = 0; i <= str.length(); i++)
	{
		ar[i] = str[i];
	}

	//returns the array
	return ar;
}
//void (can only be used out other function's parameters)
void to_char_ar(char* dest, string str)
{
	//does conversion
	for (unsigned int i = 0; i <= str.length(); i++)
	{
		dest[i] = str[i];
	}
}

//converts units
double convert(string from, string to, double base)
{
	if ((from == "rad" || from == "radians") && (to == "deg" || to == "degress"))
	{
		return convert_rad_deg(base);
	}
	else if ((from == "deg" || from == "degrees") && (to == "rad" || to == "radians"))
	{
		return convert_deg_rad(base);
	}
	else if ((from == "in" || from == "inches") && (to == "cm" || to == "centimeters"))
	{
		return convert_in_cm(base);
	}
	else if ((from == "cm" || from == "centimeters") && (to == "in" || to == "inches"))
	{
		return convert_cm_in(base);
	}
	else if ((from == "km" || from == "kilometers") && (to == "mi" || to == "miles"))
	{
		return base * 0.62;
	}
	else if ((from == "mi" || from == "miles") && (to == "km" || to == "kilometers"))
	{
		return base / 0.62;
	}
	else if ((from == "km" || from == "kilometers") && (to == "m" || to == "meters"))
	{
		return base * 1000;
	}
	else if ((from == "m" || from == "meters") && (to == "km" || to == "kilometers"))
	{
		return base / 1000;
	}
	else if ((from == "kg" || from == "kilograms") && (to == "lb" || to == "pounds"))
	{
		return base * 2.2;
	}
	else if ((from == "lb" || from == "pounds") && (to == "kg" || to == "kilograms"))
	{
		return base / 2.2;
	}
	else if ((from == "l" || from == "liters") && (to == "cm^3" || to == "centimeters cubed"))
	{
		return base * 1000;
	}
	else if ((from == "cm^3" || from == "centimeters cubed") && (to == "l" || to == "liters"))
	{
		return base / 1000;
	}
	else if ((from == "l" || from == "liters") && (to == "g(fluid)" || to == "g (fluid)" || to == "gallons"))
	{
		return base * 0.26;
	}
	else if ((from == "g(fluid)" || from == "g (fluid)" || from == "gallons") && (to == "l" || to == "liters"))
	{
		return base / 0.26;
	}
	else if ((from == "cm^3" || from == "centimeters cubed") && (to == "g(fluid)" || to == "g (fluid)" || to == "gallons"))
	{
		return convert("l", "gallons", convert("cm^3", "l", base));
	}
	else if ((from == "g(fluid)" || from == "g (fluid)" || from == "gallons") && (to == "cm^3" || to == "centimeters cubed"))
	{
		return convert("l", "cm^3", convert("gallons", "l", base));
	}
	else if ((from == "g" || from == "grams" || from == "g(mass)" || from == "g (mass)") && (to == "kg" || to == "kilograms"))
	{
		return base / 1000;
	}
	else if ((from == "kg" || from == "kilogams") && (to == "g" || to == "grams" || to == "g(mass)" || to == "g (mass)"))
	{
		return base * 1000;
	}
	else if ((from == "g" || from == "grams" || from == "g(mass)" || from == "g (mass)") && (to == "lb" || to == "pounds"))
	{
		return convert("kg", "lb", base / 1000);
	}
	else if ((from == "lb" || from == "pounds") && (to == "g" || to == "grams" || to == "g(mass)" || to == "g (mass)"))
	{
		return convert("lb", "kg", base * 1000);
	}
	else if (from == "bits" && to == "bytes")
	{
		return base * 8;
	}
	else if (from == "bytes" && to == "bits")
	{
		return base / 8;
	}
	else if ((from == "megabytes" || from == "mb") && (to == "gigabytes" || to == "gb"))
	{
		return base / 1024;
	}
	else if ((from == "gigabytes" || from == "gb") && (to == "megabytes" || to == "mb"))
	{
		return base * 1024;
	}
	else if ((from == "gigabytes" || from == "gb") && (to == "terabytes" || to == "tb"))
	{
		return base / 1024;
	}
	else if ((from == "terabytes" || from == "tb") && (to == "gigabytes" || to == "gb"))
	{
		return base * 1024;
	}
	else if ((from == "megabytes" || from == "mb") && to == "bytes")
	{
		return base * 1024;
	}
	else if (from == "bytes" && (to == "megabytes" || to == "mb"))
	{
		return base / 1024;
	}
	else if (to == "bytes" && (from == "gigabytes" || from == "gb"))
	{
		return convert("megabytes", "bytes", convert("gigabytes", "megabytes", base));
	}
	else if ((from == "gigabytes" || from == "gb") || to == "bytes")
	{
		return convert("megabytes", "bytes", convert("gigabytes", "megabytes", base));
	}
	else if ((from == "terabytes" || from == "tb") && to == "bytes")
	{
		return convert("gigabytes", "bytes", convert("terabytes", "gigabytes", base));
	}
	else if ((from == "petabytes" || from == "pb") && (to == "terabytes" || to == "tb"))
	{
		return base * 1024;
	}
	else if ((from == "terabytes" || from == "tb") && (to == "petabytes" || to == "pb"))
	{
		return base / 1024;
	}
	else if ((from == "petabytes" || from == "pb") && (to == "gigabytes" || to == "gb"))
	{
		return convert("terabytes", "gigabytes", convert("petabytes", "terabytes", base));
	}
	else if ((from == "gigabytes" || from == "gb") || (to == "petabytes" || to == "pb"))
	{
		return convert("terabytes", "petabytes", convert("gigabytes", "terabytes", base));
	}
	else if ((from == "petabytes" || from == "pb") || (to == "megabytes" || to == "mb"))
	{
		return convert("gigabytes", "megabytes", convert("petabytes", "gigabytes", base));
	}
	else if ((from == "petabytes" || from == "pb") && (to == "bytes"))
	{
		return convert("megabytes", "bytes", convert("petabytes", "megabytes", base));
	}
	else
	{
		return base;
	}
}
//this overload of convert is so that convert works with charater arrays (I only want to write the code for convert once)
double convert(char* from, char* to, double base)
{
	//returns the conversion
	return convert(to_str(from), to_str(to), base);
}

//clones an array of any type
//int
void array_clone(int* dest, int* source)
{
	for (int i = 0; source[i] != NAN; i++)
	{
		dest[i] = source[i];
	}
}
//double
void array_clone(double* dest, double* source)
{
	for (int i = 0; source[i] != NAN; i++)
	{
		dest[i] = source[i];
	}
}
//float
void array_clone(float* dest, float* source)
{
	for (int i = 0; source[i] != NAN; i++)
	{
		dest[i] = source[i];
	}
}
//long
void array_clone(long* dest, long* source)
{
	for (int i = 0; source[i] != NAN; i++)
	{
		dest[i] = source[i];
	}
}
//short
void array_clone(short* dest, short* source)
{
	for (int i = 0; source[i] != NAN; i++)
	{
		dest[i] = source[i];
	}
}

string matrix_row_to_str(char** matrix, int row_num)
{
	//declare vars
	string str;

	//does conversion
	for (int i = 0; matrix[row_num][i] != '\0'; i++)
	{
		str = str + matrix[row_num][i];
	}

	//retunrs str
	return str;
}

//converts a row in matrix into a character array 
//charater array (can be used in return statements and function parameters)
char* matrix_row_to_char_ar(char** matrix, int row_num)
{
	//converts the matrix row into a string and then converts that into a charater array and returns the charater array
	return to_char_ar(matrix_row_to_str(matrix, row_num));
}
//void (can not be used in function parameters or return statements)
void matrix_row_to_char_ar(char** matrix, int row_num, char* ar)
{
	
	strcpy(ar, matrix_row_to_char_ar(matrix, row_num));
}

int num_digits(int num)
{
	//declare vars
	double num_1 = num;
	int digits = 0;

	//counts the digits
	while (num_1 >= 1)
	{
		num_1 = num_1 * 0.1;
		digits++;
	}

	//returns the number of digits
	return digits;
}
int num_digits(short num)
{
	//declare vars
	double num_1 = num;
	int digits = 0;

	//counts the digits
	while (num_1 >= 1)
	{
		num_1 = num_1 * 0.1;
		digits++;
	}

	//returns the number of digits
	return digits;
}
int num_digits(long num)
{
	//declare vars
	double num_1 = num;
	int digits = 0;

	//counts the digits
	while (num_1 >= 1)
	{
		num_1 = num_1 * 0.1;
		digits++;
	}

	//returns the number of digits
	return digits;
}
int num_digits(double num)
{
	//declare vars
	int digits;

	//converts double into integer (sort of)
	while (num != floor(num))
	{
		num = num * 10;
	}

	//gets the number of digits
	while (num >= 1)
	{
		num = num * 0.1;
		digits++;
	}

	//returns the number digits
	return digits;
}
int num_digits(float num)
{
	//declare vars
	int digits;

	//converts double into integer (sort of)
	while (num != floor(num))
	{
		num = num * 10;
	}

	//gets the number of digits
	while (num >= 1)
	{
		num = num * 0.1;
		digits++;
	}

	//returns the number digits
	return digits;
}

//converts boolean to integer for math
//returns 1 if the boolean is true or 0 if the boolean false
int bool_to_int(bool boolean)
{
	if (boolean)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//returns the integer entered into the parameters if the boolean is true or 0 if the boolean false
int bool_to_int(bool boolean, int x)
{
	if (boolean)
	{
		return x;
	}
	else
	{
		return 0;
	}
}
int bool_to_int(bool boolean, int x, int y)
{
	if (boolean)
	{
		return x;
	}
	else
	{
		return y;
	}
}

//converts integer arrays into charater arrays
//int (can only be used in funcion parameters)
int* char_ar_to_int_ar(char* ar)
{
	//declare vars
	int ar1[100];

	//does conversion
	for (int i = 0; ar[i] != '\0'; i++)
	{
		ar[i] = ar1[i];
	}

	//returns the integer array
	return ar1;
}
//void (cannot be used in funtion parameters)
void char_ar_to_int_ar(char* ar, int* ar1)
{
	//copys the integer array from the int overload into the int array in the paremeters
	array_clone(ar1, char_ar_to_int_ar(ar));
}

//
void tolower_all(char* ar)
{
	for (int i = 0; ar[i] != '\0'; i++)
	{
		ar[i] = tolower(ar[i]);
	}
}
//
void tolower_all(char* dest, char* source)
{
	strcpy(dest, source);

	tolower_all(dest);
}

//
void toupper_all(char* ar)
{
	for (int i = 0; ar[i] != '\0'; i++)
	{
		ar[i] = toupper(ar[i]);
	}
}
//
void toupper_all(char* dest, char* source)
{
	strcpy(dest, source);

	toupper_all(dest);
}

//gets the length of an array
//char
int ar_length(char* ar)
{
	//declare vars
	int ar_length;

	//counts number of charaters in the array
	for (ar_length = 0; ar[ar_length] != '\0'; ar_length++);

	//returns the length of the array
	return ar_length - 1;
}

string bool_str_return(bool boolean, string if_true, string if_false)
{
	if (boolean)
	{
		return if_true;
	}
	else
	{
		return if_false;
	}
}

//checks to see if the entered number is prime
//int
bool is_prime(int num)
{
	//declare vars
	bool is_prime = true;

	if (num != 1 && num != 2)
	{
		//checks to see if the number is prime
		for (int i = 2; i < num && is_prime; i++)
		{
			is_prime = num % i != 0;
		}

		//returns is_prime
		return is_prime;
	}
	else
	{
		//beacause 1 and 2 are prime, retruns true if num is 1 or 2
		return true;
	}
}
//unsigned int
bool is_prime(unsigned int num)
{
	//declare vars
	bool is_prime = true;

	if (num != 1 && num != 2)
	{
		//checks to see if the number is prime
		for (unsigned int i = 2; i < num && is_prime; i++)
		{
			is_prime = num % i != 0;
		}

		//returns is_prime
		return is_prime;
	}
	else
	{
		//beacause 1 and 2 are prime, retruns true if num is 1 or 2
		return true;
	}
}
//long
bool is_prime(long num)
{
	//declare vars
	bool is_prime = true;

	if (num != 1 && num != 2)
	{
		//checks to see if the number is prime
		for (long i = 2; i < num && is_prime; i++)
		{
			is_prime = num % i != 0;
		}

		//returns is_prime
		return is_prime;
	}
	else
	{
		//beacause 1 and 2 are prime, retruns true if num is 1 or 2
		return true;
	}
}
//short
bool is_prime(short num)
{
	//declare vars
	bool is_prime = true;

	if (num != 1 && num != 2)
	{
		//checks to see if the number is prime
		for (short i = 2; i < num && is_prime; i++)
		{
			is_prime = num % i != 0;
		}

		//returns is_prime
		return is_prime;
	}
	else
	{
		//beacause 1 and 2 are prime, retruns true if num is 1 or 2
		return true;
	}
}

//gets the nth prime number
//int
int prime(int num_nums)
{
	int prime_num = 1;

	for (int i = 0; i <= num_nums; prime_num += 2)
	{
		if (is_prime(prime_num))
		{
			i++;
		}
	}

	return prime_num - 1;
}
//unsigned int
unsigned int prime(unsigned int num_nums)
{
	unsigned int prime_num;

	for (unsigned int i = 0; i <= num_nums; prime_num += 2)
	{
		if (is_prime(prime_num))
		{
			i++;
		}
	}

	return prime_num - 1;
}
//long
long prime(long num_nums)
{
	long prime_num = 1;

	for (long i = 0; i <= num_nums; prime_num += 2)
	{
		if (is_prime(prime_num))
		{
			i++;
		}
	}

	return prime_num;
}
//short
short prime(short num_nums)
{
	short prime_num = 1;

	for (short i = 0; i <= num_nums; prime_num += 2)
	{
		if (is_prime(prime_num))
		{
			i++;
		}
	}

	return prime_num;
}

//returns the integer contained within the charater example: char x = '1' char_to_int(x) returns the integer 1
int char_to_int(char num)
{
	if (isdigit(num))
	{
		return num - 48;
	}
}

//returns the integer contained within the char array example: char x[2] = "15" char_to_int(x) returns the integer 15
int char_ar_to_int(char* num)
{
	//delare vars
	int num1 = 0;

	//does conversion
	for (int i = 0; i <= ar_length(num); i++)
	{
		num1 = num1 + (char_to_int(num[ar_length(num) - i]) * pow(10, i));
	}

	//returns integer
	return num1;
}

//returns the integer contained within the string example: char x[2] = "15" char_to_int(x) returns the integer 15
int str_to_int(string num)
{
	return char_ar_to_int(to_char_ar(num));
}

bool is_lett(int c)
{
	return isupper(c) || islower(c);
}

bool between(int val_1, int val_2)
{
	return val_1 >= val_2 && val_1 <= val_2;
}
bool between(short val_1, short val_2)
{
	return val_1 >= val_2 && val_1 <= val_2;
}
bool between(long val_1, long val_2)
{
	return val_1 >= val_2 && val_1 <= val_2;
}
bool between(float val_1, float val_2)
{
	return val_1 >= val_2 && val_1 <= val_2;
}
bool between(double val_1, double val_2)
{
	return val_1 >= val_2 && val_1 <= val_2;
}

//gets the nth root of x
double rt(double x, int root)
{
	//checks to see if the root to be calculated can be solved quikly and for potential error causing inputs (such inputs return 0)
	if (root == 2)
	{
		return sqrt(x);
	}
	else if (root == 1)
	{
		return x;
	}
	else if (root == 0)
	{
		return 0;
	}
	else if (x == 0)
	{
		return 0;
	}
	//begins to search for the nth root of x if all the pervious tests were false 
	else
	{
		//declare variables
		bool wrong; //if the attemted guess was wrong, this boolean is true
		double guess; //holds the current guess; it is also the return value
		int base_num, dec = 0; //these 2 initgers form the guess

		do
		{
			//sets the base number to 1
			base_num = 1;

			//checks the decimal value with all possible base values 
			do
			{
				//creates the current guess
				guess = base_num + (dec * pow(10, num_digits(dec)));

				//checks to see if the guess is wrong
				wrong = pow(guess, root) != x;

				//changes the base number by 1
				base_num++;
			} while (base_num < x && wrong);

			//changes the decimal by 1
			dec++;
		} while (wrong);

		//returns 
		return guess;
	}
}

string fibonacci_hash(string original, bool loop)
{
	//hash_num hold the base number generated by the hash
	unsigned long hash_num = 1;

	//creates the hash
	for (int i = 0; i != original.length(); i++)
	{
		hash_num = hash_num * fibonacci((int)original[i]);
	}
	
	//returns a hex value as the hash
	if (loop)
	{
		//puts the hash through the algorithm and adds the base numbers together
		return hexadecimal(fibonacci(hash_num) + hex_to_dec(fibonacci_hash(hexadecimal(fibonacci(hash_num)), false)));
	}
	else
	{
		return hexadecimal(fibonacci(hash_num));
	}
}
void fibonacci_hash(string original, bool loop, char* return_array)
{
	//hash_num hold the base number generated by the hash
	unsigned long hash_num = 1;

	//creates the hash
	for (int i = 0; i != original.length(); i++)
	{
		hash_num = hash_num * fibonacci((int)original[i]);
	}

	//returns a hex value as the hash (psudo-return)
	if (loop)
	{
		//puts the hash through the algorithm and adds the base numbers together
		hexadecimal(return_array, fibonacci(hash_num) + hex_to_dec(fibonacci_hash(hexadecimal(fibonacci(hash_num)), false)));
	}
	else
	{
		hexadecimal(return_array, fibonacci(hash_num));
	}
}
void fibonacci_hash(char* original, bool loop, char* return_array)
{
	//hash_num hold the base number generated by the hash
	unsigned long hash_num = 1;

	//creates the hash
	for (int i = 0; original[i] != '\0'; i++)
	{
		hash_num = hash_num * fibonacci((int)original[i]);
	}

	//returns a hex value as the hash (psudo-return)
	if (loop)
	{
		//puts the hash through the algorithm and adds the base numbers together
		hexadecimal(return_array, fibonacci(hash_num) + hex_to_dec(fibonacci_hash(hexadecimal(fibonacci(hash_num)), false)));
	}
	else
	{
		hexadecimal(return_array, fibonacci(hash_num));
	}
}
#endif