#include<bits/stdc++.h>
using namespace std;
int count1=0;

void resultchecker(string name1,int rollno1)
{
        ofstream quiz;
     quiz.open("quiz1.txt",ios::app);
    ifstream quizif("quiz1.txt");
    string line = " ";
     string TempUsername,subject;
     int TempRollno;
     int marks;
     bool found = false;
         while(getline(quizif,line)){
                stringstream iss(line);
                iss >> TempUsername;
                iss >> TempRollno;
                iss >> marks;
                iss >> subject;
                if(name1==TempUsername && rollno1==TempRollno){
                    cout << "The given Candidate has already given the test.\n"<<endl;
                    cout<<"Marks of the candidate is : "<<marks<<" out of 10 in "<<subject<<endl;
                    if(marks>=4)
                    {
                        cout<<"PASS"<<endl;
                    }
                    else
                    {
                        cout<<"FAIL"<<endl;
                    }
                    found =true;
                    break;
                }
            }
            if(!found)
            {
                cout<<"The user has given no test till now !"<<endl;
            }
}



void c()
{
    cout<<"Question 1- Which of the following is the correct syntax to print the message in C++ language?";
    cout<<"1. cout<<'Hello world!'; "<<endl;
    cout<<"2. cout << Hello world! ; "<<endl;
    cout<<"3. Out <<'Hello world!'  "<<endl;
    cout<<"4. None of the above"<<endl;
    cout<<"Your answer: ";
    int n;
    cin>>n;
    if(n==1)
    {
        count1=count1+2;
    }
    cout<<"Question 2- Which of the following is the address operator?";
    cout<<"1. @"<<endl;
    cout<<"2. #"<<endl;
    cout<<"3. &"<<endl;
    cout<<"4. %"<<endl;
    cout<<"Your answer: ";
    cin>>n;
    if(n==3)
    {
        count1=count1+2;
    }
    cout<<"Question 3- Which of the following comment syntax is correct to create a single-line comment in the C++ program?";
    cout<<"1. //Comment"<<endl;
    cout<<"2. /Comment/"<<endl;
    cout<<"3. Comment//"<<endl;
    cout<<"4. None of the above"<<endl;
    cout<<"Your answer: ";
    cin>>n;
    if(n==1)
    {
       count1=count1+2;
    }
    cout<<"Question 4- C++ is a ___ type of language.";
    cout<<"1. High-level Language"<<endl;
    cout<<"2. Low-level language"<<endl;
    cout<<"3. Middle-level language"<<endl;
    cout<<"4. None of the above"<<endl;
    cout<<"Your answer: ";
    cin>>n;
    if(n==3)
    {
        count1=count1+2;
    }
    cout<<"Question 5- For inserting a new line in C++ program, which one of the following statements can be used?";
    cout<<"1. \n"<<endl;
    cout<<"2. \r"<<endl;
    cout<<"3. \a"<<endl;
    cout<<"4. None of the above"<<endl;
    cout<<"Your answer: ";
    if(n==1)
    {
        count1=count1+2;
    }
    cout<<"Marks obtained in c test are : "<<count1<<" out of 10 !"<<endl;
    ofstream quiz;
    quiz.open("quiz1.txt",ios::app);
    quiz<<count1<<"c";
}

void java()
{
    cout<<"Question 1- Which of the following is not a Java features?";
    cout<<"1. Dynamic"<<endl;
    cout<<"2. Architecture Neutral"<<endl;
    cout<<"3. Use of pointers"<<endl;
    cout<<"4. Object-oriented"<<endl;
    cout<<"Your answer: ";
    int p;
    cin>>p;
    if(p==3)
    {
        count1=count1+2;
    }
    cout<<"Question 2- _____ is used to find and fix bugs in the Java programs."<<endl;
    cout<<"1. JVM"<<endl;
    cout<<"2. JRE"<<endl;
    cout<<"3. JDK"<<endl;
    cout<<"4. JDB"<<endl;
    cout<<"Your answer: ";
    cin>>p;
    if(p==4)
    {
        count1=count1+2;
    }
    cout<<"Question 3- Which package contains the Random class?"<<endl;
    cout<<"1. java.util package"<<endl;
    cout<<"2. java.lang package"<<endl;
    cout<<"3. java.awt package"<<endl;
    cout<<"4. java.io package"<<endl;
    cout<<"Your answer: ";
    cin>>p;
    if(p==1)
    {
        count1=count1+2;
    }
    cout<<"Question 4- Which of the following is a reserved keyword in Java?";
    cout<<"1. object"<<endl;
    cout<<"2. strictfp"<<endl;
    cout<<"3. main"<<endl;
    cout<<"4. system"<<endl;
    cout<<"Your answer: ";
    cin>>p;
    if(p==2)
    {
        count1=count1+2;
    }
    cout<<"Question 5- In java, jar stands for_____."<<endl;
    cout<<"1. Java Archive Runner"<<endl;
    cout<<"2. Java Application Resource"<<endl;
    cout<<"3. Java Application Runner"<<endl;
    cout<<"4. None of the above"<<endl;
    cout<<"Your answer: ";
    cin>>p;
    if(p==4)
    {
        count1=count1+2;
    }
    cout<<"Marks obtained in JAVA test are : "<<count1<<" out of 10 !"<<endl;
     ofstream quiz;
    quiz.open("quiz1.txt",ios::app);
    quiz<<count1<<"java";
}

