#include <iostream>
#include <string>

using namespace std;

int main()
{
    int iScore = 0;

	char cIn;

	cout<<"Welcome to the are you a programmer program!"<<endl<<endl;
	cout<<"This program tests your suitability to be a programmer."<<endl<<endl;
	cout<<"The maximum score is 100."<<endl<<endl;

	cout<<"Your favourite food is:"<<endl;
	cout<<"A - Steamed vegetables."<<endl;
	cout<<"B - Pizza."<<endl;
	cout<<"C - Foie gras."<<endl;
	cout<<"Your answer: ";

	cin >> cIn;

	if(cIn == 'b' || cIn == 'B') iScore = iScore + 25;

	cout<<endl<<endl<<"Your favourite kind of light is:"<<endl;
	cout<<"A - Natural light."<<endl;
	cout<<"B - Energy efficent LED spotlights."<<endl;
	cout<<"C - The warm glow of an LED monitor."<<endl;
	cout<<"Your answer: ";

	cin >> cIn;

	if(cIn == 'c' || cIn == 'C') iScore = iScore + 25;

	cout<<endl<<endl<<"What is outfit is the most suitable workwear:"<<endl;
	cout<<"A - T-shirt and jeans."<<endl;
	cout<<"B - Suit and tie."<<endl;
	cout<<"C - Fancy dress costume."<<endl;
	cout<<"Your answer: ";

	cin >> cIn;

	if(cIn == 'a' || cIn == 'A') iScore = iScore + 25;

	cout<<endl<<endl<<"Your favourite web browser is:"<<endl;
	cout<<"A - Safari."<<endl;
	cout<<"B - Internet explorer."<<endl;
	cout<<"C - None of the above."<<endl;
	cout<<"Your answer: ";

	cin >> cIn;

	if(cIn == 'c' || cIn == 'C') iScore = iScore + 25;

	cout <<endl<<endl<<"Your score was: "<<iScore<<endl<<endl;

	if (iScore == 100)
	{
		cout <<"Congratulations, you are destined to be a programmer!"<<endl;
	}

	else if (iScore >= 60)
	{
		cout <<"Congratulations, you have clear nerd tendencies!"<<endl;
	}

	else 
	{
		cout <<"Bad luck. Time for you to take nerd 101!"<<endl;
	}

	cout<<endl<<"Goodbye"<<endl;

	system("pause");

	return 0;

}
