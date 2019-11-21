#include <iostream>
#include <string>
using namespace std;

char guess;
int total;

class Question
{
private:
string QuestionText;
string answer1;
string answer2;
string answer3;
string answer4;
public:
  void setValues(string, string, string, string, string, char, int); 
  void askQuestion(); 
char CorrectAnswer;
int Questionscore;
};

int main() 
{
string name;
string response;

cout << "Press [enter] to start!" << endl;
cin.get();

cout << "What is your name?" << endl;
cin >> name;

cout << "Are you ready for the trivia, " << name << "? Yes/No";
cin >> response;

if(response == "Yes" || response == "yes")
{
  cout << "\nLet's begin! And good luck!" << endl;
  cout << "Press enter to continue." << endl;
  cin.get();
  cin.ignore();
}
else{
cout<<"\n";
cout<<"Goodbye.\n";
cin.ignore();
cin.get();
}

//Instances of the question
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;

    q1.setValues("1. What is the most common google search of 2018?",
    "facebook",
    "youtube", 
    "gmail", 
    "amazon", 
    'a',
    1);

    q2.setValues("2. What percent of the population is left handed?",
    "30%",
    "15%", 
    "7%", 
    "10%", 
    'd',
    4);
    
    q3.setValues("3. How many slices of bread are in a loaf?",
    "25",
    "20", 
    "15", 
    "28", 
    'b',
    2);
    
    q4.setValues("4. What was the first instagram post?",
    "coffee",
    "dog", 
    "person", 
    "scenery", 
    'b',
    2);
      
    q5.setValues("5. Nephelococcygia is the practice of doing what?",
    "Finding shapes in clouds",
    "Sleeping with your eyes open", 
    "Swimming in freezing water", 
    "Breaking glass with your voice", 
    'a',
    1);
   

    q6.setValues("6. Which insect shorted out an early supercomputer and inspired the term computer bug?",
    "Moth",
    "Roach", 
    "Fly", 
    "Japanese beetle", 
    'a',
    1);

    q7.setValues("7. What letter must appear at the beginning of the registration number of all non-military aircrafts in the U.S.?",
    "N",
    "A", 
    "L", 
    "U", 
    'a',
    1);

    q8.setValues("8. What is cancer?",
    "Disease of the lungs",
    "Disease of the brain", 
    "Disease of the cells", 
    "Disease of the heart", 
    'c',
    3);

    q9.setValues("9. Which of the following men does not have a chemical element named for him?",
    "Albert Einstein",
    "Niels Bohr", 
    "Isaac Newton", 
    "Enrico Fermi", 
    'c',
    3);

    q10.setValues("10. Compiled by Benjamin Franklin in 1737, The Drinker's Dictionary, included all but which of these synonyms for drunkenness?",
    "Nimptopsical",
    "Buzzey", 
    "Staggerish", 
    "Pifflicated", 
    'd',
    4);



    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();
  
  cout << "You answered " << total << "out of 10 wrong.";
  
    return 0;
}

void Question::setValues(string q, string a1, string a2, string a3, string a4, char correct, int s)
{
  QuestionText = q;
  answer1 = a1;
  answer2 = a2;
  answer3 = a3;
  answer4 = a4;
  CorrectAnswer = correct;
  Questionscore = s;
}

void Question:: askQuestion()
{
   cout << "\n";
    cout << QuestionText << "\n";
    cout << "a. " << answer1 << "\n";
    cout << "b. " << answer2 << "\n";
    cout << "c. " << answer3 << "\n";
    cout << "d. " << answer4 << "\n";
    cout << "\n";

    //User enters their answer.
    cout << "What is your answer?" << "\n";
    cin >> guess;
    //If their answer is correct, message is displayed and 4 points are added to their score.
    if (guess == CorrectAnswer) {
        cout << "\n";
        cout << "Correct!" << "\n";
        total = total + Questionscore;
        cout << "\n";
        cout << "Press enter to continue." << "\n";
        cin.get();
        cin.ignore();
    }
    else //If their answer is incorrect, message is displayed, no points added. 
         //Correct answer displayed. 
    {
        cout << "\n";
        cout << "Sorry, you're wrong..." << "\n";
        cout << "The correct answer is " << CorrectAnswer << "." << "\n";
        cout << "\n";
        cout << "Press enter to continue." << "\n";
        cin.get();
        cin.ignore();
    }
}