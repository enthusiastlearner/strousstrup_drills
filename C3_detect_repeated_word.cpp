// detect repeated word (previous similar word)

# include <iostream>
using namespace std;
int main()
{
	string previous = "";
	string current;
	while ( cin >> current)
	{
	    if (current == previous)
	        cout << " Repeated word:" << current << endl;
	    previous = current;
	    cout << "previous:" << previous;
	}
}
