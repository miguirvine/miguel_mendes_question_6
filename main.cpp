/******************************************************************************

Quesetion 6 - Program to calculate the size of a String without using length().

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int calculate_size (const string& p_str)
{
    /*
     * Calculates the size of a string without using strlen() or length()
     */
    int l_size=0;
	
	while(p_str[l_size] != '\0') 
		++l_size;
	
	return l_size;
}

int main()
{
    string user_string;
    cout << "Imput any string to be calculated (without spaces): ";
    cin >> user_string;
    cout <<"\nCalculated size for string: " << calculate_size(user_string);
    return 0;
}
