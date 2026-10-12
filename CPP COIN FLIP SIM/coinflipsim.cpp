#include <iostream>
#include <random>
#include <vector>
using namespace std;
int main(){
	

	double heads = 0;
	double tails = 0;
	
	vector<string> flip = {"HEADS", "TAILS"};
	
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> coin(0, flip.size()-1);
	
	for(int i = 0; i < 10; i++){
	
	int x = coin(gen);
	cout << "RESULT: " << x << "\n";
	
	if(x == 0){
		heads++;	
	}
	else if(x == 1){
		tails++;
	}
	
	}
	
	cout << "\nHEADS TOTAL: " << heads << endl;
	cout << "TAILS TOTAL: " << tails;
	
	double hper = 0;
	double tper = 0;
	
	hper = (heads / 10) * 100;
	tper = (tails / 10) * 100;
	
	cout << "\n" << hper << "%" << " - " << tper << "%";
	
	
	
	return 0;
}
