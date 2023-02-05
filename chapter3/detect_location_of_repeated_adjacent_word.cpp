// detect the location of the repeated adjacent word (previous similar word)

# include <iostream>
using namespace std;
int main()
{
    int number_of_words = 0;
	string previous = "";
	string current;
	while ( cin >> current)
	{
	    number_of_words ++;
	    if (current == previous)
	        cout << " word number " << number_of_words << " repeated: " << current << endl;
	    previous = current;
	}
}