void javascript()
{
    cout<<"Question 1- Which type of JavaScript language is ___"<<endl;
    cout<<"1. Object-Oriented"<<endl;
    cout<<"2. Object-Based"<<endl;
    cout<<"3. Assembly-language"<<endl;
    cout<<"4. High-level"<<endl;
    cout<<"Your answer: ";
    int q;
    cin>>q;
    if(q==2)
    {
        count1=count1+2;
    }
    cout<<"Question 2- Which one of the following also known as Conditional Expression:"<<endl;
    cout<<"1. Alternative to if-else"<<endl;
    cout<<"2. Switch statement"<<endl;
    cout<<"3. If-then-else statement"<<endl;
    cout<<"4. immediate if"<<endl;
    cout<<"Your answer: ";
    cin>>q;
    if(q==4)
    {
        count1=count1+2;
    }
    cout<<"Question 3- The 'function' and 'var' are known as:"<<endl;
    cout<<"1. Keywords"<<endl;
    cout<<"2. Data types"<<endl;
    cout<<"3. Declaration statements"<<endl;
    cout<<"4. Prototypes"<<endl;
    cout<<"Your answer: ";
    cin>>q;
    if(q==3)
    {
        count1=count1+2;
    }
    cout<<"Question 4- Which of the following number object function returns the value of the number?"<<endl;
    cout<<"1. toString()"<<endl;
    cout<<"2. valueOf()"<<endl;
    cout<<"3. toLocaleString()"<<endl;
    cout<<"4. toPrecision()"<<endl;
    cout<<"Your answer: ";
    cin>>q;
    if(q==2)
    {
        count1=count1+2;
    }
    cout<<"Question 5- Which one of the following operator is used to check weather a specific property exists or not";
    cout<<"1. Exists"<<endl;
    cout<<"2. exist"<<endl;
    cout<<"3. within"<<endl;
    cout<<"4. in"<<endl;
    cout<<"Your answer: ";
    cin>>q;
    if(q==4)
    {
        count1=count1+2;
    }
     cout<<"Marks obtained in JavaScript test are : "<<count1<<" out of 10 !"<<endl;
      ofstream quiz;
    quiz.open("quiz1.txt",ios::app);
    quiz<<count1<<"JavaScript";
}

void python()
{
    cout<<"Question 1- Who developed the Python language?"<<endl;
    cout<<"1. Zim Den"<<endl;
    cout<<"2. Guido van Rossum"<<endl;
    cout<<"3. Niene Stom"<<endl;
    cout<<"4. Wick van Rossum"<<endl;
    cout<<"Your answer: ";
    int r;
    cin>>r;
    if(r==2)
    {
        count1=count1+2;
    }
    cout<<"Question 2-  What is the maximum possible length of an identifier?"<<endl;
    cout<<"1. 16"<<endl;
    cout<<"2. 32"<<endl;
    cout<<"3. 64"<<endl;
    cout<<"none of these "<<endl;
    cout<<"Your answer: ";
    cin>>r;
    if(r==4)
    {
        count1=count1+2;
    }
    cout<<"Question 3-  Which one of the following is the correct extension of the Python file?"<<endl;
    cout<<"1. .py"<<endl;
    cout<<"2. .python"<<endl;
    cout<<"3. .p"<<endl;
    cout<<"4. none of these"<<endl;
    cout<<"Your answer: ";
    cin>>r;
    if(r==1)
    {
        count1=count1+2;
    }
    cout<<"Question 4-  What is the method inside the class in python language?"<<endl;
    cout<<"1. Object"<<endl;
    cout<<"2. Function"<<endl;
    cout<<"3. Attribute"<<endl;
    cout<<"4. Argument"<<endl;
    cout<<"Your answer: ";
    cin>>r;
    if(r==2)
    {
        count1=count1+2;
    }
    cout<<"Question 5-  Which of the following is not a keyword in Python language?"<<endl;
    cout<<"1. val"<<endl;
    cout<<"2. raise"<<endl;
    cout<<"3. try"<<endl;
    cout<<"4. with"<<endl;
    cout<<"Your answer: ";
    cin>>r;
    if(r==1)
    {
        count1=count1+2;
    }
     cout<<"Marks obtained in Python test are : "<<count1<<" out of 10 !"<<endl;
       ofstream quiz;
    quiz.open("quiz1.txt",ios::app);
    quiz<<count1<<"Python";
}

