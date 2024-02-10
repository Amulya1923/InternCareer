#include<iostream>
#include<string>
using namespace std;

int calculate;
int sum;
class Quiz
 {
 	private:
 	  string Ques;
 	  string Ans1;
 	  string Ans2;
 	  string Ans3;
 	  string Ans4;
 	  int Right_Answer;
 	  int marks;
 	
 	public:
 		void VALUES(string,string,string,string,string,int,int);
 		
 	void ASK();	
 };
 
int main()
{
	cout<<"\n\n\t\t\t\tQUIZ ZONE"<<endl;
	cout<<"\n To start press enter"<<"QUIZ..."<<endl;
	
	//input
	cin.get();
	
	string Name;
	int Age;
	
	//Input the details
	cout<<"Enter your name"<<endl;
	cin>>Name;
	cout<<endl;
	
	cout<<"Your age"<<endl;
	cin>>Name;
	cout<<endl;
	
	string Respond;
	cout<<"Ready for the Quiz"<<"The Quiz"<<Name<<"?yes/no"<<endl;
	cin>>Respond;
	
	if(Respond=="yes")
	 {
	 	cout<<endl;
	 	cout<<"Best of luck!"<<endl;
	 }
	 else{
	 	cout<<"Thank you!"<<endl;
	 	return 0;
	 }
	 
	 Quiz A;
	 Quiz B;
         Quiz C;
	 Quiz D;
	 Quiz E;
	 Quiz F;
	 Quiz G;
	 Quiz H;
	 Quiz I;
	 Quiz J;
	 
	 A.VALUES("How many states in india?","28","25","20","26", 1,10);
	 B.VALUES("Who is the author of the novel Harry Potter?","Robert Noyce","William Shakespeare","J.K.Rowling","James Patterson", 3,10);
	 C.VALUES("What is square of four?","15","16","14","13", 2,10);
	 D.VALUES("Who is the father of electricity?","Newton","Albert Einstein","Nikola Tesla","Michael Faraday", 4,10);
	 E.VALUES("What is the currency of india?","rupees","Dollar","Dinar","Bitcoin", 1,10);
	 F.VALUES("What is the Birth month of Shivaji Maharaj ?","April","February","August","January", 2,10);
	 G.VALUES("How many IIT in india?","19","20","23","21", 3,10);
	 H.VALUES("Which is the richest state in india?","Telangana","Gujarat","Goa","Maharashtra", 4,10);
	 I.VALUES("In which country white elephant found?","India","America","Thailand","Japan", 3,10);
	 J.VALUES("When google is invented?:","2000","1998","1996","1995", 2,10);
	 
	 A.ASK();
	 B.ASK();
	 C.ASK();
	 D.ASK();
	 E.ASK();
	 F.ASK();
	 G.ASK();
	 H.ASK();
	 I.ASK();
	 J.ASK();
	 
	 //Display the sum score
	 cout<<"Total score="<<sum<<"/100"<<endl;
	 
	 //Display the results
	 
	 //If the player pass the quiz
	 if(sum >= 70) {
	 	cout<<"Congratulation!!! You have passed the"<<"quiz!"<<endl;
	 }
	 
	 //otherwise
	 else{
	 	cout<<"SORRY! You failed the quiz."<<endl;
	 	cout<<"Better luck next time."<<endl;
	 }
	 return 0;
}

//the questions
void Quiz::VALUES(string q,string a1,string a2,string a3,string a4, int ca, int pa)
    
   {
          Ques = q;
	  Ans1 = a1;
	  Ans2 = a2;
	  Ans3 = a3;
	  Ans4 = a4;
	  Right_Answer = ca;
	  marks = pa;
   } 
   
   //Function to ask questions
   void Quiz::ASK()
    {
    	cout<<endl;
    	
    	//print the questions
    	cout<<Ques<<endl;
    	cout<<"1. "<<Ans1<<endl;
    	cout<<"2. "<<Ans2<<endl;
    	cout<<"3. "<<Ans3<<endl;
    	cout<<"4. "<<Ans4<<endl;
    	cout<<endl;
    	
    	//Display the answer
    	cout<<"What is your answer?(in number)"<<endl;
    	cin>>calculate;
    	
    	//If the answer is correct
    	if(calculate == Right_Answer){
    		cout<<endl;
    		cout<<"Correct !"<<endl;
    		
    	//Update the correct score
		sum = sum + marks;
		cout<<"Score="<<marks<<"/"<<marks<<"!"<<endl;
		cout<<endl;	
		}
		
	//otherwise
	else{
		cout<<endl;
		cout<<"Wrong !"<<endl;
		cout<<"Score=0"<<"/"<<marks<<"!"<<endl;
		cout<<"Correct Answer="<<Right_Answer<<"."<<endl;
		cout<<endl;
	   }
    }
