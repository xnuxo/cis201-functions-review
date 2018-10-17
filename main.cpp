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

	string in;
	

	cout << "Please enter a string: ";
	getline(cin, in);
	int out = detect_as(in);
	cout << "The number of A's in the string is: " << out << endl;
	return 0;
}

bool is_a(char a)
{
	return a == 'a' || a == 'A';
}

int detect_as(string s)
{
	int count = 0;
	for(int x = 0; x < s.length(); x++)
	{
	
		if(is_a(s.at(x)))
		{
			count++;
		}
	
	}
	return count;
}
