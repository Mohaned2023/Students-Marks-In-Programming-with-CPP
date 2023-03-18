//? -------------- Programmed By Mohaned Sherhan --------------

#include <iostream>
#include <cmath>
using namespace std;

class DataArray {
private:
	int arr[30];
public:
	DataArray() {
		ziero();
	}
	//! def to gaeve the arr student ziero -------
	void ziero() {
		for (int i = 0; i < 30; i++) {
			arr[i] = 0;
		}
		cout << "\t - Give The student initail value by zaro is don " << endl;
	}
	//! def to set rendom values in arr[student]
	void rand_dev() {
		for (int i = 0; i < 30; i++) {
			arr[i] = rand() % 91;
		}
	}
	//! def to set value in arr from user ---------
	void set_user() {
		int conter = 0 , num = 0;
		while (true) {
			if (conter <= 29 && conter >= 0){
				cout << "\t - Enter the number of student " << conter + 1 << " : ";
				cin >> num;
				if (num >= 0 && num <= 100) {
					arr[conter] = num;
					conter++;
				}
				else {
					cout << "\t - The value is not for 0 to 100 ..... "<<endl;
					system("PAUSE");
				
				}
			}
			else { cout << "\t - The add is DONE ." << endl; break; }
		}
	}
	//! def to modify the number of student ------
	void set_modify() {
		double dev = 0;
		int index=0;
		while (true) {
			cout << "\t - Enter the index of student : ";
			cin >> index;
 			cout << "\t - Enter the deviation of student : ";
			cin >> dev;
			if (dev >= 0 && dev <= 100 && index <=30 && index >= 0 ) {
				arr[index] = dev;
				cout << "\t - The modify is DONE ." << endl;
				break;
			}
			else {
				cout << "\t - Error input : for index is from 0 to 29 and the deviation from 0 to 100 ." << endl;
				continue;
			}
		}
	}
	//! def to get the value of student form the index -------
	void get_student(string str="user") {
		int index=0;
		if (str == "user") {
			while (true) {
				cout << "\t - Enter the index : ";
				cin >> index;
				if (index >= 0 && index < 30) {
					cout << "\t - The deviation of student is : " << arr[index] << endl;
					break;
				}
				else { cout << "\t - The index from 0 to 29 . " << endl; continue; }
			}
		}
		else if (str == "first") {
			cout << "\t - The deviation of first student is : " << arr[0] << endl;
		}
		else if (str == "last") {
			cout << "\t - The deviation of last student is : " << arr[29] << endl;
		}
	}
	//! def to return the max number in arr[student] --------
	double get_max() {
		double max_num = arr[0];
		for (int i = 0; i < 30; i++) {
			if (arr[i] > max_num) {
				max_num = arr[i];
			}
		}
		return max_num;
	}
	//! def to return the min number in arr[student] ---------
	double get_min() {
		double min_num = arr[0];
		for (int i = 0; i < 30; i++) {
			if (arr[i] < min_num) {
				min_num = arr[i];
			}
		}
		return min_num;
	}
	//! def to return how many student success ------
	int num_succ() {
		int conter=0;
		for (int i = 0; i < 30; i++) {
			if (arr[i] >= 50) {
				conter++;
			}
			else { continue; }
		}
		return conter;
	}
	//! def to return number of fail student --------
	int fail() {
		int conter = 0;
		for (int i = 0; i < 30; i++) {
			if (arr[i] < 50) {
				conter++;
			}
			else { continue; }
		}
		return conter;
	}
	//! def to add the number of sudent ------
	double add_arr() {
		double conter = 0;
		for (int i = 0; i < 30; i++) {
			conter += arr[i];
		}
		return conter;
	}
	//! def to return the averag fo arr[student] --------
	double avg_student() {
		return ( add_arr() / 30 );
	}
	//! Standard Deviation --------------
	double SD() {
		double avg = avg_student();
		double num = 0;
		//((arr[0]-avg)**2) + ((arr[1]-avg)**2)
		for (int i = 0; i < 30; i++) {
			num += (pow((arr[i] - avg),2));
		}
		return sqrt(num);
	}
	//! def to print the values , max , min , success , success% , fail , fail% , add , averag , SD -------
	void print(string str="values") {
		if (str == "values") {
			cout << "\t ----------------------- " << endl;
			for (int i = 0; i < 30; i++) {
				cout << "\t - The student " << i + 1 << " is : " << arr[i] << endl;
			}
			cout << "\t ----------------------- " << endl;
		}
		else if (str == "max") {
			cout << "\t - The max is : " << get_max() << endl;
		}
		else if (str == "min") {
			cout << "\t - The min is : " << get_min() << endl;
		}
		else if (str == "success") {
			cout << "\t - Number of success sutdent is : " << num_succ() << endl;
		}
		else if (str == "success%") {
			cout << "\t - Number of student success {%} is : " << ((num_succ() * 100) / 30) << "%" << endl;
		}
		else if (str == "fail") {
			cout << "\t - Number of students who failed is : " << fail() << endl;
		}
		else if (str == "fail%") {
			cout << "\t - Number of students who failed {%} is : " << ((fail() * 100) / 30 ) << "%" << endl;
		}
		else if (str == "add-arr") {
			cout << "\t - The add of deviations is  : " << add_arr() << endl;
		}
		else if (str == "averag") {
			cout << "\t - The averag of students is : " << avg_student() << endl;
		}
		else if (str == "SD") {
			cout << "\t - The Standard Deviation of students is : " << SD() << endl;
		}
	}
	void show() {
		system("cls");
		cout << "\t --------------{-Programmed By LEGEND-}-----------------" << endl
			<< "\t| { 1 } Give initial deviation by zero .                |" << endl
			<< "\t| { 2 } Give random deviation .                         |" << endl
			<< "\t| { 3 } Enter the deviation from user .                 |" << endl
			<< "\t| { 4 } Modify data by index .                          |" << endl
			<< "\t| { 5 } Print data by index .                           |" << endl
			<< "\t| { 6 } Print the all of degrees .                      |" << endl
			<< "\t| { 7 } Print the degrees of the first student .        |" << endl
			<< "\t| { 8 } Print the degrees of the last student .         |" << endl
			<< "\t| { 9 } Print the success number .                      |" << endl
			<< "\t| { 10 } Print the number of failed student .           |" << endl
			<< "\t| { 11 } Print the add students .                       |" << endl
			<< "\t| { 12 } Print the averag of the students .             |" << endl
			<< "\t| { 13 } Print the student deviation .                  |" << endl
			<< "\t| { 14 } Print all data .                               |" << endl
			<< "\t| { 99 } exit .                                         |" << endl
			<< "\t ------------------------------------------------------- " << endl;
	}
}student;// END Of Class -----------

