#include <iostream>
#include <iomanip>
using namespace std;

//adjust ko setw dto laturrr kse iniba ko ung text so baka d alligned 
void introduction () {
	cout <<setw(120)<< "______________________________" << endl;
	cout << endl;
	cout <<setw(120)<< "WELCOME TO GOLDEN REELS CINEMA"<< endl;
	cout <<setw(117)<< "biday's ticketing system" << endl;
	cout <<setw(120)<< "______________________________" << endl;
}
//later ko na lagyan setw tinatamad pa ko hehe

void movielisting (int option) {
	cout <<setw(133)<< "-------------------------------------------------------" << endl;
	cout <<setw(115)<< "Currently Showing:" << endl;
	cout <<setw(132)<< "1. The Hunger Games: The Ballad of Songbirds & Snakes" << endl;
	cout <<setw(102)<< "2. Trolls Band Together" << endl;
	cout <<setw(93)<< "3. The Marvels" << endl;
	cout <<setw(86)<< "4. Wish" << endl;
	cout <<setw(111)<< "5. Shake Rattle and Roll Extreme" << endl;
	cout <<setw(133)<< "-------------------------------------------------------" << endl;
}

void payment (int paymentoption) {
	if(paymentoption == 1) {
		cout <<setw(119)<< "Cash received, thank you <3" << endl;
	}
	if (paymentoption == 2){
		cout <<setw(126)<< "Payment received via gcash, thank you <3 " << endl;
	}
	else if (paymentoption == 3){
		cout <<setw(126)<< "Payment received via Card, thank you <3 " << endl;
	}
}
void totalcost (int notseat) {
	if (notseat==0){
		return;
	}
	int rateofseat = 350;
	int totalseats = notseat;
	int grandtotal = totalseats * rateofseat;
	cout << endl;
	cout <<setw(130)<< "---------------------------------------------------" << endl;
	cout <<setw(109)<< "Total seat cost: "<< grandtotal << " pesos" << endl;
	cout <<setw(130)<< "---------------------------------------------------" << endl;
	cout <<setw(121)<< "Please pick a payment option: " << endl;
	cout <<setw(99)<< "1. Cash " << endl;
	cout <<setw(100)<< "2. gcash " << endl;
	cout <<setw(99)<< "3. Card " << endl;
	cout <<setw(122)<< "Enter your payment method (1/2/3)";
	int paymentoption;
	cin >> paymentoption;
	payment (paymentoption);
	cout << endl;
	cout <<setw(113)<< "Enjoy the show!" << endl;
	cout <<setw(130)<< "----------------------------------------------------" << endl;
	cout << endl;
}

void blockingofseat (int selectseatnumber, int anotherseat) {
	int s1 = selectseatnumber;
	int s2 = anotherseat;
	if (s2 == 0) {
		while (s1 != s2 || s1 <= 100 || s1 > 0){
			cout << endl;
			cout << "Your seat has been booked. Thank you. " << endl;
			cout << "Your seat number: " << s1 << endl;
			break;
		}
	}
	if (s1 == 0) {
		while (s2 != s1 || s2 <= 100 || s2 > 0) {
			cout << endl;
			cout << "your seat has been booked. " << endl;
			cout << "another seat number is: " << s2 << endl;
			break;
		}
	}
	if (s2 == s1) {
		cout << endl;
		cout << "Please choose another seat number, thank you." << endl;
	}
}

void cancelseat (int notseat, int selectedseatnumber, int anotherseat){
	int cancel = bool (1 && 0) ;
	cout << "Your seat booking is being cancelled \n Are you sure?\n" << endl;
	cout << "If you want to cancel your booking, please press 1, if not, please press 0.";
	cin >> cancel;
	if (cancel ==1){
		notseat = 0;
		cout <<setw(119)<< "Your booking is cancelled." << endl;
		cout <<setw(133)<< "-------------------------------------------------------" << endl;
		totalcost (notseat);
	}
	if (cancel==0) {
		cout << "Payment continued..." << endl;
		totalcost (notseat);
	}
}