void sql()
{
    cout<<"Question 1- What is the full form of SQL?"<<endl;
    cout<<"1. Structured Query List"<<endl;
    cout<<"2. Structure Query Language"<<endl;
    cout<<"3. Sample Query Language"<<endl;
    cout<<"4. None of these"<<endl;
    cout<<"Your answer: ";
    int s;
    cin>>s;
    if(s==2)
    {
        count1=count1+2;
    }
    cout<<"Question 2-  Which of the following is not a valid SQL type?"<<endl;
    cout<<"1. FLOAT"<<endl;
    cout<<"2. NUMERIC"<<endl;
    cout<<"3. DECIMAL"<<endl;
    cout<<"4. CHARACTER"<<endl;
    cout<<"Your answer: ";
    cin>>s;
    if(s==3)
    {
       count1=count1+2;
    }
    cout<<"Question 3-  Which statement is used to delete all rows in a table without having the action logged?"<<endl;
    cout<<"1. DELETE"<<endl;
    cout<<"2. REMOVE"<<endl;
    cout<<"3. DROP"<<endl;
    cout<<"4. TRUNCATE"<<endl;
    cout<<"Your answer: ";
    cin>>s;
    if(s==4)
    {
        count1=count1+2;
    }
    cout<<"Question 4- What operator tests column for absence of data"<<endl;
    cout<<"1. NOT Operator"<<endl;
    cout<<"2. Exists Operator"<<endl;
    cout<<"3. IS NULL Operator"<<endl;
    cout<<"4. None of the above"<<endl;
     cout<<"Your answer: ";
    cin>>s;
    if(s==3)
    {
        count1=count1+2;
    }
    cout<<"Question 5- What is returned by INSTR ('JAVAT POINT', 'P')?"<<endl;
    cout<<"1. 6"<<endl;
    cout<<"2. 7"<<endl;
    cout<<"3. POINT"<<endl;
    cout<<"4. JAVAT"<<endl;
     cout<<"Your answer: ";
    cin>>s;
    if(s==2)
    {
        count1=count1+2;
    }
     cout<<"Marks obtained in SQL test are : "<<count1<<" out of 10 !"<<endl;
       ofstream quiz;
    quiz.open("quiz1.txt",ios::app);
    quiz<<count1;
}

void HTML()
{
    cout<<"Question 1- The correct sequence of HTML tags for starting a webpage is:"<<endl;
    cout<<"1. Head, Title, HTML, body"<<endl;
    cout<<"2. HTML, Body, Title, Head"<<endl;
    cout<<"3. HTML, Head, Title, Body"<<endl;
    cout<<"4. HTML, Head, Title, Body"<<endl;
     cout<<"Your answer: ";
    int t;
    cin>>t;
    if(t==4)
    {
        count1=count1+2;
    }
    cout<<"Question 2-  Which of the following element is responsible for making the text bold in HTML?"<<endl;
    cout<<"1. <pre>"<<endl;
    cout<<"2. <a>"<<endl;
    cout<<"3. <b>"<<endl;
    cout<<"4. <br>"<<endl;
     cout<<"Your answer: ";
    cin>>t;
    if(t==3)
    {
        count1=count1+2;
    }
    cout<<"Question 3-  Which of the following tag is used to insert a line-break in HTML?"<<endl;
    cout<<"1. <br>"<<endl;
    cout<<"2. <a>"<<endl;
    cout<<"3. <pre>"<<endl;
    cout<<"4. <b>"<<endl;
     cout<<"Your answer: ";
    cin>>t;
    if(t==1)
    {
        count1=count1+2;
    }
    cout<<"Question 4- Which character is used to represent the closing of a tag in HTML?"<<endl;
    cout<<"1. !"<<endl;
    cout<<"2. /"<<endl;
    cout<<"3. ."<<endl;
    cout<<"4. +"<<endl;
     cout<<"Your answer: ";
    cin>>t;
    if(t==2)
    {
        count1=count1+2;
    }
    cout<<"Question 5- <input> is:"<<endl;
    cout<<"1. a format tag"<<endl;
    cout<<"2. an empty tag"<<endl;
    cout<<"3. All of the above"<<endl;
    cout<<"4. None of the above"<<endl;
     cout<<"Your answer: ";
    cin>>t;
    if(t==2)
    {
        count1=count1+2;
    }
     cout<<"Marks obtained in HTML test are : "<<count1<<" out of 10 !"<<endl;
       ofstream quiz;
    quiz.open("quiz1.txt",ios::app);
    quiz<<count1<<"HTML";

}

