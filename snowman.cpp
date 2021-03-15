 #include <iostream>
 using namespace std;
#include "snowman.hpp"
#include <string>
//static const range mumber
static const int MAX_RANGE=4;
static const int MIN_RANGE=1;
static const int IN_RANGE2=2;
static const int IN_RANGE3=3;
//function declertions:
     string hat (int n);
     string nose (int n);
     string left_eye (int n);
     string right_eye(int n);
     string left_arm (int n);
     string right_arm (int n);
     string toroso(int n);
     string base (int n);
     string right_arm_up(string right_eye);
     string left_arm_up(string left_eye);
//snowman function:
string ariel::snowman (int n){
    int count=0;
    const int MAX_SIZE=8;
    const int TO_NEXT_DIGIT=10;
    //body parts:
        string chosen_base;
        string chosen_right_arm;
        string chosen_toroso;
        string chosen_left_arm;
        string chosen_right_eye;
        string chosen_nose;
        string chosen_left_eye;
        string chosen_hat;
        //cases:
    const int CASE_BASE=0;
    const int CASE_TOROSO=1;
    const int CASE_RIGHT_ARM=2;
    const int CASE_LEFT_ARM=3;
    const int CASE_RIGHT_EYE=4;
    const int CASE_LEFT_EYE=5;
    const int CASE_NOSE=6;
    const int CASE_HAT=7;

//get the input number and split it to body parts
    while (n!=0){
        int digit=n%TO_NEXT_DIGIT;
         n=n/TO_NEXT_DIGIT;
        if(count>=MAX_SIZE){
        throw "TOO MUCH NUMBERS-SIZE NOT 8";
        break;
        }
        if(digit<MIN_RANGE || digit>MAX_RANGE){
        throw "NOT IN THE RANGE: 1-4";
            break;
        }
        //seprate each part of body:
        switch (count)
        {
        case CASE_BASE:
            chosen_base=base(digit);
            break;
        case CASE_TOROSO:
            chosen_toroso=toroso(digit);
            break;
        case CASE_RIGHT_ARM:
            chosen_right_arm=right_arm(digit);
            break;
        case CASE_LEFT_ARM:
            chosen_left_arm=left_arm(digit);
            break;
        case CASE_RIGHT_EYE:
            chosen_right_eye=right_eye(digit);
            break;
        case CASE_LEFT_EYE:
            chosen_left_eye=left_eye(digit);
            break;
        case CASE_NOSE:
            chosen_nose=nose(digit);
            break;
        case CASE_HAT:
            chosen_hat=hat(digit);
            break;
        default:
            break;
        }
        count++;
    }
    //check if smaller then 8:
    if (count<MAX_SIZE){
        throw("LESS THEN 8 NUMBERS");
    }
    //chain body parts depending on the cases:
    string final_ans;
    //two hands up:
    if (chosen_right_arm=="/\n" && chosen_left_arm=="\\")
    {
    //fix an end case at the when left arm up
    chosen_left_eye=left_arm_up(chosen_left_eye);
    //fix an end case at the line drop mark when the right arm is up
    chosen_right_eye=right_arm_up(chosen_right_eye);
    chosen_right_arm="/\n";
    chosen_toroso=" "+chosen_toroso+"\n";
    final_ans=chosen_hat+chosen_left_arm+chosen_left_eye+chosen_nose+chosen_right_eye+chosen_right_arm+chosen_toroso+chosen_base;
    }
    //only left arm up:
    else if(chosen_left_arm=="\\"){
    //fix an end case at the when left arm up
    chosen_left_eye=left_arm_up(chosen_left_eye);
    final_ans=chosen_hat+chosen_left_arm+chosen_left_eye+chosen_nose+chosen_right_eye+" "+chosen_toroso+chosen_right_arm+chosen_base;
    }
    //only right arm up:
    else if (chosen_right_arm=="/\n")
    {
    //fix an end case at the line drop mark when the right arm is up
    chosen_right_eye=right_arm_up(chosen_right_eye);
    chosen_right_arm="/\n";
    chosen_toroso=chosen_toroso+"\n";
    final_ans=chosen_hat+chosen_left_eye+chosen_nose+chosen_right_eye+chosen_right_arm+chosen_left_arm+chosen_toroso+chosen_base;

    // cout << final_ans << endl;
    }
    else{
     final_ans=chosen_hat+chosen_left_eye+chosen_nose+chosen_right_eye+chosen_left_arm+chosen_toroso+chosen_right_arm+chosen_base;
    }
    return final_ans;
}
//function for each body part
//
///
//
 string hat (int n){
     string hat;
    if (n==MIN_RANGE){
       hat= " _===_\n";
    }
    else if (n==IN_RANGE2)
    {
        hat= "  ___ \n .....\n";
    }
    else if (n==IN_RANGE3)
    {
        hat= "   _ \n  /_\\ \n";
    }
    else
    {
       hat= "  ___ \n (_*_)\n";
    }
    return hat;
}
 string nose (int n){
     string nose;
    if (n==MIN_RANGE){
       nose= ",";
    }
    else if (n==IN_RANGE2)
    {
        nose= ".";
    }
    else if (n==IN_RANGE3)
    {
        nose= "_";
    }
    else
    {
       nose= " ";
    }
    return nose;
}
 string left_eye (int n){
     string left_eye;
    if (n==MIN_RANGE){
       left_eye= " (.";
    }
    else if (n==IN_RANGE2)
    {
        left_eye= " (o";
    }
    else if (n==IN_RANGE3)
    {
        left_eye= " (O";
    }
    else
    {
       left_eye= " (-";
    }
    return left_eye;
}
 string right_eye (int n){
     string right_eye;
    if (n==MIN_RANGE){
       right_eye= ".)\n";
    }
    else if (n==IN_RANGE2)
    {
        right_eye= "o)\n";
    }
    else if (n==IN_RANGE3)
    {
        right_eye= "O)\n";
    }
    else
    {
       right_eye= "-)\n";
    }
    return right_eye;
}
 string left_arm (int n){
     string left_arm;
    if (n==MIN_RANGE){
       left_arm= "<";
    }
    else if (n==IN_RANGE2)
    {
        left_arm= "\\";
    }
    else if (n==IN_RANGE3)
    {
        left_arm= "/";
    }
    else
    {
       left_arm= " ";
    }
    return left_arm;
}
 string right_arm (int n){
     string right_arm;
    if (n==MIN_RANGE){
       right_arm= ">\n";
    }
    else if (n==IN_RANGE2)
    {
        right_arm= "/\n";
    }
    else if (n==IN_RANGE3)
    {
        right_arm= "\\\n";
    }
    else
    {
       right_arm= "\n";
    }
    return right_arm;
}
 string toroso (int n){
     string toroso;
    if (n==MIN_RANGE){
       toroso= "( : )";
    }
    else if (n==IN_RANGE2)
    {
        toroso= "(] [)";
    }
    else if (n==IN_RANGE3)
    {
        toroso= "(> <)";
    }
    else
    {
       toroso= "(   )";
    }
    return toroso;
}
 string base (int n){
     string base;
    if (n==MIN_RANGE){
       base= " ( : )";
    }
    else if (n==IN_RANGE2)
    {
        base= " (\" \")";
    }
    else if (n==IN_RANGE3)
    {
        base= " (___)";
    }
    else
    {
       base= " (   )";
    }
    return base;
}
 string right_arm_up(string right_eye){
    if (right_eye==".)\n"){
       right_eye= ".)";
    }
    else if (right_eye=="o)\n")
    {
        right_eye= "o)";
    }
    else if (right_eye=="O)\n")
    {
        right_eye= "O)";
    }
    else
    {
       right_eye= "-)";
    }
    return right_eye;
 }
 string left_arm_up(string left_eye){
    if (left_eye==" (."){
       left_eye= "(.";
    }
    else if (left_eye==" (o")
    {
        left_eye= "(o";
    }
    else if (left_eye==" (O")
    {
        left_eye= "(O";
    }
    else
    {
       left_eye= "(-";
    }
    return left_eye;
 }