int main() {
	string conter;
	int index = 0;
	while (true) {
		student.show();
		cout << "\t --> ";
		cin >> conter;
		// 1 
		if (conter == "1") {
			student.ziero();
			system("PAUSE");
		}
		// 2 
		else if (conter == "2") {
			student.rand_dev();
			cout << "\t - Given the random deviation is DONE ." << endl;
			system("PAUSE");
		}
		// 3
		else if (conter == "3") {
			student.set_user();
			system("PAUSE");
		}
		// 4 
		else if (conter == "4") {
			student.set_modify();
			system("PAUSE");
		}
		// 5 
		else if (conter == "5") {
			student.get_student("user");
			system("PAUSE");
		}
		// 6 
		else if (conter == "6") {
			student.print("values");
			system("PAUSE");
		}
		// 7 
		else if (conter == "7") {
			student.get_student("first");
			system("PAUSE");
		}
		// 8 
		else if (conter == "8") {
			student.get_student("last");
			system("PAUSE");
		}
		// 9 
		else if (conter == "9") {
			student.print("success");
			student.print("success%");
			system("PAUSE");
		}
		// 10 
		else if (conter == "10") {
			student.print("fail");
			student.print("fail%");
			system("PAUSE");
		}
		// 11 
		else if (conter == "11") {
			student.print("add-arr");
			system("PAUSE");
		}
		// 12 
		else if (conter == "12") {
			student.print("averag");
			system("PAUSE");
		}
		// 13 
		else if (conter == "13") {
			student.print("SD");
			system("PAUSE");
		}
		// 14 
		else if (conter == "14") {
			cout << "\t -------------------------------------------" << endl;
			student.print("max");
			student.print("min");
			student.print("success");
			student.print("success%");
			student.print("fail");
			student.print("fail%");
			student.print("add-arr");
			student.print("averag");
			student.print("SD");
			cout << "\t -------------------------------------------" << endl;
			system("PAUSE");
		}
		//99
		else if (conter == "99") {
			system("cls");
			cout <<endl<<endl<< "\t - See you later -----------------------!" << endl << endl;
			break;
		}
		else { cout << "\t - Error input ....." << endl; system("PAUSE"); }
	}	
}
