#include "std_lib_facilities.h"
int main()
{
	//Első feledat egy része
	cout << "Enter the name of the person you want to write to: ";
	string first_name = " "; //first_name lefoglalása
	cin >> first_name; //felhasználó által megadott név beolvasása

	//Harmadik feladat egy része
	cout << "Enter the name of an antoher frined: ";
	string friend_name;
	cin >> friend_name;

	//Negyedik Feladat egy része
	char friend_sex = ' '; //név lefoglalása 
	cout << "Write an 'm' if your friend is a 'male' and write an 'f' if your friend is a female: ";
	cin >> friend_sex;//terminálbol a változóba rakja az értéket

	//Ötödik feledat egy része
	cout << "Please enter the age of the recipient: ";//Kiíratás
	int age;//név lefoglalása
	cin >> age;//bevitt adat változóba írás

	//Első feladat további része
	cout << "\nDear " << first_name << ","<< endl; //Kiíratás

	//Második feladat
	cout << "  How are you? I am fine. I miss you!" << endl;//Kiíratás
	cout << "I have not heared about you so far, I hope you are doing well." << endl; //Kiíratás
	cout << "I am excited about to hear from you." << endl;//Kiíratás

	//Harmadik feladat további része
	cout << "Have you seen " << friend_name << " lately?" << endl; //Kiíratás

	//Negyedik feladat további része
	if(friend_sex == 'm')// feltétel hogy férfi e
	{
		cout << "If you see " << friend_name << " please ask him to call me." << endl;
	}
	else // nem ellenőrízzük hogy féri e mert az előző feltétel alapján kizárásos alapon eldönthető
	{
		cout << "If you see " << friend_name << " please aks her to call me." << endl;
	}
	
	//Ötödik feladat további része
	if(age == 0 || age < 0 || age == 110 || age > 110)
	{
		simple_error("you're kidding!");
	}
	else
	{
		cout << "I hear you just had a birthday and you are " << age << " years old." << endl;
	}

	//Hatodik feladat
 	if(age < 12) //megvizsgálja hogy az életkor kisebb e mint 12
	{
		cout << "Next year you will be " << age + 1 << "." << endl;
	}
	else if(age == 17) //megvizsgálja hogy az életkor pontosan megeggyező e 17el
	{
		cout << "Next year you will be able to vote." << endl;
	}
	else if(age > 70) //megvizsgálja hogy az életkor nagyobb e mint 70
	{
		cout << "I hope you are enjoying retirement." << endl;
	}

	//Hetedik feladat
	string my_name = "Attila";
	cout << " Yours sincerely, " << my_name << endl;

	return 0;	

}