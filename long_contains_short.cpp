#include <iostream>

using namespace std;

string find_sub_string(std::string str_long, int pos, int length_short){
    //cout<< "in find_sub_string"<<endl ;    
    std::string sub_string, temp;
    sub_string = temp.append(str_long, pos, length_short) ;
    return sub_string;
}

int check_for_rest_of_the_string(std::string str_short, std::string sub_string){
  //cout<< "in check_for_rest_of_the_string"<<endl ;
    if (str_short == sub_string)
      return 1;
    else
      return 0;
}


void short_in_long(std::string str_long, std::string str_short){
    
    int length_long = str_long.length();
    int length_short = str_short.length();
     int contain_bool;
    std::string sub_string;
    for (int i = 0; i< length_long - 1 ; i++ ){
      //cout<< "******";
        //cout << str_long[i]<<endl;
        //cout<< str_short[0]<<endl;
      if(str_long[i] == str_short[0])
        sub_string = find_sub_string(str_long, i, length_short);
        //cout<< sub_string<<endl;
        contain_bool = check_for_rest_of_the_string(str_short, sub_string);
        if (contain_bool == 1)
        {    cout<< "Contains<<sub_string";
             cout<<" at position " <<i + 1 << endl;
            break;
        }
    }    
}

int main()
{
   string str_long, str_short;
   str_long = "anisha kaul is the best and i know it" ;
   str_short = "best";
   cout<<"Long String:"<< str_long<<endl;
   cout<<"Long String:"<< str_short<<endl;
   short_in_long(str_long, str_short);
   return 0;
}
