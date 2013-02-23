//
//  testAndGrade.cpp
//  
//
//  Created by ashley on 12/9/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int test(){
    
    int question = 1;
    int num1 = 0;
    int num2 = 0;
    int product = 0;
    int answers = 0;
    
    while (question <= 10){
        num1 = rand() % 10;
        num2 = rand() % 10;
        
        cout << question << ". ";
        cout << num1 << " x " << num2 << " = ";
        
        cin >> product;
        
        if (product == (num1 * num2)){
            cout << "VERY GOOD!" << endl;
            answers++;
        }
        else
            cout << "Wrong answer. Get em on the next one!" << endl;
        
        question++;
    }
    
    return answers;
}

int grade(int correct){
    
    return correct * 10;
}


int main(){
    
    int correctAnswers, finalGrade;
    int testCount = 0;
    string takeAnother = "no";
    
    srand(time(NULL));
    
    while (takeAnother == "no"){
        cout << "Welcome to the Multiplication Math Tester!" << endl << endl;
        cout << "Please input your answer and press the 'Enter' key to continue." << endl << endl;
        cout << "***************************************************************" << endl;
        cout << "**                          START                            **" << endl;
        cout << "***************************************************************" << endl << endl;
        
        correctAnswers = 0;
        finalGrade = 0;
        testCount++;
        cout << "Test " << testCount << endl << endl;
        
        correctAnswers = test();
        finalGrade = grade(correctAnswers);
    
        cout << endl << "You answered " << correctAnswers << " correct" << endl;
        cout << "Your grade is: " << finalGrade << "%" << endl << endl;
    
        cout << "Would you like to take another test (yes/no)?" << endl;
        cin >> takeAnother; 
        
        /*if ((takeAnother!= "yes") || (takeAnother != "no")) {
            while ((takeAnother!= "yes") || (takeAnother != "no")) {
            cout << "Command not found. Please enter 'yes' or 'no'." << endl;
                cin >> takeAnother;
            }
        }*/
        
        cout << "***************************************************************" << endl;
        cout << "**                          FINISH                           **" << endl;
        cout << "***************************************************************" << endl << endl;
        
    }
    return 0;
}