void DART()
{
    cout<<"Question 1- Which of the following is not a data type in dart"<<endl;
    cout<<"1. Numbers"<<endl;
    cout<<"2. Booleans"<<endl;
    cout<<"3. Lists"<<endl;
    cout<<"4. Float"<<endl;
     cout<<"Your answer: ";
    int u;
    cin>>u;
    if(u==4)
    {
        count1=count1+2;
    }
    cout<<"Question 2- Is Dart a case sensitive programming language?"<<endl;
    cout<<"1. Yes"<<endl;
    cout<<"2. No"<<endl;
     cout<<"Your answer: ";
    cin>>u;
    if(u==1)
    {
        count1=count1+2;
    }
    cout<<"Question 3- Does Dart has a syntax for declaring interfaces?"<<endl;
    cout<<"1. Yes"<<endl;
    cout<<"2. No"<<endl;
     cout<<"Your answer: ";
    cin>>u;
    if(u==2)
    {
        count1=count1+2;
    }
    cout<<"Question 4- What does the function toLowerCase() do?"<<endl;
    cout<<"1. It compares object to another"<<endl;
    cout<<"2. It returns the string without any whitespace"<<endl;
    cout<<"3. It converts all string characters in to lower case"<<endl;
    cout<<"4. It converts all string characters in this to upper case"<<endl;
     cout<<"Your answer: ";
    cin>>u;
    if(u==3)
    {
        count1=count1+2;
    }
    cout<<"Question 5- What is the file extension of Dart?"<<endl;
    cout<<"1. .Dart"<<endl;
    cout<<"2. .Drt"<<endl;
    cout<<"3. .Dert"<<endl;
    cout<<"4. .flutter"<<endl;
     cout<<"Your answer: ";
    cin>>u;
    if(u==1)
    {
        count1=count1+2;
    }
     cout<<"Marks obtained in DART test are : "<<count1<<" out of 10 !"<<endl;
       ofstream quiz;
    quiz.open("quiz1.txt",ios::app);
    quiz<<count1<<"DART";
}
int main()
{
    ofstream quiz;
     quiz.open("quiz1.txt",ios::app);
    ifstream quizif("quiz1.txt");
    string line = " ";
    cout<<"Name of the candidate"<<endl;
    string name;
    cin>>name;
    cout<<"Roll number of the candidate"<<endl;
    int rollno;
    cin>>rollno;
     string TempUsername;
     int TempRollno;
     bool found = false;
     cout<<"1. Take test !"<<endl;
    cout<<"2. Result Checker"<<endl;
    cout<<"Your choice : "<<endl;
    int two;
    cin>>two;
    if(two==1){
            while(getline(quizif,line)){
                stringstream iss(line);
                iss >> TempUsername;
                 iss >> TempRollno;
                if(name==TempUsername && rollno==TempRollno ){
                    cout << "Username or Roll number already exists ! Please try a unique username or Roll number.\n";
                    found = true;
                    break;
                }
            }
     if(!found){
    quiz<<name<<" "<<rollno<<" ";
    quiz.close();
    cout<<"Enter the language you wish to appear for the test : "<<endl;
    cout<<"2. JAVA"<<endl;
    cout<<"3. JavaScript"<<endl;
    cout<<"4. PYTHON"<<endl;
    cout<<"5. SQL"<<endl;
    cout<<"6. HTML"<<endl;
    cout<<"7. DART"<<endl;
    cout<<"Choose number : ";
    int choice;
    cin>>choice;
    if(choice==1)
    {
        c();
    }
    if(choice==2)
    {
        java();
    }
    if(choice==3)
    {
        javascript();
    }
    if(choice==4)
    {
        python();
    }
    if(choice==5)
    {
       sql();
    }
    if(choice==6)
    {
        HTML();
    }
    if(choice==7)
    {
        DART();
    }
    }
    }
    if(two==2)
    {
        resultchecker(name,rollno);
    }


            return 0;
}
