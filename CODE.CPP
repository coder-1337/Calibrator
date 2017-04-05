//This program is completely open source.
//This is kinda advanced calculator with versatile features.
//Any changes and modifications to make it better are welcomed.
#include<iostream.h>
#include<conio.h>
#include<string.h>
main()
{
clrscr();
cout<<" ___  __   _    ___   ___   ___    __  ___   __  ___\n";
cout<<"|    |__|  |     |    |__|  |__|  |__|  |   |  | |__|\n";
cout<<"|___ |  |  |___ _|_   |__|  |  \\  |  |  |   |__| |  \\ \n \n";
int operation, value1, value2, answer;
char name[20];
cout<<"Hey! what's your name bud? ";
cin.getline(name,20);
cout<<"Nice To meet you "<<name<<" Below are the list of all the available commands :) \n";
cout<<"Type 1 for Addition \n";
cout<<"Type 2 for subtraction \n";
cout<<"Type 3 for multiplication \n";
cout<<"Type 4 for division \n";
cout<<"Type 5 for Area of circle \n";
cout<<"Type 6 for Circumference of the circle \n";
cout<<"Type 7 for Area of Parallelogram";
cout<<"Type 8 for Area of Rhombus \n";
cout<<"Type 9 for Area of Rectangle \n";
cout<<"Type 7 for Area of Parallelogram";
cout<<"Type 8 for Area of Rhombus \n";
cout<<"Type 9 for Area of Rectangle \n";
cout<<"Type 10 for perimeter of rectangle (or square) ";
cout<<"Type 11 for Area of Triangle \n";
cin>>operation;
if(operation==1){
cout<<"enter the first value ";
cin>>value1;
cout<<"enter the second value ";
cin>>value2;
answer=value1+value2;
cout<<"the answer is"<<answer;
}
else if(operation==2){
cout<<"enter the first value ";
cin>>value1;
cout<<"enter the number which you want to subtract from the second number";
cin>>value2;
answer=value1-value2;
cout<<"the answer is "<<answer;
}
else if(operation==3){
cout<<"enter the first value ";
cin>>value1;
cout<<"enter the second value ";
cin>>value2;
answer=value1*value2;
cout<<"the answer is "<<answer;
}
else if(operation==4){
cout<<"enter the first value ";
cin>>value1;
cout<<"enter the second value from which you want to divide the first value ";
cin>>value2;
answer=value1/value2;
cout<<"the answer is "<<answer;
}
else if(operation==5){
cout<<"Enter the Radius of the circle ";
cin>>value1;
answer=3.14*value1*value1;
cout<<"the answer is "<<answer;
}
else if(operation==6){
cout<<"Enter the Radius of the circle ";
cin>>value1;
answer=3.14*value1*2;
cout<<"the answer is "<<answer;
}
else if(operation==7){
cout<<"Enter the length of the base ";
cin>>value1;
cout<<"enter the length of the height ";
cin>>value2;
answer=value1*value2;
cout<<"the answer is "<<answer;
}
else if(operation==8){
cout<<"Enter the length of the Diagonal 1 ";
cin>>value1;
cout<<"enter the length of the Diagonal 2 ";
cin>>value2;
answer=0.5*value1*value2;
cout<<"the answer is "<<answer;
}
else if(operation==9){
cout<<"Enter the length ";
cin>>value1;
cout<<"enter the Breadth ";
cin>>value2;
answer=value1*value2;
cout<<"the answer is "<<answer;
}
else if(operation==10){
cout<<"Enter the length ";
cin>>value1;
cout<<"enter the Breadth ";
cin>>value2;
answer=value1+value1+value2+value2;
cout<<"the answer is "<<answer;
}
else if(operation==11){
cout<<"Enter the base ";
cin>>value1;
cout<<"enter the height ";
cin>>value2;
answer=0.5*value1*value2;
cout<<"the answer is "<<answer;
}
else{
cout<<"make sure you entered the right command ";
}
getch();
}