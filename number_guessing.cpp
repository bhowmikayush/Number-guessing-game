  #include <iostream>
using namespace std;
int main(){
cout<<"--Welcome to the number guessing game--"<<endl<<endl;
    int attempt=1;
int target_num=rand()%100;
int user_num;
cout<<"    Guess any number (1-100):"<<endl<<endl;
while(1){
 cout<<"    Enter your guess:";
cin>>user_num;
if(user_num==target_num){
    cout<<"   \n    Correct Number!";
    break;
}
else if(user_num>target_num){
    cout<<"    Too high! Try again."<<endl<<endl;
}
else if(user_num<target_num){
    cout<<"    Too low! Try again."<<endl<<endl;

}
attempt++;
}
cout<<endl<<" You guessed the number in "<<attempt<<" attempts";
    return 0;
}