void choosingofseat (int notseat) {
	if (notseat == 0) {
		return;
	}
	int selectedseatnumber;
	cout  << "Select seat number (1-100): ";
	cin >> selectedseatnumber;
	
	blockingofseat (selectedseatnumber, 0);
	int anotherseat;
	if (notseat == 2) {
		int moreseat = bool ( 1 && 0);
		cout << " Do you want to book more seats? please press 1 if yes, if not, please press 0.";
		cin >> moreseat;
		if (moreseat == 1) {
			cout << "Select another seat number: ";
			cin >> anotherseat;
			blockingofseat (0, anotherseat);
		}
		else if (moreseat == 0) {
			cout << "Let's continue for further transaction.." << endl;
		}
	}
	cancelseat (notseat, selectedseatnumber, anotherseat);
}

void selectingseat () {
	int rows = 10;
	int col = 10;
	int totalseat = 1;
	string seats [rows][col];
	for (int i=0; i<rows; i++) {
		for (int j=0; j<col; j++) {
			while (totalseat <= 100) {
				cout << totalseat << " ";
				totalseat++;
				break;
			}
			cout << "|__|" << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "COST PER SEAT: 350 PESOS" << endl;
	cout << endl;
	cout << "___________________________________SCREEN_THIS_SIDE___________________________________" << endl;
	cout << endl;
	
	int notseat;
	cout << "NOTE!!! *as of now maximum 2 seats can only be allowed at a time*"<<endl;
	cout << "How many seats do you want to book?: ";
	cin >> notseat;
	cout << endl;
	choosingofseat (notseat);
}

void selectingfilm (int option){
	cout <<setw(130)<< "Select which film you want to watch (1/2/3/4/5): ";
	int movienumber;
	cin >> movienumber;
	cout << endl;
	if (movienumber == 1){
		cout <<setw(83)<< "Show Timing: " << "The Hunger Games: The Ballad of Songbirds & Snakes | 2:00 pm"<<endl;
		cout << endl;
		cout <<setw(120)<< "Select your preferred seat:" << endl;
		selectingseat();
	}
	if (movienumber == 2) {
		cout <<setw(97)<< "Show Timing: " << "Trolls Band Together | 7:30 pm" << endl;
		cout << endl;
		cout <<setw(120)<< " Select your preferred seat:" << endl;
		selectingseat ();
	}
	if (movienumber == 3) {
		cout <<setw(102)<< "Show Timing: " << "The Marvels | 3:50 pm" << endl;
		cout << endl;
		cout <<setw(120)<< " Select your preferred seat:" << endl;
		selectingseat ();
	}
	if (movienumber == 4) {
		cout <<setw(105)<< "Show Timing: " << "Wish | 12:00 pm" << endl;
		cout << endl;
		cout <<setw(120)<< " Select your preferred seat:" << endl;
		selectingseat ();
	}
	if (movienumber == 5) {
		cout <<setw(93)<< "Show Timing: " << "Shake Rattle and Roll Extreme | 8:00 pm" << endl;
		cout << endl;
		cout <<setw(120)<< " Select your preferred seat:" << endl;
		selectingseat ();
	}
}

void exitop (int option) {
	cout <<setw(123)<< "Enjoy the show! Please come again." << endl;
	cout <<setw(133)<< "-------------------------------------------------------" << endl;
	}
	
void choosing () {
	int option;
	cout << endl;
	cout <<setw(112)<< "1. View Movies" << endl;
	cout <<setw(111)<< "2. Book Seats" << endl;
	cout <<setw(108)<< "3. Exit" << endl;
	cout << endl;
	cout <<setw(117)<< "Enter choice (1/2/3): ";
	cin >> option;
	cout << endl;
	if (option == 1) {
		movielisting (option);
	}
	if (option == 2) {
		selectingfilm (option);
	}
	if (option == 3) {
		exitop (option);
	}
}

int main() {
	introduction();
	choosing();
	choosing();
	choosing();
	choosing();
	return 0;
}

