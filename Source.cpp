// Personal word frequency analysis

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;

const int word = 100;
const int freq = 100;

int dog;
char hog;
char c;

int isalphabetical(char hog)
{
	if (hog == 'A')
		return dog = 1;
	else if (hog == 'a')
		return dog = 1;
	else if (hog == 'B')
		return dog = 1;
	else if (hog == 'b')
		return dog = 1;
	else if (hog == 'C')
		return dog = 1;
	else if (hog == 'c')
		return dog = 1;
	else if (hog == 'D')
		return dog = 1;
	else if (hog == 'd')
		return dog = 1;
	else if (hog == 'E')
		return dog = 1;
	else if (hog == 'e')
		return dog = 1;
	else if (hog == 'F')
		return dog = 1;
	else if (hog == 'f')
		return dog = 1;
	else if (hog == 'G')
		return dog = 1;
	else if (hog == 'g')
		return dog = 1;
	else if (hog == 'H')
		return dog = 1;
	else if (hog == 'h')
		return dog = 1;
	else if (hog == 'I')
		return dog = 1;
	else if (hog == 'i')
		return dog = 1;
	else if (hog == 'J')
		return dog = 1;
	else if (hog == 'j')
		return dog = 1;
	else if (hog == 'K')
		return dog = 1;
	else if (hog == 'k')
		return dog = 1;
	else if (hog == 'L')
		return dog = 1;
	else if (hog == 'l')
		return dog = 1;
	else if (hog == 'M')
		return dog = 1;
	else if (hog == 'm')
		return dog = 1;
	else if (hog == 'N')
		return dog = 1;
	else if (hog == 'n')
		return dog = 1;
	else if (hog == 'O')
		return dog = 1;
	else if (hog == 'o')
		return dog = 1;
	else if (hog == 'P')
		return dog = 1;
	else if (hog == 'p')
		return dog = 1;
	else if (hog == 'Q')
		return dog = 1;
	else if (hog == 'q')
		return dog = 1;
	else if (hog == 'R')
		return dog = 1;
	else if (hog == 'r')
		return dog = 1;
	else if (hog == 'S')
		return dog = 1;
	else if (hog == 's')
		return dog = 1;
	else if (hog == 'T')
		return dog = 1;
	else if (hog == 't')
		return dog = 1;
	else if (hog == 'U')
		return dog = 1;
	else if (hog == 'u')
		return dog = 1;
	else if (hog == 'V')
		return dog = 1;
	else if (hog == 'v')
		return dog = 1;
	else if (hog == 'W')
		return dog = 1;
	else if (hog == 'w')
		return dog = 1;
	else if (hog == 'X')
		return dog = 1;
	else if (hog == 'x')
		return dog = 1;
	else if (hog == 'Y')
		return dog = 1;
	else if (hog == 'y')
		return dog = 1;
	else if (hog == 'Z')
		return dog = 1;
	else if (hog == 'z')
		return dog = 1;
	else
		return dog = 0;

}

int main()
{

	//string words[word];
	//int frequency[freq];
	//frequency[0] = 0;

	std::vector<int> frequency;
	std::vector<string> words;

	int wordnum = 0;

	fstream myFile;

	myFile.open("cheese.txt", ios::in); //read

	if (myFile.is_open()) {
		string line;
		/*string p = "big pizza";

		for (int i = 0; i < p.size(); i++) {

				std::cout << p[i] << endl;

		}*/

		while (getline(myFile, line)) {
			//cout << line << endl;

			for (int i = 0; i < line.size(); i++) {
				//std::cout << line[i] << endl;

				
				
				

				if (line[i] != ' ' && isalphabetical(line[i]) == 1) // if not a space, add to word, then. if space, store word in array, start new word.
				{
					words.push_back("");
					words[wordnum] += tolower(line[i]);
				}
				else if (line[i] == ' ')
				{
					wordnum++;
				}
				else
					void;

			}

			wordnum++; // starts new word at the end of each line
		}


		

		//sorting alphabetically
		std::sort(words.begin(), words.end());

		for (int i = 0; i < words.size(); i++)
			if (words[i] != "")
			cout << words[i] << endl;
		
		//frequency analysis
		for (int i = 0; i < words.size(); i++)
			for (int j = 0; j < words.size(); j++)
				if (words[i] == words[j])
				{
					frequency.push_back(0);
					frequency[i]++;
				}




			myFile.close();

			system("pause>0");






			/*fstream myFile;
			myFile.open("cheese.txt", ios::out); //write
			if (myFile.is_open()) {
				myFile << "Hello \n";
				myFile << "red sound wave\n";
				myFile.close();
			}*/
			system("pause>0");
		
	}
}

