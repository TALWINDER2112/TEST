
#include<iostream>
#include<fstream>
using namespace std;

int main()
{

ofstream output;
ifstream input;

output.open("new.txt");
input.open("new.txt");

char str[300]="I am a good boy\n";
char ch;

output<<str;
output.close();

while(!nput.eof())
{
input.get(ch);
cout<<ch;
}
cout<<endl;
input.close();

return 0;
}
