#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;


void printArray(string items[], int size) {
    for(int i = 0; i < size; i++) {
        cout << items[i] << endl;
    }
}

void printSTDArray(array<string, 5> items) {
    for(int i = 0; i < items.size(); i++) {
        cout << items[i] << endl;
    }
}

void printVector(vector<string>& items) {
     for(int i = 0; i < items.size(); i++) {
        cout << items[i] << endl;
    }
}

int main() {

    string foods1[5] = {"tacos","honey","apples","grapes","pumpkin"};
    // printArray(foods1,sizeof(foods1)/sizeof(foods1[0]));

    array<string, 5> foods2 = {"tacos","honey","apples","grapes","pumpkin"};
    // printSTDArray(foods2);

    vector<string> foods3 = {"tacos","honey","apples","grapes","pumpkin"};
    // printVector(foods3);

    vector<string> foods = {"grapes","carrots","lemons"};
    foods.push_back("tortillas");



    cout << foods1 << endl; // is gonna print the hexadecimal value allocated in memory


    system("pause");
    return 0;
}