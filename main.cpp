/**
 *	File:
 *	Developer: Jude McParland
 *	Email: judem6968@student.vvc.edu
 *	Date: 10-15-18
 *	Description: A program that takes the input of a string and returns the number of time the letter a is entered (regardless of case).
**/

#include<iostream>
#include<string>

using namespace std;

int detect_as(string s);
bool is_a(char a);

int main()
{
	string in; // Delcare input string var.
	
	cout << "Please enter a string: ";
	getline(cin, in);
	cout << "The number of A's in the string is: " << detect_as(in) << endl;
	return 0;
}

bool is_a(char a)
{
	return a == 'a' || a == 'A'; // Detect if passed char is an upper or lower case a.
}

int detect_as(string s)
{
	int count = 0;
	for(int x = 0; x < s.length(); x++) // Run the loop for as long as the string is.
	{
		if(is_a(s.at(x))) // Passes the current charater of the string to detect if is a or not. If it is, update the count by 1.
			count++;
	}
	return count;
}
