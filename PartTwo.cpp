#include<iostream>
#include<vector>
#include <iterator>  
#include<string>
#include<fstream>
#include<algorithm>
#include<map>


using namespace std;

int main(){
map <string,int> frequency;
string maximumWord;

int count=0;

ifstream file("notes.txt");

vector<string> contents((istream_iterator<string>(file)),istream_iterator<string>());
file.close();

for(int x=0;x<contents.size();x++){
frequency[contents[x]]++;
if(frequency[contents[x]]>count)
{
count=frequency[contents[x]];
maximumWord=contents[x];
}
}


cout<<"The word with that appears the most is " << maximumWord << "\n";
cout<<maximumWord<< " appears: " << count <<" times.\n";
cout<<"Number of characters:  "<< maximumWord << " has "<< maximumWord.length() << " characters.\n";
cout<<"Total number of WORDS in the file:  "<<contents.size()<<endl;

return 0;
}